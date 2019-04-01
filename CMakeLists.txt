#-----------------------------------------------------------------------------
# NOTE: The CMake files have been contributed to PythonQt and have not been tested with the current
# PythonQt version. They have not yet been updated to support Qt 5 and/or Python 3.
#
# If you are not a CMake expert, you should better use the provided qmake profiles.
#-----------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.5)

project(PythonQt)

#----------------------------------------------------------------------------
# Qt version

# Set PythonQt_QT_VERSION
set(PythonQt_QT_VERSION 5)

# Requirements
set(minimum_required_qt5_version "5.3.0")
set(minimum_required_qt_version ${minimum_required_qt${PythonQt_QT_VERSION}_version})

find_package(Qt5 ${minimum_required_qt_version} QUIET)
set(QT_VERSION_MAJOR ${Qt5_VERSION_MAJOR})
set(QT_VERSION_MINOR ${Qt5_VERSION_MINOR})

#----------------------------------------------------------------------------
# Qt components
set(qtlibs
  Core
  Widgets
  Network
  OpenGL
  Sql
  Svg
  UiTools
  Xml
  XmlPatterns
  )
# Webkit has been removed in Qt >= 5.6
if("${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}" VERSION_LESS "5.7")
  list(APPEND qtlibs
    WebKitWidgets
    )
endif()
if("${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}" VERSION_GREATER "5.5")
  list(APPEND qtlibs
    Qml
    Quick
    )
endif()

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

#-----------------------------------------------------------------------------
# Set qtlib_to_wraplib_* variables

set(qtlib_to_wraplib_Widgets gui)
set(qtlib_to_wraplib_WebKitWidgets webkit)

set(qt5_wrapped_lib_depends_gui Multimedia PrintSupport)
set(qt5_wrapped_lib_depends_quick QuickWidgets)

foreach(qtlib ${qtlibs})
  string(TOLOWER ${qtlib} qtlib_lowercase)
  if(DEFINED qtlib_to_wraplib_${qtlib})
    set(qtlib_lowercase ${qtlib_to_wraplib_${qtlib}})
  endif()
  set(qtlib_to_wraplib_${qtlib} ${qtlib_lowercase})
endforeach()

#-----------------------------------------------------------------------------
# Define PythonQt_Wrap_Qt* options
option(PythonQt_Wrap_QtAll "Make all Qt components available in python" OFF)
foreach(qtlib ${qtlibs})
  OPTION(PythonQt_Wrap_Qt${qtlib_to_wraplib_${qtlib}} "Make all of Qt${qtlib} available in python" OFF)
endforeach()

#-----------------------------------------------------------------------------
# Force option if it applies
if(PythonQt_Wrap_QtAll)
  foreach(qtlib ${qtlibs})
    # XXX xmlpatterns wrapper does *NOT* build at all :(
    if(${qtlib} STREQUAL "XmlPatterns")
      continue()
    endif()
    set(qt_wrapped_lib ${qtlib_to_wraplib_${qtlib}})
    if(NOT ${PythonQt_Wrap_Qt${qt_wrapped_lib}})
      set(PythonQt_Wrap_Qt${qt_wrapped_lib} ON CACHE BOOL "Make all of Qt${qt_wrapped_lib} available in python" FORCE)
      message(STATUS "Enabling [PythonQt_Wrap_Qt${qt_wrapped_lib}] because of [PythonQt_Wrap_QtAll] evaluates to True")
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

# Required for use of "QtCore/private/qmetaobjectbuilder_p.h" in "PythonQt.cpp"
include_directories(${Qt5Core_PRIVATE_INCLUDE_DIRS})

macro(pythonqt_wrap_cpp)
  qt5_wrap_cpp(${ARGV})
endmacro()

if(UNIX)
  find_package(OpenGL)
  if(OPENGL_FOUND)
    list(APPEND QT_LIBRARIES ${OPENGL_LIBRARIES})
  endif()
endif()

#-----------------------------------------------------------------------------
# The variable "generated_cpp_suffix" allows to conditionnally compile the generated wrappers
# associated with the Qt version being used.

set(generated_cpp_suffix_52 _50)
set(generated_cpp_suffix_51 _50)

set(generated_cpp_suffix "_${QT_VERSION_MAJOR}${QT_VERSION_MINOR}")
if(DEFINED generated_cpp_suffix_${QT_VERSION_MAJOR}${QT_VERSION_MINOR})
  set(generated_cpp_suffix "${generated_cpp_suffix_${QT_VERSION_MAJOR}${QT_VERSION_MINOR}}")
elseif("${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}" VERSION_GREATER "5.5")
  set(generated_cpp_suffix "_56")
elseif("${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}" VERSION_GREATER "5.3")
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
    src/PythonQtProperty.cpp
    src/PythonQtQFileImporter.cpp
    src/PythonQtSignalReceiver.cpp
    src/PythonQtSlot.cpp
    src/PythonQtSlotDecorator.cpp
    src/PythonQtSignal.cpp
    src/PythonQtStdDecorators.cpp
    src/PythonQtStdIn.cpp
    src/PythonQtStdOut.cpp
    src/PythonQtThreadSupport.cpp
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
    src/PythonQtProperty.h
    src/PythonQtQFileImporter.h
    src/PythonQtSignalReceiver.h
    src/PythonQtSlot.h
    src/PythonQtSlotDecorator.h
    src/PythonQtSignal.h
    src/PythonQtStdDecorators.h
    src/PythonQtStdIn.h
    src/PythonQtStdOut.h
    src/PythonQtSystem.h
    src/PythonQtThreadSupport.h
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

foreach(qtlib ${qtlibs})

  set(qt_wrapped_lib ${qtlib_to_wraplib_${qtlib}})

  if (${PythonQt_Wrap_Qt${qt_wrapped_lib}})

    ADD_DEFINITIONS(-DPYTHONQT_WRAP_Qt${qt_wrapped_lib})

    set(file_prefix generated_cpp${generated_cpp_suffix}/com_trolltech_qt_${qt_wrapped_lib}/com_trolltech_qt_${qt_wrapped_lib})

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

target_compile_options(PythonQt PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/bigobj>
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

