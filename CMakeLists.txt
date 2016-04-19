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

#----------------------------------------------------------------------------
# Qt version

# Sanity checks
if(DEFINED Qt5_DIR AND DEFINED QT_QMAKE_EXECUTABLE)
  message(FATAL_ERROR
    "${PROJECT_NAME} shoult NOT be configured setting both Qt5_DIR and QT_QMAKE_EXECUTABLE options.
To build with Qt4, specify QT_QMAKE_EXECUTABLE. To build with Qt5, specify  Qt5_DIR.")
endif()

# Set PythonQt_QT_VERSION
if(DEFINED Qt5_DIR)
  message(STATUS "${PROJECT_NAME}: Setting PythonQt_QT_VERSION to 5 because Qt5_DIR is defined.")
  set(PythonQt_QT_VERSION 5)
elseif(DEFINED QT_QMAKE_EXECUTABLE)
  message(STATUS "${PROJECT_NAME}: Setting PythonQt_QT_VERSION to 4 because QT_QMAKE_EXECUTABLE is defined.")
  set(PythonQt_QT_VERSION 4)
else()
  set(PythonQt_QT_VERSION 4 CACHE STRING "Pick a version of Qt to use: 4 or 5")
  # Set the possible values of Qt version for cmake-gui
  set_property(CACHE PythonQt_QT_VERSION PROPERTY STRINGS "4" "5")
endif()

# Requirements
set(minimum_required_qt5_version "5.3.0")
set(minimum_required_qt4_version "4.6.2")
set(minimum_required_qt_version ${minimum_required_qt${PythonQt_QT_VERSION}_version})

# Qt components
set(qt5libs Core Widgets Network OpenGL Sql Svg UiTools WebKitWidgets Xml XmlPatterns)
set(qt4libs core gui network opengl sql svg uitools webkit xml xmlpatterns)
set(qtlibs ${qt${PythonQt_QT_VERSION}libs})

#-----------------------------------------------------------------------------
# Python libraries

find_package(PythonLibs REQUIRED)
include_directories("${PYTHON_INCLUDE_DIR}")
add_definitions(
  -DPYTHONQT_USE_RELEASE_PYTHON_FALLBACK
  -DPYTHONQT_SUPPORT_NAME_PROPERTY
  )

#-----------------------------------------------------------------------------
# Build options

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

# Since the Qt bindings sources used for both Qt4 and Qt5 are
# grouped using Qt4 naming convention, qt_wrapped_libs variables are the
# same for the two Qt versions.
set(qt4_wrapped_libs ${qt4libs})
set(qt5_wrapped_libs ${qt4libs})
set(qt_wrapped_libs ${qt${PythonQt_QT_VERSION}_wrapped_libs})

set(qt5_wrapped_lib_depends_gui Multimedia)

set(qtlib_to_wraplib_Widgets gui)
set(qtlib_to_wraplib_WebKitWidgets webkit)

# Define PythonQt_Wrap_Qt* options
option(PythonQt_Wrap_QtAll "Make all Qt components available in python" OFF)
foreach(qtlib ${qt_wrapped_libs})
  OPTION(PythonQt_Wrap_Qt${qtlib} "Make all of Qt${qtlib} available in python" OFF)
endforeach()

# Set qtlib_to_wraplib_* variables
foreach(qtlib ${qtlibs})
  string(TOLOWER ${qtlib} qtlib_lowercase)
  if(DEFINED qtlib_to_wraplib_${qtlib})
    set(qtlib_lowercase ${qtlib_to_wraplib_${qtlib}})
  endif()
  set(qtlib_to_wraplib_${qtlib} ${qtlib_lowercase})
endforeach()

# Force option if it applies
if(PythonQt_Wrap_QtAll)
  set(_qt_wrapped_libs ${qt_wrapped_libs})

  # XXX xmlpatterns wrapper does *NOT* build at all :(
  list(REMOVE_ITEM _qt_wrapped_libs xmlpatterns)

  foreach(qtlib ${_qt_wrapped_libs})
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

if(PythonQt_QT_VERSION VERSION_GREATER "4")

  # Required components
  set(qt_required_components Core Widgets)
  foreach(qtlib ${qtlibs})
    set(qt_wrapped_lib ${qtlib_to_wraplib_${qtlib}})
    if(${PythonQt_Wrap_Qt${qt_wrapped_lib}})
      list(APPEND qt_required_components ${qtlib} ${qt${PythonQt_QT_VERSION}_wrapped_lib_depends_${qt_wrapped_lib}})
    endif()
  endforeach()
  if(BUILD_TESTING)
    list(APPEND qt_required_components Test)
  endif()
  list(REMOVE_DUPLICATES qt_required_components)

  message(STATUS "${PROJECT_NAME}: Required Qt components [${qt_required_components}]")
  find_package(Qt5 ${minimum_required_qt_version} COMPONENTS ${qt_required_components} REQUIRED)

  set(QT_LIBRARIES )
  foreach(qtlib ${qt_required_components})
    include_directories(${Qt5${qtlib}_INCLUDE_DIRS})
    add_definitions(${Qt5${qtlib}_DEFINITIONS})
    list(APPEND QT_LIBRARIES ${Qt5${qtlib}_LIBRARIES})
  endforeach()

  set(QT_VERSION_MAJOR ${Qt5Core_VERSION_MAJOR})
  set(QT_VERSION_MINOR ${Qt5Core_VERSION_MINOR})

  macro(pythonqt_wrap_cpp)
    qt5_wrap_cpp(${ARGV})
  endmacro()

else()

  find_package(Qt4)

  if(QT4_FOUND)

    set(found_qt_version ${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}.${QT_VERSION_PATCH})

    if(${found_qt_version} VERSION_LESS ${minimum_required_qt_version})
      message(FATAL_ERROR "error: PythonQt requires Qt >= ${minimum_required_qt_version} -- you cannot use Qt ${found_qt_version}.")
    endif()

    # Enable required qt module
    foreach(qtlib ${qt_wrapped_libs})
      string(TOUPPER ${qtlib} qtlib_uppercase)
      if (NOT ${QT_QT${qtlib_uppercase}_FOUND})
        message(FATAL_ERROR "QT_QT${qtlib_uppercase} *not* FOUND - Try to disable PythonQt_Wrap_Qt${qtlib}")
      endif()
      set(QT_USE_QT${qtlib_uppercase} ${PythonQt_Wrap_Qt${qtlib}})
    endforeach()

    # Enable QtTest in Qt4 is the option BUILD_TESTING was activated
    set(QT_USE_QTTEST ${BUILD_TESTING})

    include(${QT_USE_FILE})
  else()
    message(FATAL_ERROR "error: Qt4 was not found on your system. You probably need to set the QT_QMAKE_EXECUTABLE variable")
  endif()

  macro(pythonqt_wrap_cpp)
    qt4_wrap_cpp(${ARGV})
  endmacro()

endif()

#-----------------------------------------------------------------------------
# The variable "generated_cpp_suffix" allows to conditionnally compile the generated wrappers
# associated with the Qt version being used.

set(generated_cpp_suffix_46 _47)
set(generated_cpp_suffix_52 _50)
set(generated_cpp_suffix_51 _50)

set(generated_cpp_suffix "_${QT_VERSION_MAJOR}${QT_VERSION_MINOR}")
if(DEFINED generated_cpp_suffix_${QT_VERSION_MAJOR}${QT_VERSION_MINOR})
  set(generated_cpp_suffix "${generated_cpp_suffix_${QT_VERSION_MAJOR}${QT_VERSION_MINOR}}")
elseif(${QT_VERSION_MAJOR}.${QT_VERSION_MINOR} VERSION_GREATER "5.4")
  set(generated_cpp_suffix "_54")
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

    generated_cpp${generated_cpp_suffix}/PythonQt_QtBindings.cpp

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
    src/PythonQtUtils.h
    src/PythonQtVariants.h
    src/PythonQtPythonInclude.h
    generated_cpp${generated_cpp_suffix}/PythonQt_QtBindings.h
)

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
foreach(qtlib ${qt_wrapped_libs})

  if (${PythonQt_Wrap_Qt${qtlib}})

    ADD_DEFINITIONS(-DPYTHONQT_WRAP_Qt${qtlib})

    set(file_prefix generated_cpp${generated_cpp_suffix}/com_trolltech_qt_${qtlib}/com_trolltech_qt_${qtlib})

    foreach(index RANGE 0 12)

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
# Do wrapping
pythonqt_wrap_cpp(gen_moc_sources ${moc_sources})

