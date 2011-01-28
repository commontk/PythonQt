#ifndef _PYTHONQTSTDIN_H
#define _PYTHONQTSTDIN_H

/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.commontk.org/LICENSE

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

//----------------------------------------------------------------------------------
/*!
// \file    PythonQtStdIn.h
// \author  Jean-Christophe Fillion-Robin
// \author  Last changed by $Author: jcfr $
// \date    2011
*/
//----------------------------------------------------------------------------------


#include <dPython.h>
#include "structmember.h"
#include <QString>

//! declares the type of the stdout redirection class
extern PyTypeObject PythonQtStdInRedirectType;

//! declares the callback that is called from the write() function
typedef QString PythonQtInputChangedCB(void* callData);

//! declares the stdin redirection class
typedef struct {
  PyObject_HEAD
  PythonQtInputChangedCB* _cb;
  void * _callData;
} PythonQtStdInRedirect;

#endif
