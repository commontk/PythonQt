#-----------------------------------------------------------------------------
# NOTE: The CMake files have been contributed to PythonQt and have not been tested with the current
# PythonQt version. They have not yet been updated to support Qt 5 and/or Python 3.
#
# If you are not a CMake expert, you should better use the provided qmake profiles.
#-----------------------------------------------------------------------------

cmake_minimum_required(VERSION 2.8)

#-----------------------------------------------------------------------------
project(PythonQt)
#-----------------------------------------------------------------------------

include(CTestUseLaunchers OPTIONAL)

#----------------------------------------------------------------------------
# Qt version

set(PythonQt_QT_VERSION 5 CACHE STRING "Pick a version of Qt to use: 4 or 5")

set(minimum_required_qt5_version "5.3.0")
set(minimum_required_qt4_version "4.6.2")

#-----------------------------------------------------------------------------
# Python libraries

find_package(PythonLibs REQUIRED)
include_directories("${PYTHON_INCLUDE_DIR}")
add_definitions(-DPYTHONQT_USE_RELEASE_PYTHON_FALLBACK)

#-----------------------------------------------------------------------------
# Build options
option(PythonQt_Wrap_QtAll "Make all Qt components available in python" OFF)

if(PythonQt_QT_VERSION MATCHES 4)
  set(qtlibs core gui network opengl sql svg uitools webkit xml xmlpatterns locale)
else()
  set(qtlibs Core Network OpenGL Sql Svg Widgets WebKitWidgets Xml XmlPatterns UiTools)
endif()

if(NOT DEFINED PythonQt_INSTALL_RUNTIME_DIR)
  set(PythonQt_INSTALL_RUNTIME_DIR bin)
endif()

if(NOT DEFINED PythonQt_INSTALL_LIBRARY_DIR)
  set(PythonQt_INSTALL_LIBRARY_DIR lib${LIB_SUFFIX})
endif()

if(NOT DEFINED PythonQt_INSTALL_ARCHIVE_DIR)
  set(PythonQt_INSTALL_ARCHIVE_DIR lib${LIB_SUFFIX})
endif()

if(NOT DEFINED PythonQt_INSTALL_INCLUDE_DIR)
  set(PythonQt_INSTALL_INCLUDE_DIR include/PythonQt)
endif()

option(PythonQt_Wrap_QtAll "Make all Qt components available in python" OFF)

foreach(qtlib ${qtlibs})
  OPTION(PythonQt_Wrap_Qt${qtlib} "Make all of Qt${qtlib} available in python" OFF)
endforeach()

# Force option if it applies
if(PythonQt_Wrap_QtAll)
  list(REMOVE_ITEM qtlibs XmlPatterns) # xmlpatterns wrapper does *NOT* build at all :(
  foreach(qtlib ${qtlibs})
    if(NOT ${PythonQt_Wrap_Qt${qtlib}})
      set(PythonQt_Wrap_Qt${qtlib} ON CACHE BOOL "Make all of Qt${qtlib} available in python" FORCE)
      message(STATUS "Enabling [PythonQt_Wrap_Qt${qtlib}] because of [PythonQt_Wrap_QtAll] evaluates to True")
    endif()
  endforeach()
endif()

option(PythonQt_DEBUG "Enable/Disable PythonQt debug output" OFF)
if(PythonQt_DEBUG)
  add_definitions(-DPYTHONQT_DEBUG)
else()
  remove_definitions(-DPYTHONQT_DEBUG)
endif()

#-----------------------------------------------------------------------------
# Setup Qt

if(PythonQt_QT_VERSION MATCHES 5)

  if(BUILD_TESTING)
    list(APPEND qtlibs Test)
  endif()

  find_package(Qt5 ${minimum_required_qt5_version} COMPONENTS ${qtlibs} REQUIRED)

  if(Qt5_DIR)
    get_filename_component(_Qt5_DIR "${Qt5_DIR}/../../../" ABSOLUTE)
    list(FIND CMAKE_PREFIX_PATH "${_Qt5_DIR}" _result)
    if(_result LESS 0)
      set(CMAKE_PREFIX_PATH "${_Qt5_DIR};${CMAKE_PREFIX_PATH}" CACHE PATH "" FORCE)
    endif()
  endif()

  get_target_property(_qmake_exec Qt5::qmake LOCATION)
  execute_process(COMMAND ${_qmake_exec} -query QT_INSTALL_BINS
    RESULT_VARIABLE _result
    OUTPUT_VARIABLE QT_BINARY_DIR
    ERROR_VARIABLE _error
    )
  string(STRIP "${QT_BINARY_DIR}" QT_BINARY_DIR)
  if(_result OR NOT EXISTS "${QT_BINARY_DIR}")
    message(FATAL_ERROR "Could not determine Qt binary directory: ${_result} ${QT_BINARY_DIR} ${_error}")
  endif()

  set(QT_LIBRARIES )
  foreach(qtlib ${qtlibs})
       include_directories(${Qt5${qtlib}_INCLUDE_DIRS})
       list(APPEND QT_LIBRARIES ${Qt5${qtlib}_LIBRARIES})
       add_definitions(${Qt5${qtlib}_DEFINITIONS})
  endforeach()

  #-----------------------------------------------------------------------------
  # The variable "generated_cpp_suffix" allows to conditionnally compile the generated wrappers
  # associated with the Qt version being used.
  set(generated_cpp_suffix "_${Qt5Core_VERSION_MAJOR}${Qt5Core_VERSION_MINOR}")