#-----------------------------------------------------------------------------
# Build the library

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  )

add_library(PythonQt SHARED
            ${sources}
            ${gen_moc_sources}
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

  set_property(SOURCE tests/PythonQtTestMain.cpp PROPERTY COMPILE_DEFINITIONS "main=tests_PythonQtTestMain")

  list(APPEND test_sources
    tests/PythonQtTests.cpp
    tests/PythonQtTests.h
    )

  pythonqt_wrap_cpp(test_sources
    tests/PythonQtTests.h
    )

  if(PythonQt_Wrap_Qtcore)
    include_directories(generated_cpp${generated_cpp_suffix})

    list(APPEND test_sources
      tests/PythonQtTestCleanup.cpp
      tests/PythonQtTestCleanup.h
      )
    pythonqt_wrap_cpp(test_sources
      tests/PythonQtTestCleanup.h
      )

    set_property(SOURCE tests/PythonQtTestMain.cpp APPEND PROPERTY COMPILE_DEFINITIONS "PythonQt_Wrap_Qtcore")
  endif()

  add_executable(PythonQtCppTests ${test_sources})
  target_link_libraries(PythonQtCppTests PythonQt)

  add_test(
    NAME tests_PythonQtTestMain
    COMMAND ${Slicer_LAUNCH_COMMAND} $<TARGET_FILE:PythonQtCppTests> tests/PythonQtTestMain
    )
endif()

