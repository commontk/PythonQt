cmake_minimum_required(VERSION 3.5)

#-----------------------------------------------------------------------------
project(PythonQtGenerator)
#-----------------------------------------------------------------------------

include(CTestUseLaunchers OPTIONAL)

#-----------------------------------------------------------------------------
# Setup Qt

if(NOT DEFINED PythonQtGenerator_QT_VERSION)
  if(DEFINED Qt5_DIR)
    set(PythonQtGenerator_QT_VERSION 5)
  else()
    set(PythonQtGenerator_QT_VERSION 6)
  endif()
endif()

set(minimum_required_qt5_version "5.15.0")
set(minimum_required_qt6_version "6.5.3")
set(minimum_required_qt_version ${minimum_required_qt${PythonQtGenerator_QT_VERSION}_version})

set(qt_required_components Core Xml)
if(PythonQtGenerator_QT_VERSION VERSION_EQUAL 6)
  list(APPEND qt_required_components Core5Compat)
endif()

message(STATUS "${PROJECT_NAME}: Required Qt${PythonQtGenerator_QT_VERSION} components [${qt_required_components}]")

find_package(Qt${PythonQtGenerator_QT_VERSION} ${minimum_required_qt_version}
  COMPONENTS ${qt_required_components} REQUIRED)

#-----------------------------------------------------------------------------
# Sources

set(sources
  parser/ast.cpp
  parser/binder.cpp
  parser/class_compiler.cpp
  parser/codemodel.cpp
  parser/codemodel_finder.cpp
  parser/compiler_utils.cpp
  parser/control.cpp
  parser/declarator_compiler.cpp
  parser/default_visitor.cpp
  parser/dumptree.cpp
  parser/lexer.cpp
  parser/list.cpp
  parser/name_compiler.cpp
  parser/parser.cpp
  parser/smallobject.cpp
  parser/tokens.cpp
  parser/type_compiler.cpp
  parser/visitor.cpp
  
  abstractmetabuilder.cpp
  abstractmetalang.cpp
  asttoxml.cpp
  customtypes.cpp
  fileout.cpp
  generator.cpp
  generatorset.cpp
  generatorsetqtscript.cpp
  main.cpp
  metajava.cpp
  metaqtscriptbuilder.cpp
  metaqtscript.cpp
  prigenerator.cpp
  reporthandler.cpp
  setupgenerator.cpp
  shellgenerator.cpp
  shellheadergenerator.cpp
  shellimplgenerator.cpp
  typeparser.cpp
  typesystem.cpp
  )
  
#-----------------------------------------------------------------------------
# List headers.  This list is used for the install command.

set(headers
  )

#-----------------------------------------------------------------------------
# Headers that should run through moc

set(moc_sources
  fileout.h
  generator.h
  generatorset.h
  generatorsetqtscript.h
  prigenerator.h
  setupgenerator.h
  shellgenerator.h
  shellheadergenerator.h
  shellimplgenerator.h
  )

#-----------------------------------------------------------------------------
# Resources

set(qrc_sources
  generator.qrc
  )

#-----------------------------------------------------------------------------
# Do wrapping
qt_wrap_cpp(gen_moc_sources ${moc_sources})
qt_add_resources(gen_qrc_sources ${qrc_sources})

#-----------------------------------------------------------------------------
# Copy file expected by the generator and specify install rules

file(GLOB files_to_copy RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "build_*.txt" "typesystem_*.xml")
list(APPEND files_to_copy qtscript_masterinclude.h parser/rpp/pp-qt-configuration)
foreach(file ${files_to_copy})
  configure_file(
    ${file}
    ${CMAKE_CURRENT_BINARY_DIR}/${file}
    COPYONLY
    )
  get_filename_component(destination_dir ${file} PATH)
  install(FILES ${file} DESTINATION bin/${destination_dir})
endforeach()

#-----------------------------------------------------------------------------
# Build the library

SOURCE_GROUP("Resources" FILES
  ${qrc_sources}
  ${files_to_copy}
  )

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/parser
  ${CMAKE_CURRENT_SOURCE_DIR}/parser/rpp
  )
  
add_definitions(-DRXX_ALLOCATOR_INIT_0)
  
add_executable(${PROJECT_NAME}
  ${sources}
  ${gen_moc_sources}
  ${gen_qrc_sources}
)

target_link_libraries(${PROJECT_NAME}
  Qt::Core
  Qt::Xml
  $<$<VERSION_EQUAL:${PythonQtGenerator_QT_VERSION},6>:Qt6::Core5Compat>
  )

#-----------------------------------------------------------------------------
# Install library (on windows, put the dll in 'bin' and the archive in 'lib')

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
