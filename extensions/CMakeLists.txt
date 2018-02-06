option(PythonQt_Extensions "Build PythonQt extensions." OFF)

if(PythonQt_Extensions)
  if(NOT PythonQt_Wrap_QtAll)
    MESSAGE(FATAL_ERROR "Cannot build PythonQt_QtAll without PythonQt_Wrap_QtAll set to ON")
  endif(NOT PythonQt_Wrap_QtAll)
  set(qtall_headers
    PythonQt_QtAll/PythonQt_QtAll.h)

  set(qtall_sources
    PythonQt_QtAll/PythonQt_QtAll.cpp)

  include_directories(generated_cpp${generated_cpp_suffix})

  add_library(PythonQt_QtAll SHARED ${qtall_sources})
  target_link_libraries(PythonQt_QtAll PythonQt)

  install(TARGETS PythonQt_QtAll
    RUNTIME DESTINATION ${PythonQt_INSTALL_RUNTIME_DIR}
    LIBRARY DESTINATION ${PythonQt_INSTALL_LIBRARY_DIR}
    ARCHIVE DESTINATION ${PythonQt_INSTALL_ARCHIVE_DIR})
  install(FILES ${qtall_headers} DESTINATION ${PythonQt_INSTALL_INCLUDE_DIR})
endif()