else()
  #-----------------------------------------------------------------------------
  # Setup Qt4

  find_package(Qt4)

  if(QT4_FOUND)

    set(found_qt_version ${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}.${QT_VERSION_PATCH})

    if(${found_qt_version} VERSION_LESS ${minimum_required_qt4_version})
      message(FATAL_ERROR "error: PythonQt requires Qt >= ${minimum_required_qt4_version} -- you cannot use Qt ${found_qt_version}.")
    endif()

    # Enable required qt module
    foreach(qtlib ${qtlibs})
      string(TOUPPER ${qtlib} qtlib_uppercase)
      if (NOT ${QT_QT${qtlib_uppercase}_FOUND})
        message(FATAL_ERROR "QT_QT${${qtlib_uppercase} *not* FOUND - Try to disable PythonQt_Wrap_Qt${qtlib}")
      endif()
      set(QT_USE_QT${qtlib_uppercase} ${PythonQt_Wrap_Qt${qtlib}})
    endforeach()

    set(QT_USE_QTTEST ${BUILD_TESTING})

    include(${QT_USE_FILE})
  else()
    message(FATAL_ERROR "error: Qt4 was not found on your system. You probably need to set the QT_QMAKE_EXECUTABLE variable")
  endif()

  #-----------------------------------------------------------------------------
  # The variable "generated_cpp_suffix" allows to conditionnally compile the generated wrappers
  # associated with the Qt version being used.
  set(generated_cpp_suffix "_${QT_VERSION_MAJOR}${QT_VERSION_MINOR}")

  # TODO: generated headers for Qt4.8 contains several locales that are not available
  #       out of the box -> force 4.7
  if("${generated_cpp_suffix}" STREQUAL "_46" OR "${generated_cpp_suffix}" STREQUAL "_48")
    set(generated_cpp_suffix "_47") # Also use 4.7 wrappers for 4.6.x version
   endif()
endif()
#-----------------------------------------------------------------------------
# Sources

set(sources
    src/PythonQtBoolResult.cpp
    src/PythonQtClassInfo.cpp
    src/PythonQtClassWrapper.cpp
    src/PythonQtConversion.cpp
    src/PythonQt.cpp
    src/PythonQtImporter.cpp
    src/PythonQtInstanceWrapper.cpp
    src/PythonQtMethodInfo.cpp
    src/PythonQtMisc.cpp
    src/PythonQtObjectPtr.cpp
    src/PythonQtQFileImporter.cpp
    src/PythonQtSignalReceiver.cpp
    src/PythonQtSlot.cpp
    src/PythonQtSignal.cpp
    src/PythonQtStdDecorators.cpp
    src/PythonQtStdIn.cpp
    src/PythonQtStdOut.cpp
    src/gui/PythonQtScriptingConsole.cpp

    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin0.cpp
    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin_init.cpp
    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin0.cpp
    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin_init.cpp
)

#-----------------------------------------------------------------------------
# List headers.  This is list is used for the install command.

set(headers
    src/PythonQtBoolResult.h
    src/PythonQtClassInfo.h
    src/PythonQtClassWrapper.h
    src/PythonQtConversion.h
    src/PythonQtCppWrapperFactory.h
    src/PythonQtDoc.h
    src/PythonQt.h
    src/PythonQtImporter.h
    src/PythonQtImportFileInterface.h
    src/PythonQtInstanceWrapper.h
    src/PythonQtMethodInfo.h
    src/PythonQtMisc.h
    src/PythonQtObjectPtr.h
    src/PythonQtQFileImporter.h
    src/PythonQtSignalReceiver.h
    src/PythonQtSlot.h
    src/PythonQtSignal.h
    src/PythonQtStdDecorators.h
    src/PythonQtStdIn.h
    src/PythonQtStdOut.h
    src/PythonQtSystem.h
    src/PythonQtVariants.h
    src/PythonQtPythonInclude.h
    src/PythonQtUtils.h
)
if(PythonQt_QT_VERSION MATCHES 4)
  set(sources ${sources} generated_cpp${generated_cpp_suffix}/PythonQt_QtBindings.cpp)
  set(headers ${headers} generated_cpp${generated_cpp_suffix}/PythonQt_QtBindings.h)
