
cmake_minimum_required(VERSION 3.20.6)

project(PythonQt)

#----------------------------------------------------------------------------
# Qt version

# Set PythonQt_QT_VERSION
set(PythonQt_QT_VERSION 5)

# Requirements
set(minimum_required_qt5_version "5.15.0")
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
  Qml
  Quick
  Sql
  Svg
  Multimedia
  UiTools
  Xml
  XmlPatterns
  )

#-----------------------------------------------------------------------------
# Python libraries

find_package(Python3 COMPONENTS Development REQUIRED)

#-----------------------------------------------------------------------------
# Build options

option(PythonQt_SUPPORT_NAME_PROPERTY "Enable PythonQt name-property support" ON)
option(PythonQt_USE_RELEASE_PYTHON_FALLBACK "Fallback to Release python when Debug missing" ON)
option(PythonQt_DEBUG "Enable PythonQt debug output" OFF)

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
set(qt5_wrapped_lib_depends_multimedia MultimediaWidgets)
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
foreach(qt_component ${qt_required_components})
  list(APPEND QT_LIBRARIES Qt5::${qt_component})
endforeach()

if(UNIX)
  find_package(OpenGL)
  if(OPENGL_FOUND)
    list(APPEND QT_LIBRARIES ${OPENGL_LIBRARIES})
  endif()
endif()

#-----------------------------------------------------------------------------
# Pre-generated wrappers default to Qt 5.15 set (generated_cpp_515). Users may override.
set(generated_cpp_suffix "_515")
set(_default_generated_path "${CMAKE_CURRENT_SOURCE_DIR}/generated_cpp${generated_cpp_suffix}")

set(PythonQt_GENERATED_PATH "${_default_generated_path}"
  CACHE PATH "Directory containing pre-generated PythonQt Qt wrappers for Qt ${QT_VERSION_MAJOR}.${QT_VERSION_MINOR} (e.g., generated_cpp_515)")

if(NOT IS_DIRECTORY "${PythonQt_GENERATED_PATH}")
  message(FATAL_ERROR
    "PythonQt: missing generated wrapper sources for Qt ${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}.\n"
    "Expected: ${PythonQt_GENERATED_PATH}\n"
    "Hint: pass -DPythonQt_GENERATED_PATH:PATH=/path/to/generated_cpp")
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

    extensions/PythonQt_QtAll/PythonQt_QtAll.cpp

    ${PythonQt_GENERATED_PATH}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin0.cpp
    ${PythonQt_GENERATED_PATH}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin_init.cpp
    ${PythonQt_GENERATED_PATH}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin0.cpp
    ${PythonQt_GENERATED_PATH}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin_init.cpp
)

#-----------------------------------------------------------------------------
# List headers. This list is used for the install command.

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
    extensions/PythonQt_QtAll/PythonQt_QtAll.h
)

#-----------------------------------------------------------------------------
# Add extra sources

foreach(qtlib ${qtlibs})

  set(qt_wrapped_lib ${qtlib_to_wraplib_${qtlib}})

  if (${PythonQt_Wrap_Qt${qt_wrapped_lib}})

    # Variable expected by PythonQt_QtAll.cpp
    string(TOUPPER ${qt_wrapped_lib} qt_wrapped_lib_uppercase)
    ADD_DEFINITIONS(-DPYTHONQT_WITH_${qt_wrapped_lib_uppercase})

    set(file_prefix com_trolltech_qt_${qt_wrapped_lib}/com_trolltech_qt_${qt_wrapped_lib})

    foreach(index RANGE 0 12)

      # Source files
      if(EXISTS ${PythonQt_GENERATED_PATH}/${file_prefix}${index}.cpp)
        list(APPEND sources ${PythonQt_GENERATED_PATH}/${file_prefix}${index}.cpp)
      endif()

    endforeach()

    list(APPEND sources ${PythonQt_GENERATED_PATH}/${file_prefix}_init.cpp)

  endif()
endforeach()

#-----------------------------------------------------------------------------
# Configure header

# Map the CMake option `PythonQt_USE_RELEASE_PYTHON_FALLBACK` (camelCase)
# to a plain variable used by the configured header. The public-facing
# preprocessor symbol remains `PYTHONQT_USE_RELEASE_PYTHON_FALLBACK`.
set(PYTHONQT_USE_RELEASE_PYTHON_FALLBACK ${PythonQt_USE_RELEASE_PYTHON_FALLBACK})
configure_file(
  src/PythonQtConfigure.h.in
  ${CMAKE_CURRENT_BINARY_DIR}/src/PythonQtConfigure.h
  )
unset(PYTHONQT_USE_RELEASE_PYTHON_FALLBACK)

list(APPEND headers
  ${CMAKE_CURRENT_BINARY_DIR}/src/PythonQtConfigure.h
  )

#-----------------------------------------------------------------------------
# Build the library

add_library(PythonQt SHARED ${sources})
set_target_properties(PythonQt PROPERTIES DEFINE_SYMBOL PYTHONQT_EXPORTS)

set_target_properties(PythonQt
  PROPERTIES
    AUTOMOC TRUE
  )

target_compile_definitions(PythonQt
  PRIVATE
    $<$<BOOL:${PythonQt_DEBUG}>:PYTHONQT_DEBUG>
    $<$<BOOL:${PythonQt_SUPPORT_NAME_PROPERTY}>:PYTHONQT_SUPPORT_NAME_PROPERTY>
    # No need to export PYTHONQT_USE_RELEASE_PYTHON_FALLBACK publicly. the
    # configured header handles consumers.
  )

target_compile_options(PythonQt PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/bigobj>
  )

target_include_directories(PythonQt
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/extensions/PythonQt_QtAll>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/src>
    $<INSTALL_INTERFACE:${PythonQt_INSTALL_INCLUDE_DIR}>
  )

target_link_libraries(PythonQt
  PUBLIC
    Python3::Python
    ${QT_LIBRARIES}
  PRIVATE
    # Required for use of "QtCore/private/qmetaobjectbuilder_p.h" in "PythonQt.cpp"
    Qt${PythonQt_QT_VERSION}::CorePrivate
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

  if(PythonQt_Wrap_Qtcore)
    list(APPEND test_sources
      tests/PythonQtTestCleanup.cpp
      tests/PythonQtTestCleanup.h
      )

    set_property(SOURCE tests/PythonQtTestMain.cpp APPEND PROPERTY COMPILE_DEFINITIONS "PythonQt_Wrap_Qtcore")
  endif()

  add_executable(PythonQtCppTests ${test_sources})

  target_include_directories(PythonQtCppTests
    PRIVATE
      $<$<BOOL:${PythonQt_Wrap_Qtcore}>:${PythonQt_GENERATED_PATH}>
    )

  target_link_libraries(PythonQtCppTests PythonQt)

  set_target_properties(PythonQtCppTests
    PROPERTIES
      AUTOMOC TRUE
    )

  target_compile_definitions(PythonQtCppTests
    PRIVATE
      $<$<BOOL:${PythonQt_SUPPORT_NAME_PROPERTY}>:PYTHONQT_SUPPORT_NAME_PROPERTY>
    )

  add_test(
    NAME tests_PythonQtTestMain
    COMMAND ${Slicer_LAUNCH_COMMAND} $<TARGET_FILE:PythonQtCppTests> tests/PythonQtTestMain
    )
endif()

