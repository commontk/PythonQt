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
// \file    PythonQtStdIn.cpp
// \author  Jean-Christophe Fillion-Robin
// \author  Last changed by $Author: jcfr $
// \date    2011
*/
//----------------------------------------------------------------------------------

#include "PythonQtStdIn.h"

static PyObject *PythonQtStdInRedirect_new(PyTypeObject *type, PyObject * /*args*/, PyObject * /*kwds*/)
{
  PythonQtStdInRedirect *self;
  self = (PythonQtStdInRedirect *)type->tp_alloc(type, 0);
  self->_cb = NULL;
  self->_callData = NULL;

  return (PyObject *)self;
}

static PyObject *PythonQtStdInRedirect_readline(PyObject * self, PyObject * args)
{
  PythonQtStdInRedirect*  s = (PythonQtStdInRedirect*)self;
  QString string;
  if (s->_cb) {
    string =  (*s->_cb)(s->_callData);
    }
  return Py_BuildValue(const_cast<char*>("s"), const_cast<char*>(string.toAscii().data()));
}

static PyMethodDef PythonQtStdInRedirect_methods[] = {
  {"readline", (PyCFunction)PythonQtStdInRedirect_readline, METH_VARARGS,
   "read input line"},
  {NULL,    NULL, 0 , NULL} /* sentinel */
};

static PyMemberDef PythonQtStdInRedirect_members[] = {
  {NULL}  /* Sentinel */
};

PyTypeObject PythonQtStdInRedirectType = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "PythonQtStdInRedirect",             /*tp_name*/
    sizeof(PythonQtStdInRedirect),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    0, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    0,           /*tp_compare*/
    0,              /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PythonQtStdInRedirect",           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    PythonQtStdInRedirect_methods,                   /* tp_methods */
    PythonQtStdInRedirect_members,                   /* tp_members */
    0,                   /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    0,                         /* tp_init */
    0,                         /* tp_alloc */
    PythonQtStdInRedirect_new,                 /* tp_new */
};