endif()
#-----------------------------------------------------------------------------
# Headers that should run through moc

set(moc_sources
    src/PythonQt.h
    src/PythonQtSignalReceiver.h
    src/PythonQtStdDecorators.h
    src/gui/PythonQtScriptingConsole.h

    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin0.h
    generated_cpp${generated_cpp_suffix}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin0.h
)

#-----------------------------------------------------------------------------
# Add extra sources
foreach(qtlib ${qtlibs})

  if (${PythonQt_Wrap_Qt${qtlib}})

    ADD_DEFINITIONS(-DPYTHONQT_WRAP_Qt${qtlib})

    set(file_prefix generated_cpp${generated_cpp_suffix}/com_trolltech_qt_${qtlib}/com_trolltech_qt_${qtlib})

    foreach(index RANGE 0 11)

      # Source files
      if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${file_prefix}${index}.cpp)
        list(APPEND sources ${file_prefix}${index}.cpp)
      endif()

      # Headers that should run through moc
      if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${file_prefix}${index}.h)
        list(APPEND moc_sources ${file_prefix}${index}.h)
      endif()

    endforeach()

    list(APPEND sources ${file_prefix}_init.cpp)

  endif()
endforeach()

#-----------------------------------------------------------------------------
# UI files
set(ui_sources )

#-----------------------------------------------------------------------------
# Resources
set(qrc_sources )

#-----------------------------------------------------------------------------
# Do wrapping
if(PythonQt_QT_VERSION MATCHES 4)
  qt4_wrap_cpp(gen_moc_sources ${moc_sources})
  qt4_wrap_ui(gen_ui_sources ${ui_sources})
  qt4_add_resources(gen_qrc_sources ${qrc_sources})
else()
  qt5_wrap_cpp(gen_moc_sources ${moc_sources})
  qt5_wrap_ui(gen_ui_sources ${ui_sources})
  qt5_add_resources(gen_qrc_sources ${qrc_sources})
endif()
#-----------------------------------------------------------------------------
# Build the library

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  )

add_library(PythonQt SHARED
            ${sources}
            ${gen_moc_sources}
            ${gen_ui_sources}
            ${gen_qrc_sources}
  )
set_target_properties(PythonQt PROPERTIES DEFINE_SYMBOL PYTHONQT_EXPORTS)

#
# That should solve linkage error on Mac when the project is used in a superbuild setup
# See http://blog.onesadcookie.com/2008/01/installname-magic.html
#
set_target_properties(PythonQt  PROPERTIES
  INSTALL_NAME_DIR "${CMAKE_INSTALL_PREFIX}/lib"
  )

target_link_libraries(PythonQt
              ${PYTHON_LIBRARY}
              ${QT_LIBRARIES}
  )

#-----------------------------------------------------------------------------
# Install library (on windows, put the dll in 'bin' and the archive in 'lib')

install(TARGETS PythonQt
        RUNTIME DESTINATION ${PythonQt_INSTALL_RUNTIME_DIR}
        LIBRARY DESTINATION ${PythonQt_INSTALL_LIBRARY_DIR}
        ARCHIVE DESTINATION ${PythonQt_INSTALL_ARCHIVE_DIR})
install(FILES ${headers} DESTINATION ${PythonQt_INSTALL_INCLUDE_DIR})

#-----------------------------------------------------------------------------
# Testing

option(BUILD_TESTING "Build the testing tree." OFF)
include(CTest)

if(BUILD_TESTING)
  create_test_sourcelist(test_sources PythonQtCppTests.cpp
    tests/PythonQtTestMain.cpp
    )

  list(APPEND test_sources
    tests/PythonQtTests.cpp
    tests/PythonQtTests.h
    )
  if(PythonQt_QT_VERSION MATCHES 4)
    QT4_WRAP_CPP(test_sources
      tests/PythonQtTests.h
      )
  else()
    QT5_WRAP_CPP(test_sources
      tests/PythonQtTests.h
      )
  endif()

  set_property(SOURCE tests/PythonQtTestMain.cpp PROPERTY COMPILE_DEFINITIONS "main=tests_PythonQtTestMain")

  add_executable(PythonQtCppTests ${test_sources})
  target_link_libraries(PythonQtCppTests PythonQt ${Qt5Test_LIBRARIES})

  add_test(
    NAME tests_PythonQtTestMain
    COMMAND ${Slicer_LAUNCH_COMMAND} $<TARGET_FILE:PythonQtCppTests> tests/PythonQtTestMain
    )
endif()

