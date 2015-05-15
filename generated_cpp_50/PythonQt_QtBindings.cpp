
#include "PythonQt_QtBindings.h"

#include "PythonQt.h"

void PythonQt_init_QtGui(PyObject*);
void PythonQt_init_QtSvg(PyObject*);
void PythonQt_init_QtSql(PyObject*);
void PythonQt_init_QtNetwork(PyObject*);
void PythonQt_init_QtCore(PyObject*);
void PythonQt_init_QtWebKit(PyObject*);
void PythonQt_init_QtOpenGL(PyObject*);
void PythonQt_init_QtXml(PyObject*);
void PythonQt_init_QtXmlPatterns(PyObject*);
void PythonQt_init_QtUiTools(PyObject*);
void PythonQt_init_QtPhonon(PyObject*);

PYTHONQT_EXPORT void PythonQt_init_QtBindings()
  {
  #ifdef PYTHONQT_WRAP_QtCore
  PythonQt_init_QtCore(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtGui
  PythonQt_init_QtGui(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtNetwork
  PythonQt_init_QtNetwork(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtOpenGL
  PythonQt_init_QtOpenGL(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtSql
  PythonQt_init_QtSql(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtSvg
  PythonQt_init_QtSvg(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtUiTools
  PythonQt_init_QtUiTools(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtWebKit
  PythonQt_init_QtWebKit(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtXml
  PythonQt_init_QtXml(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtXmlPatterns
  PythonQt_init_QtXmlPatterns(0);
  #endif

  #ifdef PYTHONQT_WRAP_QtPhonon
  PythonQt_init_QtPhonon(0);
  #endif
  };
