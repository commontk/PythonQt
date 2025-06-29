# This is the actual package to be installed
# PythonQtParent project contains all compontents
project(PythonQt LANGUAGES CXX VERSION 3.5.6)

set(CMAKE_AUTOMOC ON)


if(BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} SHARED)
    target_compile_definitions(${PROJECT_NAME} PRIVATE PYTHONQT_EXPORTS)
else()
    add_library(${PROJECT_NAME} STATIC)
    target_compile_definitions(${PROJECT_NAME} PUBLIC PYTHONQT_STATIC)
endif()

# The sources are private, the headers are added publicly
# explicitly set the source files the same as from
# src.pri
set(Core_SOURCES
  PythonQt_QtBindings.cpp
  gui/PythonQtScriptingConsole.cpp
  PythonQt.cpp
  PythonQtBoolResult.cpp
  PythonQtClassInfo.cpp
  PythonQtClassWrapper.cpp
  PythonQtConversion.cpp
  PythonQtImporter.cpp
  PythonQtInstanceWrapper.cpp
  PythonQtMethodInfo.cpp
  PythonQtMisc.cpp
  PythonQtObjectPtr.cpp
  PythonQtProperty.cpp
  PythonQtQFileImporter.cpp
  PythonQtSignal.cpp
  PythonQtSignalReceiver.cpp
  PythonQtSlot.cpp
  PythonQtSlotDecorator.cpp
  PythonQtStdDecorators.cpp
  PythonQtStdIn.cpp
  PythonQtStdOut.cpp
  PythonQtThreadSupport.cpp
)
target_sources(${PROJECT_NAME} PRIVATE
    ${Core_SOURCES}
    ${PYTHONQT_WRAPPER_CORE_BUILTIN_SOURCES}
    ${PYTHONQT_WRAPPER_GUI_BUILTIN_SOURCES}
)
unset(Core_SOURCES)

set(Core_PUBLIC_HEADER
  PythonQt_QtBindings.h
  PythonQt.h
  PythonQtStdDecorators.h
  PythonQtClassInfo.h
  PythonQtImporter.h
  PythonQtObjectPtr.h
  PythonQtProperty.h
  PythonQtSignal.h
  PythonQtSlot.h
  PythonQtSlotDecorator.h
  PythonQtStdIn.h
  PythonQtStdOut.h
  PythonQtMisc.h
  PythonQtMethodInfo.h
  PythonQtImportFileInterface.h
  PythonQtConversion.h
  PythonQtSignalReceiver.h
  PythonQtInstanceWrapper.h
  PythonQtClassWrapper.h
  PythonQtCppWrapperFactory.h
  PythonQtQFileImporter.h
  PythonQtQFileImporter.h
  PythonQtVariants.h
  gui/PythonQtScriptingConsole.h
  PythonQtSystem.h
  PythonQtUtils.h
  PythonQtBoolResult.h
  PythonQtThreadSupport.h
  PythonQtPythonInclude.h
)

foreach( header ${Core_PUBLIC_HEADER} )
  set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME PythonQt-${PYTHONQT_SUFFIX}
    PUBLIC_HEADER ${header}
  )
endforeach()

add_dependencies(${PROJECT_NAME} PythonQtWrapper)

target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::CorePrivate
    Qt${QT_VERSION_MAJOR}::Widgets
    Python3::Python
)

target_compile_definitions(${PROJECT_NAME} PRIVATE PYTHONQT_EXPORTS PYTHONQT_CATCH_ALL_EXCEPTIONS)

target_include_directories(${PROJECT_NAME} PUBLIC
    INTERFACE
    # Use headers in the build tree when configuring/running CMake here:
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    # Use headers in the install tree when someone does `find_package(PythonQt)`:
    $<INSTALL_INTERFACE:include/PythonQt>
)


if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE "/bigobj")
elseif(MINGW)
    target_compile_options(${PROJECT_NAME} PRIVATE "-Wa,-mbig-obj")
endif()

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


include(GNUInstallDirs)
#-----------------------------------------------------------------------------
# Install library (on windows, put the dll in 'bin' and the archive in 'lib')

install(TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}Targets
    BUNDLE DESTINATION ${CMAKE_INSTALL_PREFIX}
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/${PythonQt_INSTALL_LIBRARY_DIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/${PythonQt_INSTALL_ARCHIVE_DIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/${PythonQt_INSTALL_RUNTIME_DIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_PREFIX}/${PythonQt_INSTALL_INCLUDE_DIR}
)


#-----------------------------------------------------------------------------
# Configure so that other builds can find PythonQt with find_package
include(CMakePackageConfigHelpers)

# Generate PythonQtConfigVersion.cmake
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
    VERSION ${PROJECT_NAME}_VERSION}
    COMPATIBILITY AnyNewerVersion
)

# Install the export target
install(EXPORT ${PROJECT_NAME}Targets
        FILE ${PROJECT_NAME}Targets.cmake
        NAMESPACE ${PROJECT_NAME}::
        DESTINATION lib/cmake/${PROJECT_NAME}
 )

# Generate and install PythonQtConfig.cmake
configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}Config.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
    INSTALL_DESTINATION lib/cmake/${PROJECT_NAME}
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
    DESTINATION lib/cmake/${PROJECT_NAME}
)

install(FILES
    ${Core_PUBLIC_HEADER}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/${PythonQt_INSTALL_INCLUDE_DIR}
)
