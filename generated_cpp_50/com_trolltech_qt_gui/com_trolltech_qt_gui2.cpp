#include "com_trolltech_qt_gui2.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QGesture>
#include <QPair>
#include <QVarLengthArray>
#include <QVariant>
#include <qaction.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qkeysequence.h>
#include <qline.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtimeline.h>
#include <qtransform.h>
#include <qvector3d.h>
#include <qwidget.h>

PythonQtShell_QGraphicsColorizeEffect::~PythonQtShell_QGraphicsColorizeEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsColorizeEffect::boundingRectFor(const QRectF&  sourceRect) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRectFor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&sourceRect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsColorizeEffect::boundingRectFor(sourceRect);
}
void PythonQtShell_QGraphicsColorizeEffect::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsColorizeEffect::childEvent(arg__1);
}
void PythonQtShell_QGraphicsColorizeEffect::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsColorizeEffect::customEvent(arg__1);
}
void PythonQtShell_QGraphicsColorizeEffect::draw(QPainter*  painter)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "draw");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&painter};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsColorizeEffect::draw(painter);
}
bool  PythonQtShell_QGraphicsColorizeEffect::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsColorizeEffect::event(arg__1);
}
bool  PythonQtShell_QGraphicsColorizeEffect::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsColorizeEffect::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsColorizeEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sourceChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsColorizeEffect::sourceChanged(flags);
}
void PythonQtShell_QGraphicsColorizeEffect::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsColorizeEffect::timerEvent(arg__1);
}
QGraphicsColorizeEffect* PythonQtWrapper_QGraphicsColorizeEffect::new_QGraphicsColorizeEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsColorizeEffect(parent); }

QColor  PythonQtWrapper_QGraphicsColorizeEffect::color(QGraphicsColorizeEffect* theWrappedObject) const
{
  return ( theWrappedObject->color());
}

void PythonQtWrapper_QGraphicsColorizeEffect::draw(QGraphicsColorizeEffect* theWrappedObject, QPainter*  painter)
{
  ( ((PythonQtPublicPromoter_QGraphicsColorizeEffect*)theWrappedObject)->promoted_draw(painter));
}

qreal  PythonQtWrapper_QGraphicsColorizeEffect::strength(QGraphicsColorizeEffect* theWrappedObject) const
{
  return ( theWrappedObject->strength());
}



PythonQtShell_QGraphicsDropShadowEffect::~PythonQtShell_QGraphicsDropShadowEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsDropShadowEffect::boundingRectFor(const QRectF&  rect) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRectFor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsDropShadowEffect::boundingRectFor(rect);
}
void PythonQtShell_QGraphicsDropShadowEffect::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsDropShadowEffect::childEvent(arg__1);
}
void PythonQtShell_QGraphicsDropShadowEffect::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsDropShadowEffect::customEvent(arg__1);
}
void PythonQtShell_QGraphicsDropShadowEffect::draw(QPainter*  painter)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "draw");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&painter};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsDropShadowEffect::draw(painter);
}
bool  PythonQtShell_QGraphicsDropShadowEffect::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsDropShadowEffect::event(arg__1);
}
bool  PythonQtShell_QGraphicsDropShadowEffect::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsDropShadowEffect::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsDropShadowEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sourceChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsDropShadowEffect::sourceChanged(flags);
}
void PythonQtShell_QGraphicsDropShadowEffect::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsDropShadowEffect::timerEvent(arg__1);
}
QGraphicsDropShadowEffect* PythonQtWrapper_QGraphicsDropShadowEffect::new_QGraphicsDropShadowEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsDropShadowEffect(parent); }

qreal  PythonQtWrapper_QGraphicsDropShadowEffect::blurRadius(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->blurRadius());
}

QRectF  PythonQtWrapper_QGraphicsDropShadowEffect::boundingRectFor(QGraphicsDropShadowEffect* theWrappedObject, const QRectF&  rect) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsDropShadowEffect*)theWrappedObject)->promoted_boundingRectFor(rect));
}

QColor  PythonQtWrapper_QGraphicsDropShadowEffect::color(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->color());
}

void PythonQtWrapper_QGraphicsDropShadowEffect::draw(QGraphicsDropShadowEffect* theWrappedObject, QPainter*  painter)
{
  ( ((PythonQtPublicPromoter_QGraphicsDropShadowEffect*)theWrappedObject)->promoted_draw(painter));
}

QPointF  PythonQtWrapper_QGraphicsDropShadowEffect::offset(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

qreal  PythonQtWrapper_QGraphicsDropShadowEffect::xOffset(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->xOffset());
}

qreal  PythonQtWrapper_QGraphicsDropShadowEffect::yOffset(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->yOffset());
}



PythonQtShell_QGraphicsEffect::~PythonQtShell_QGraphicsEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsEffect::boundingRectFor(const QRectF&  sourceRect) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRectFor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&sourceRect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsEffect::boundingRectFor(sourceRect);
}
void PythonQtShell_QGraphicsEffect::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsEffect::childEvent(arg__1);
}
void PythonQtShell_QGraphicsEffect::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsEffect::customEvent(arg__1);
}
void PythonQtShell_QGraphicsEffect::draw(QPainter*  painter)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "draw");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&painter};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
bool  PythonQtShell_QGraphicsEffect::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsEffect::event(arg__1);
}
bool  PythonQtShell_QGraphicsEffect::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsEffect::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sourceChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsEffect::sourceChanged(flags);
}
void PythonQtShell_QGraphicsEffect::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsEffect::timerEvent(arg__1);
}
QGraphicsEffect* PythonQtWrapper_QGraphicsEffect::new_QGraphicsEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsEffect(parent); }

QRectF  PythonQtWrapper_QGraphicsEffect::boundingRect(QGraphicsEffect* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

QRectF  PythonQtWrapper_QGraphicsEffect::boundingRectFor(QGraphicsEffect* theWrappedObject, const QRectF&  sourceRect) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->promoted_boundingRectFor(sourceRect));
}

bool  PythonQtWrapper_QGraphicsEffect::isEnabled(QGraphicsEffect* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

void PythonQtWrapper_QGraphicsEffect::sourceChanged(QGraphicsEffect* theWrappedObject, QGraphicsEffect::ChangeFlags  flags)
{
  ( ((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->promoted_sourceChanged(flags));
}



PythonQtShell_QGraphicsEllipseItem::~PythonQtShell_QGraphicsEllipseItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsEllipseItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsEllipseItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsEllipseItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsEllipseItem::opaqueArea();
}
QGraphicsEllipseItem* PythonQtWrapper_QGraphicsEllipseItem::new_QGraphicsEllipseItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsEllipseItem(parent); }

QGraphicsEllipseItem* PythonQtWrapper_QGraphicsEllipseItem::new_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsEllipseItem(rect, parent); }

QGraphicsEllipseItem* PythonQtWrapper_QGraphicsEllipseItem::new_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsEllipseItem(x, y, w, h, parent); }

QRectF  PythonQtWrapper_QGraphicsEllipseItem::boundingRect(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsEllipseItem::contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

bool  PythonQtWrapper_QGraphicsEllipseItem::isObscuredBy(QGraphicsEllipseItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsEllipseItem::opaqueArea(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsEllipseItem::paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QRectF  PythonQtWrapper_QGraphicsEllipseItem::rect(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QGraphicsEllipseItem::setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setRect(rect));
}

void PythonQtWrapper_QGraphicsEllipseItem::setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

void PythonQtWrapper_QGraphicsEllipseItem::setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle)
{
  ( theWrappedObject->setSpanAngle(angle));
}

void PythonQtWrapper_QGraphicsEllipseItem::setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle)
{
  ( theWrappedObject->setStartAngle(angle));
}

QPainterPath  PythonQtWrapper_QGraphicsEllipseItem::shape(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

int  PythonQtWrapper_QGraphicsEllipseItem::spanAngle(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->spanAngle());
}

int  PythonQtWrapper_QGraphicsEllipseItem::startAngle(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->startAngle());
}

int  PythonQtWrapper_QGraphicsEllipseItem::type(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsGridLayout::~PythonQtShell_QGraphicsGridLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGraphicsGridLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("count", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsGridLayout::count();
}
void PythonQtShell_QGraphicsGridLayout::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsGridLayout::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsGridLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsGridLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsGridLayout::itemAt(int  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
        } else {
          returnValue = *((QGraphicsLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsGridLayout::itemAt(index);
}
void PythonQtShell_QGraphicsGridLayout::removeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsGridLayout::removeAt(index);
}
void PythonQtShell_QGraphicsGridLayout::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsGridLayout::updateGeometry();
}
void PythonQtShell_QGraphicsGridLayout::widgetEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "widgetEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsGridLayout::widgetEvent(e);
}
QGraphicsGridLayout* PythonQtWrapper_QGraphicsGridLayout::new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsGridLayout(parent); }

void PythonQtWrapper_QGraphicsGridLayout::addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, Qt::Alignment  alignment)
{
  ( theWrappedObject->addItem(item, row, column, alignment));
}

void PythonQtWrapper_QGraphicsGridLayout::addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment)
{
  ( theWrappedObject->addItem(item, row, column, rowSpan, columnSpan, alignment));
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
  return ( theWrappedObject->alignment(item));
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnAlignment(column));
}

int  PythonQtWrapper_QGraphicsGridLayout::columnCount(QGraphicsGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->columnCount());
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnMaximumWidth(column));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnMinimumWidth(column));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnPreferredWidth(column));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnSpacing(column));
}

int  PythonQtWrapper_QGraphicsGridLayout::columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnStretchFactor(column));
}

int  PythonQtWrapper_QGraphicsGridLayout::count(QGraphicsGridLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->promoted_count());
}

qreal  PythonQtWrapper_QGraphicsGridLayout::horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->horizontalSpacing());
}

void PythonQtWrapper_QGraphicsGridLayout::invalidate(QGraphicsGridLayout* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->promoted_invalidate());
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsGridLayout::itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->promoted_itemAt(index));
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsGridLayout::itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->itemAt(row, column));
}

void PythonQtWrapper_QGraphicsGridLayout::removeAt(QGraphicsGridLayout* theWrappedObject, int  index)
{
  ( ((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->promoted_removeAt(index));
}

void PythonQtWrapper_QGraphicsGridLayout::removeItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item)
{
  ( theWrappedObject->removeItem(item));
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowAlignment(row));
}

int  PythonQtWrapper_QGraphicsGridLayout::rowCount(QGraphicsGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->rowCount());
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowMaximumHeight(row));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowMinimumHeight(row));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowPreferredHeight(row));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowSpacing(row));
}

int  PythonQtWrapper_QGraphicsGridLayout::rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowStretchFactor(row));
}

void PythonQtWrapper_QGraphicsGridLayout::setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(item, alignment));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment)
{
  ( theWrappedObject->setColumnAlignment(column, alignment));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
  ( theWrappedObject->setColumnFixedWidth(column, width));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
  ( theWrappedObject->setColumnMaximumWidth(column, width));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
  ( theWrappedObject->setColumnMinimumWidth(column, width));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
  ( theWrappedObject->setColumnPreferredWidth(column, width));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing)
{
  ( theWrappedObject->setColumnSpacing(column, spacing));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch)
{
  ( theWrappedObject->setColumnStretchFactor(column, stretch));
}

void PythonQtWrapper_QGraphicsGridLayout::setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setGeometry(rect));
}

void PythonQtWrapper_QGraphicsGridLayout::setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setHorizontalSpacing(spacing));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment)
{
  ( theWrappedObject->setRowAlignment(row, alignment));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
  ( theWrappedObject->setRowFixedHeight(row, height));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
  ( theWrappedObject->setRowMaximumHeight(row, height));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
  ( theWrappedObject->setRowMinimumHeight(row, height));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
  ( theWrappedObject->setRowPreferredHeight(row, height));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing)
{
  ( theWrappedObject->setRowSpacing(row, spacing));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch)
{
  ( theWrappedObject->setRowStretchFactor(row, stretch));
}

void PythonQtWrapper_QGraphicsGridLayout::setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

void PythonQtWrapper_QGraphicsGridLayout::setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setVerticalSpacing(spacing));
}

QSizeF  PythonQtWrapper_QGraphicsGridLayout::sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( theWrappedObject->sizeHint(which, constraint));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::verticalSpacing(QGraphicsGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->verticalSpacing());
}



PythonQtShell_QGraphicsItem::~PythonQtShell_QGraphicsItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsItem::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::advance(phase);
}
QRectF  PythonQtShell_QGraphicsItem::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QRectF();
}
bool  PythonQtShell_QGraphicsItem::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsItem::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsItem::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::contains(point);
}
void PythonQtShell_QGraphicsItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsItem::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::dropEvent(event);
}
QVariant  PythonQtShell_QGraphicsItem::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::extension(variant);
}
void PythonQtShell_QGraphicsItem::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::focusInEvent(event);
}
void PythonQtShell_QGraphicsItem::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::focusOutEvent(event);
}
void PythonQtShell_QGraphicsItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsItem::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsItem::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsItem::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::itemChange(change, value);
}
void PythonQtShell_QGraphicsItem::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::keyPressEvent(event);
}
void PythonQtShell_QGraphicsItem::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::mousePressEvent(event);
}
void PythonQtShell_QGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::opaqueArea();
}
void PythonQtShell_QGraphicsItem::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
bool  PythonQtShell_QGraphicsItem::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsItem::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::sceneEventFilter(watched, event);
}
void PythonQtShell_QGraphicsItem::setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&extension, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::setExtension(extension, variant);
}
QPainterPath  PythonQtShell_QGraphicsItem::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::shape();
}
bool  PythonQtShell_QGraphicsItem::supportsExtension(QGraphicsItem::Extension  extension) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::supportsExtension(extension);
}
int  PythonQtShell_QGraphicsItem::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::type();
}
void PythonQtShell_QGraphicsItem::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::wheelEvent(event);
}
QGraphicsItem* PythonQtWrapper_QGraphicsItem::new_QGraphicsItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsItem(parent); }

bool  PythonQtWrapper_QGraphicsItem::acceptDrops(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptDrops());
}

bool  PythonQtWrapper_QGraphicsItem::acceptHoverEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptHoverEvents());
}

bool  PythonQtWrapper_QGraphicsItem::acceptTouchEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptTouchEvents());
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsItem::acceptedMouseButtons(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptedMouseButtons());
}

void PythonQtWrapper_QGraphicsItem::advance(QGraphicsItem* theWrappedObject, int  phase)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_advance(phase));
}

QRegion  PythonQtWrapper_QGraphicsItem::boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const
{
  return ( theWrappedObject->boundingRegion(itemToDeviceTransform));
}

qreal  PythonQtWrapper_QGraphicsItem::boundingRegionGranularity(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRegionGranularity());
}

QGraphicsItem::CacheMode  PythonQtWrapper_QGraphicsItem::cacheMode(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->cacheMode());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsItem::childItems(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->childItems());
}

QRectF  PythonQtWrapper_QGraphicsItem::childrenBoundingRect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->childrenBoundingRect());
}

void PythonQtWrapper_QGraphicsItem::clearFocus(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->clearFocus());
}

QPainterPath  PythonQtWrapper_QGraphicsItem::clipPath(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->clipPath());
}

bool  PythonQtWrapper_QGraphicsItem::collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_collidesWithItem(other, mode));
}

bool  PythonQtWrapper_QGraphicsItem::collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_collidesWithPath(path, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsItem::collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->collidingItems(mode));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const
{
  return ( theWrappedObject->commonAncestorItem(other));
}

bool  PythonQtWrapper_QGraphicsItem::contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_contains(point));
}

void PythonQtWrapper_QGraphicsItem::contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_contextMenuEvent(event));
}

QCursor  PythonQtWrapper_QGraphicsItem::cursor(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->cursor());
}

QVariant  PythonQtWrapper_QGraphicsItem::data(QGraphicsItem* theWrappedObject, int  key) const
{
  return ( theWrappedObject->data(key));
}

QTransform  PythonQtWrapper_QGraphicsItem::deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const
{
  return ( theWrappedObject->deviceTransform(viewportTransform));
}

void PythonQtWrapper_QGraphicsItem::dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsItem::dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dropEvent(event));
}

qreal  PythonQtWrapper_QGraphicsItem::effectiveOpacity(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->effectiveOpacity());
}

void PythonQtWrapper_QGraphicsItem::ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(rect, xmargin, ymargin));
}

void PythonQtWrapper_QGraphicsItem::ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin));
}

QVariant  PythonQtWrapper_QGraphicsItem::extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_extension(variant));
}

bool  PythonQtWrapper_QGraphicsItem::filtersChildEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->filtersChildEvents());
}

QGraphicsItem::GraphicsItemFlags  PythonQtWrapper_QGraphicsItem::flags(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

void PythonQtWrapper_QGraphicsItem::focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_focusInEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::focusItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->focusItem());
}

void PythonQtWrapper_QGraphicsItem::focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_focusOutEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::focusProxy(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->focusProxy());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::focusScopeItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->focusScopeItem());
}

void PythonQtWrapper_QGraphicsItem::grabKeyboard(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->grabKeyboard());
}

void PythonQtWrapper_QGraphicsItem::grabMouse(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->grabMouse());
}

QGraphicsEffect*  PythonQtWrapper_QGraphicsItem::graphicsEffect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->graphicsEffect());
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsItem::group(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

bool  PythonQtWrapper_QGraphicsItem::handlesChildEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->handlesChildEvents());
}

bool  PythonQtWrapper_QGraphicsItem::hasCursor(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->hasCursor());
}

bool  PythonQtWrapper_QGraphicsItem::hasFocus(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

void PythonQtWrapper_QGraphicsItem::hide(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->hide());
}

void PythonQtWrapper_QGraphicsItem::hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_hoverEnterEvent(event));
}

void PythonQtWrapper_QGraphicsItem::hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_inputMethodEvent(event));
}

Qt::InputMethodHints  PythonQtWrapper_QGraphicsItem::inputMethodHints(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->inputMethodHints());
}

QVariant  PythonQtWrapper_QGraphicsItem::inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_inputMethodQuery(query));
}

void PythonQtWrapper_QGraphicsItem::installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem)
{
  ( theWrappedObject->installSceneEventFilter(filterItem));
}

bool  PythonQtWrapper_QGraphicsItem::isActive(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QGraphicsItem::isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const
{
  return ( theWrappedObject->isAncestorOf(child));
}

bool  PythonQtWrapper_QGraphicsItem::isBlockedByModalPanel(QGraphicsItem* theWrappedObject, QGraphicsItem**  blockingPanel) const
{
  return ( theWrappedObject->isBlockedByModalPanel(blockingPanel));
}

bool  PythonQtWrapper_QGraphicsItem::isClipped(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isClipped());
}

bool  PythonQtWrapper_QGraphicsItem::isEnabled(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

bool  PythonQtWrapper_QGraphicsItem::isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->isObscured(rect));
}

bool  PythonQtWrapper_QGraphicsItem::isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->isObscured(x, y, w, h));
}

bool  PythonQtWrapper_QGraphicsItem::isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

bool  PythonQtWrapper_QGraphicsItem::isPanel(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isPanel());
}

bool  PythonQtWrapper_QGraphicsItem::isSelected(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isSelected());
}

bool  PythonQtWrapper_QGraphicsItem::isUnderMouse(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isUnderMouse());
}

bool  PythonQtWrapper_QGraphicsItem::isVisible(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

bool  PythonQtWrapper_QGraphicsItem::isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const
{
  return ( theWrappedObject->isVisibleTo(parent));
}

bool  PythonQtWrapper_QGraphicsItem::isWidget(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isWidget());
}

bool  PythonQtWrapper_QGraphicsItem::isWindow(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isWindow());
}

QVariant  PythonQtWrapper_QGraphicsItem::itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_itemChange(change, value));
}

QTransform  PythonQtWrapper_QGraphicsItem::itemTransform(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, bool*  ok) const
{
  return ( theWrappedObject->itemTransform(other, ok));
}

void PythonQtWrapper_QGraphicsItem::keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsItem::keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromItem(item, path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromItem(item, point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromItem(item, polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromItem(item, rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromItem(item, x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromItem(item, x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromParent(path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromParent(point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromParent(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromParent(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromParent(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromParent(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromScene(path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromScene(point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromScene(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromScene(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromScene(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromScene(x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectFromItem(item, rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectFromItem(item, x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectFromParent(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectFromParent(x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectFromScene(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectFromScene(x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectToItem(item, rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectToItem(item, x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectToParent(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectToParent(x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectToScene(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectToScene(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToItem(item, path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
  return ( theWrappedObject->mapToItem(item, point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapToItem(item, polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapToItem(item, rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapToItem(item, x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapToItem(item, x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToParent(path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapToParent(point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapToParent(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapToParent(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapToParent(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapToParent(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToScene(path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapToScene(point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapToScene(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapToScene(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapToScene(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapToScene(x, y, w, h));
}

void PythonQtWrapper_QGraphicsItem::mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

void PythonQtWrapper_QGraphicsItem::mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsItem::mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

void PythonQtWrapper_QGraphicsItem::moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->moveBy(dx, dy));
}

qreal  PythonQtWrapper_QGraphicsItem::opacity(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QPainterPath  PythonQtWrapper_QGraphicsItem::opaqueArea(QGraphicsItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_opaqueArea());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::panel(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->panel());
}

QGraphicsItem::PanelModality  PythonQtWrapper_QGraphicsItem::panelModality(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->panelModality());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::parentItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->parentItem());
}

QGraphicsObject*  PythonQtWrapper_QGraphicsItem::parentObject(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->parentObject());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItem::parentWidget(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->parentWidget());
}

QPointF  PythonQtWrapper_QGraphicsItem::pos(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

void PythonQtWrapper_QGraphicsItem::removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem)
{
  ( theWrappedObject->removeSceneEventFilter(filterItem));
}

void PythonQtWrapper_QGraphicsItem::resetTransform(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->resetTransform());
}

qreal  PythonQtWrapper_QGraphicsItem::rotation(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->rotation());
}

qreal  PythonQtWrapper_QGraphicsItem::scale(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->scale());
}

QGraphicsScene*  PythonQtWrapper_QGraphicsItem::scene(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->scene());
}

QRectF  PythonQtWrapper_QGraphicsItem::sceneBoundingRect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->sceneBoundingRect());
}

bool  PythonQtWrapper_QGraphicsItem::sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_sceneEvent(event));
}

bool  PythonQtWrapper_QGraphicsItem::sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_sceneEventFilter(watched, event));
}

QPointF  PythonQtWrapper_QGraphicsItem::scenePos(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QTransform  PythonQtWrapper_QGraphicsItem::sceneTransform(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->sceneTransform());
}

void PythonQtWrapper_QGraphicsItem::scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect)
{
  ( theWrappedObject->scroll(dx, dy, rect));
}

void PythonQtWrapper_QGraphicsItem::setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on)
{
  ( theWrappedObject->setAcceptDrops(on));
}

void PythonQtWrapper_QGraphicsItem::setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAcceptHoverEvents(enabled));
}

void PythonQtWrapper_QGraphicsItem::setAcceptTouchEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAcceptTouchEvents(enabled));
}

void PythonQtWrapper_QGraphicsItem::setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setAcceptedMouseButtons(buttons));
}

void PythonQtWrapper_QGraphicsItem::setActive(QGraphicsItem* theWrappedObject, bool  active)
{
  ( theWrappedObject->setActive(active));
}

void PythonQtWrapper_QGraphicsItem::setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity)
{
  ( theWrappedObject->setBoundingRegionGranularity(granularity));
}

void PythonQtWrapper_QGraphicsItem::setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize)
{
  ( theWrappedObject->setCacheMode(mode, cacheSize));
}

void PythonQtWrapper_QGraphicsItem::setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor)
{
  ( theWrappedObject->setCursor(cursor));
}

void PythonQtWrapper_QGraphicsItem::setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value)
{
  ( theWrappedObject->setData(key, value));
}

void PythonQtWrapper_QGraphicsItem::setEnabled(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setEnabled(enabled));
}

void PythonQtWrapper_QGraphicsItem::setFiltersChildEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setFiltersChildEvents(enabled));
}

void PythonQtWrapper_QGraphicsItem::setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled)
{
  ( theWrappedObject->setFlag(flag, enabled));
}

void PythonQtWrapper_QGraphicsItem::setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QGraphicsItem::setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason)
{
  ( theWrappedObject->setFocus(focusReason));
}

void PythonQtWrapper_QGraphicsItem::setFocusProxy(QGraphicsItem* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setFocusProxy(item));
}

void PythonQtWrapper_QGraphicsItem::setGraphicsEffect(QGraphicsItem* theWrappedObject, QGraphicsEffect*  effect)
{
  ( theWrappedObject->setGraphicsEffect(effect));
}

void PythonQtWrapper_QGraphicsItem::setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group)
{
  ( theWrappedObject->setGroup(group));
}

void PythonQtWrapper_QGraphicsItem::setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setHandlesChildEvents(enabled));
}

void PythonQtWrapper_QGraphicsItem::setInputMethodHints(QGraphicsItem* theWrappedObject, Qt::InputMethodHints  hints)
{
  ( theWrappedObject->setInputMethodHints(hints));
}

void PythonQtWrapper_QGraphicsItem::setOpacity(QGraphicsItem* theWrappedObject, qreal  opacity)
{
  ( theWrappedObject->setOpacity(opacity));
}

void PythonQtWrapper_QGraphicsItem::setPanelModality(QGraphicsItem* theWrappedObject, QGraphicsItem::PanelModality  panelModality)
{
  ( theWrappedObject->setPanelModality(panelModality));
}

void PythonQtWrapper_QGraphicsItem::setParentItem(QGraphicsItem* theWrappedObject, QGraphicsItem*  parent)
{
  ( theWrappedObject->setParentItem(parent));
}

void PythonQtWrapper_QGraphicsItem::setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsItem::setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setPos(x, y));
}

void PythonQtWrapper_QGraphicsItem::setRotation(QGraphicsItem* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->setRotation(angle));
}

void PythonQtWrapper_QGraphicsItem::setScale(QGraphicsItem* theWrappedObject, qreal  scale)
{
  ( theWrappedObject->setScale(scale));
}

void PythonQtWrapper_QGraphicsItem::setSelected(QGraphicsItem* theWrappedObject, bool  selected)
{
  ( theWrappedObject->setSelected(selected));
}

void PythonQtWrapper_QGraphicsItem::setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip)
{
  ( theWrappedObject->setToolTip(toolTip));
}

void PythonQtWrapper_QGraphicsItem::setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine)
{
  ( theWrappedObject->setTransform(matrix, combine));
}

void PythonQtWrapper_QGraphicsItem::setTransformOriginPoint(QGraphicsItem* theWrappedObject, const QPointF&  origin)
{
  ( theWrappedObject->setTransformOriginPoint(origin));
}

void PythonQtWrapper_QGraphicsItem::setTransformOriginPoint(QGraphicsItem* theWrappedObject, qreal  ax, qreal  ay)
{
  ( theWrappedObject->setTransformOriginPoint(ax, ay));
}

void PythonQtWrapper_QGraphicsItem::setTransformations(QGraphicsItem* theWrappedObject, const QList<QGraphicsTransform* >&  transformations)
{
  ( theWrappedObject->setTransformations(transformations));
}

void PythonQtWrapper_QGraphicsItem::setVisible(QGraphicsItem* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}

void PythonQtWrapper_QGraphicsItem::setX(QGraphicsItem* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QGraphicsItem::setY(QGraphicsItem* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

void PythonQtWrapper_QGraphicsItem::setZValue(QGraphicsItem* theWrappedObject, qreal  z)
{
  ( theWrappedObject->setZValue(z));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::shape(QGraphicsItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_shape());
}

void PythonQtWrapper_QGraphicsItem::show(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->show());
}

void PythonQtWrapper_QGraphicsItem::stackBefore(QGraphicsItem* theWrappedObject, const QGraphicsItem*  sibling)
{
  ( theWrappedObject->stackBefore(sibling));
}

QGraphicsObject*  PythonQtWrapper_QGraphicsItem::toGraphicsObject(QGraphicsItem* theWrappedObject)
{
  return ( theWrappedObject->toGraphicsObject());
}

QString  PythonQtWrapper_QGraphicsItem::toolTip(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::topLevelItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->topLevelItem());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItem::topLevelWidget(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->topLevelWidget());
}

QTransform  PythonQtWrapper_QGraphicsItem::transform(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}

QPointF  PythonQtWrapper_QGraphicsItem::transformOriginPoint(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->transformOriginPoint());
}

QList<QGraphicsTransform* >  PythonQtWrapper_QGraphicsItem::transformations(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->transformations());
}

int  PythonQtWrapper_QGraphicsItem::type(QGraphicsItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_type());
}

void PythonQtWrapper_QGraphicsItem::ungrabKeyboard(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->ungrabKeyboard());
}

void PythonQtWrapper_QGraphicsItem::ungrabMouse(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->ungrabMouse());
}

void PythonQtWrapper_QGraphicsItem::unsetCursor(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->unsetCursor());
}

void PythonQtWrapper_QGraphicsItem::update(QGraphicsItem* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->update(rect));
}

void PythonQtWrapper_QGraphicsItem::update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height)
{
  ( theWrappedObject->update(x, y, width, height));
}

void PythonQtWrapper_QGraphicsItem::wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_wheelEvent(event));
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItem::window(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->window());
}

qreal  PythonQtWrapper_QGraphicsItem::x(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

qreal  PythonQtWrapper_QGraphicsItem::y(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

qreal  PythonQtWrapper_QGraphicsItem::zValue(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->zValue());
}

QString PythonQtWrapper_QGraphicsItem::py_toString(QGraphicsItem* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QGraphicsItemAnimation::~PythonQtShell_QGraphicsItemAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsItemAnimation::afterAnimationStep(qreal  step)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "afterAnimationStep");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&step};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::afterAnimationStep(step);
}
void PythonQtShell_QGraphicsItemAnimation::beforeAnimationStep(qreal  step)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "beforeAnimationStep");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&step};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::beforeAnimationStep(step);
}
void PythonQtShell_QGraphicsItemAnimation::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::childEvent(arg__1);
}
void PythonQtShell_QGraphicsItemAnimation::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsItemAnimation::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemAnimation::event(arg__1);
}
bool  PythonQtShell_QGraphicsItemAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemAnimation::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsItemAnimation::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::timerEvent(arg__1);
}
QGraphicsItemAnimation* PythonQtWrapper_QGraphicsItemAnimation::new_QGraphicsItemAnimation(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsItemAnimation(parent); }

void PythonQtWrapper_QGraphicsItemAnimation::afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_afterAnimationStep(step));
}

void PythonQtWrapper_QGraphicsItemAnimation::beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_beforeAnimationStep(step));
}

void PythonQtWrapper_QGraphicsItemAnimation::clear(QGraphicsItemAnimation* theWrappedObject)
{
  ( theWrappedObject->clear());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalShearAt(step));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItemAnimation::item(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->item());
}

QMatrix  PythonQtWrapper_QGraphicsItemAnimation::matrixAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->matrixAt(step));
}

QPointF  PythonQtWrapper_QGraphicsItemAnimation::posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->posAt(step));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::posList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->posList());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->rotationAt(step));
}

QList<QPair<qreal , qreal >  >  PythonQtWrapper_QGraphicsItemAnimation::rotationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->rotationList());
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::scaleList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->scaleList());
}

void PythonQtWrapper_QGraphicsItemAnimation::setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setItem(item));
}

void PythonQtWrapper_QGraphicsItemAnimation::setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos)
{
  ( theWrappedObject->setPosAt(step, pos));
}

void PythonQtWrapper_QGraphicsItemAnimation::setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle)
{
  ( theWrappedObject->setRotationAt(step, angle));
}

void PythonQtWrapper_QGraphicsItemAnimation::setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy)
{
  ( theWrappedObject->setScaleAt(step, sx, sy));
}

void PythonQtWrapper_QGraphicsItemAnimation::setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv)
{
  ( theWrappedObject->setShearAt(step, sh, sv));
}

void PythonQtWrapper_QGraphicsItemAnimation::setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine)
{
  ( theWrappedObject->setTimeLine(timeLine));
}

void PythonQtWrapper_QGraphicsItemAnimation::setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy)
{
  ( theWrappedObject->setTranslationAt(step, dx, dy));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::shearList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->shearList());
}

QTimeLine*  PythonQtWrapper_QGraphicsItemAnimation::timeLine(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->timeLine());
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::translationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->translationList());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalShearAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->xTranslationAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->yTranslationAt(step));
}



PythonQtShell_QGraphicsItemGroup::~PythonQtShell_QGraphicsItemGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsItemGroup::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::advance(phase);
}
QRectF  PythonQtShell_QGraphicsItemGroup::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::boundingRect();
}
bool  PythonQtShell_QGraphicsItemGroup::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsItemGroup::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsItemGroup::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::contains(point);
}
void PythonQtShell_QGraphicsItemGroup::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::dropEvent(event);
}
QVariant  PythonQtShell_QGraphicsItemGroup::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::extension(variant);
}
void PythonQtShell_QGraphicsItemGroup::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::focusInEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::focusOutEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsItemGroup::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsItemGroup::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsItemGroup::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::itemChange(change, value);
}
void PythonQtShell_QGraphicsItemGroup::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::keyPressEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::mousePressEvent(event);
}
void PythonQtShell_QGraphicsItemGroup::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsItemGroup::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::opaqueArea();
}
void PythonQtShell_QGraphicsItemGroup::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::paint(painter, option, widget);
}
bool  PythonQtShell_QGraphicsItemGroup::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsItemGroup::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::sceneEventFilter(watched, event);
}
void PythonQtShell_QGraphicsItemGroup::setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&extension, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::setExtension(extension, variant);
}
QPainterPath  PythonQtShell_QGraphicsItemGroup::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::shape();
}
bool  PythonQtShell_QGraphicsItemGroup::supportsExtension(QGraphicsItem::Extension  extension) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::supportsExtension(extension);
}
int  PythonQtShell_QGraphicsItemGroup::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItemGroup::type();
}
void PythonQtShell_QGraphicsItemGroup::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemGroup::wheelEvent(event);
}
QGraphicsItemGroup* PythonQtWrapper_QGraphicsItemGroup::new_QGraphicsItemGroup(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsItemGroup(parent); }

void PythonQtWrapper_QGraphicsItemGroup::addToGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->addToGroup(item));
}

QRectF  PythonQtWrapper_QGraphicsItemGroup::boundingRect(QGraphicsItemGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_boundingRect());
}

bool  PythonQtWrapper_QGraphicsItemGroup::isObscuredBy(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::opaqueArea(QGraphicsItemGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsItemGroup::paint(QGraphicsItemGroup* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsItemGroup::removeFromGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->removeFromGroup(item));
}

int  PythonQtWrapper_QGraphicsItemGroup::type(QGraphicsItemGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->promoted_type());
}



PythonQtShell_QGraphicsLayout::~PythonQtShell_QGraphicsLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGraphicsLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("count", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return int();
}
void PythonQtShell_QGraphicsLayout::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsLayout::itemAt(int  i) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&i};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
        } else {
          returnValue = *((QGraphicsLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return 0;
}
void PythonQtShell_QGraphicsLayout::removeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QGraphicsLayout::setGeometry(const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::setGeometry(rect);
}
QSizeF  PythonQtShell_QGraphicsLayout::sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSizeF" , "Qt::SizeHint" , "const QSizeF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QSizeF returnValue;
    void* args[3] = {NULL, (void*)&which, (void*)&constraint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
        } else {
          returnValue = *((QSizeF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSizeF();
}
void PythonQtShell_QGraphicsLayout::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::updateGeometry();
}
void PythonQtShell_QGraphicsLayout::widgetEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "widgetEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayout::widgetEvent(e);
}
QGraphicsLayout* PythonQtWrapper_QGraphicsLayout::new_QGraphicsLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsLayout(parent); }

void PythonQtWrapper_QGraphicsLayout::activate(QGraphicsLayout* theWrappedObject)
{
  ( theWrappedObject->activate());
}

void PythonQtWrapper_QGraphicsLayout::getContentsMargins(QGraphicsLayout* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( ((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->promoted_getContentsMargins(left, top, right, bottom));
}

bool  PythonQtWrapper_QGraphicsLayout::static_QGraphicsLayout_instantInvalidatePropagation()
{
  return (QGraphicsLayout::instantInvalidatePropagation());
}

void PythonQtWrapper_QGraphicsLayout::invalidate(QGraphicsLayout* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->promoted_invalidate());
}

bool  PythonQtWrapper_QGraphicsLayout::isActivated(QGraphicsLayout* theWrappedObject) const
{
  return ( theWrappedObject->isActivated());
}

void PythonQtWrapper_QGraphicsLayout::setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
  ( theWrappedObject->setContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsLayout::static_QGraphicsLayout_setInstantInvalidatePropagation(bool  enable)
{
  (QGraphicsLayout::setInstantInvalidatePropagation(enable));
}

void PythonQtWrapper_QGraphicsLayout::updateGeometry(QGraphicsLayout* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->promoted_updateGeometry());
}

void PythonQtWrapper_QGraphicsLayout::widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->promoted_widgetEvent(e));
}



PythonQtShell_QGraphicsLayoutItem::~PythonQtShell_QGraphicsLayoutItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsLayoutItem::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsLayoutItem::setGeometry(const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayoutItem::setGeometry(rect);
}
QSizeF  PythonQtShell_QGraphicsLayoutItem::sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSizeF" , "Qt::SizeHint" , "const QSizeF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QSizeF returnValue;
    void* args[3] = {NULL, (void*)&which, (void*)&constraint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
        } else {
          returnValue = *((QSizeF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSizeF();
}
void PythonQtShell_QGraphicsLayoutItem::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayoutItem::updateGeometry();
}
QGraphicsLayoutItem* PythonQtWrapper_QGraphicsLayoutItem::new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent, bool  isLayout)
{ 
return new PythonQtShell_QGraphicsLayoutItem(parent, isLayout); }

QRectF  PythonQtWrapper_QGraphicsLayoutItem::contentsRect(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->contentsRect());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( theWrappedObject->effectiveSizeHint(which, constraint));
}

QRectF  PythonQtWrapper_QGraphicsLayoutItem::geometry(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

void PythonQtWrapper_QGraphicsLayoutItem::getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( ((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->promoted_getContentsMargins(left, top, right, bottom));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsLayoutItem::graphicsItem(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->graphicsItem());
}

bool  PythonQtWrapper_QGraphicsLayoutItem::isLayout(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->isLayout());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::maximumHeight(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumHeight());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::maximumSize(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumSize());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::maximumWidth(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumWidth());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::minimumHeight(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumHeight());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::minimumSize(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumSize());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::minimumWidth(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumWidth());
}

bool  PythonQtWrapper_QGraphicsLayoutItem::ownedByLayout(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->ownedByLayout());
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLayoutItem::parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->parentLayoutItem());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::preferredHeight(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->preferredHeight());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::preferredSize(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->preferredSize());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::preferredWidth(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->preferredWidth());
}

void PythonQtWrapper_QGraphicsLayoutItem::setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->promoted_setGeometry(rect));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setMaximumHeight(height));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setMaximumSize(size));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->setMaximumSize(w, h));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setMaximumWidth(width));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setMinimumHeight(height));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setMinimumSize(size));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->setMinimumSize(w, h));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setMinimumWidth(width));
}

void PythonQtWrapper_QGraphicsLayoutItem::setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent)
{
  ( theWrappedObject->setParentLayoutItem(parent));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setPreferredHeight(height));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setPreferredSize(size));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->setPreferredSize(w, h));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setPreferredWidth(width));
}

void PythonQtWrapper_QGraphicsLayoutItem::setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType)
{
  ( theWrappedObject->setSizePolicy(hPolicy, vPolicy, controlType));
}

void PythonQtWrapper_QGraphicsLayoutItem::setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy)
{
  ( theWrappedObject->setSizePolicy(policy));
}

QSizePolicy  PythonQtWrapper_QGraphicsLayoutItem::sizePolicy(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->sizePolicy());
}

void PythonQtWrapper_QGraphicsLayoutItem::updateGeometry(QGraphicsLayoutItem* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->promoted_updateGeometry());
}



PythonQtShell_QGraphicsLineItem::~PythonQtShell_QGraphicsLineItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsLineItem::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::advance(phase);
}
QRectF  PythonQtShell_QGraphicsLineItem::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::boundingRect();
}
bool  PythonQtShell_QGraphicsLineItem::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsLineItem::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsLineItem::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::contains(point);
}
void PythonQtShell_QGraphicsLineItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsLineItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsLineItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::dropEvent(event);
}
QVariant  PythonQtShell_QGraphicsLineItem::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::extension(variant);
}
void PythonQtShell_QGraphicsLineItem::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::focusInEvent(event);
}
void PythonQtShell_QGraphicsLineItem::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::focusOutEvent(event);
}
void PythonQtShell_QGraphicsLineItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsLineItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsLineItem::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsLineItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsLineItem::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::itemChange(change, value);
}
void PythonQtShell_QGraphicsLineItem::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::keyPressEvent(event);
}
void PythonQtShell_QGraphicsLineItem::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsLineItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsLineItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsLineItem::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::mousePressEvent(event);
}
void PythonQtShell_QGraphicsLineItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsLineItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::opaqueArea();
}
void PythonQtShell_QGraphicsLineItem::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::paint(painter, option, widget);
}
bool  PythonQtShell_QGraphicsLineItem::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsLineItem::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::sceneEventFilter(watched, event);
}
QPainterPath  PythonQtShell_QGraphicsLineItem::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::shape();
}
int  PythonQtShell_QGraphicsLineItem::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLineItem::type();
}
void PythonQtShell_QGraphicsLineItem::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLineItem::wheelEvent(event);
}
QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsLineItem(parent); }

QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsLineItem(line, parent); }

QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsLineItem(x1, y1, x2, y2, parent); }

QRectF  PythonQtWrapper_QGraphicsLineItem::boundingRect(QGraphicsLineItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_boundingRect());
}

bool  PythonQtWrapper_QGraphicsLineItem::contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_contains(point));
}

QVariant  PythonQtWrapper_QGraphicsLineItem::extension(QGraphicsLineItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_extension(variant));
}

bool  PythonQtWrapper_QGraphicsLineItem::isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QLineF  PythonQtWrapper_QGraphicsLineItem::line(QGraphicsLineItem* theWrappedObject) const
{
  return ( theWrappedObject->line());
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::opaqueArea(QGraphicsLineItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsLineItem::paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_paint(painter, option, widget));
}

QPen  PythonQtWrapper_QGraphicsLineItem::pen(QGraphicsLineItem* theWrappedObject) const
{
  return ( theWrappedObject->pen());
}

void PythonQtWrapper_QGraphicsLineItem::setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line)
{
  ( theWrappedObject->setLine(line));
}

void PythonQtWrapper_QGraphicsLineItem::setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QGraphicsLineItem::setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen)
{
  ( theWrappedObject->setPen(pen));
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::shape(QGraphicsLineItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_shape());
}

int  PythonQtWrapper_QGraphicsLineItem::type(QGraphicsLineItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->promoted_type());
}



PythonQtShell_QGraphicsLinearLayout::~PythonQtShell_QGraphicsLinearLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGraphicsLinearLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("count", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLinearLayout::count();
}
void PythonQtShell_QGraphicsLinearLayout::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsLinearLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsLinearLayout::itemAt(int  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
        } else {
          returnValue = *((QGraphicsLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsLinearLayout::itemAt(index);
}
void PythonQtShell_QGraphicsLinearLayout::removeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::removeAt(index);
}
void PythonQtShell_QGraphicsLinearLayout::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::updateGeometry();
}
void PythonQtShell_QGraphicsLinearLayout::widgetEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "widgetEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLinearLayout::widgetEvent(e);
}
QGraphicsLinearLayout* PythonQtWrapper_QGraphicsLinearLayout::new_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsLinearLayout(parent); }

QGraphicsLinearLayout* PythonQtWrapper_QGraphicsLinearLayout::new_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsLinearLayout(orientation, parent); }

void PythonQtWrapper_QGraphicsLinearLayout::addItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item)
{
  ( theWrappedObject->addItem(item));
}

void PythonQtWrapper_QGraphicsLinearLayout::addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch)
{
  ( theWrappedObject->addStretch(stretch));
}

Qt::Alignment  PythonQtWrapper_QGraphicsLinearLayout::alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
  return ( theWrappedObject->alignment(item));
}

int  PythonQtWrapper_QGraphicsLinearLayout::count(QGraphicsLinearLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->promoted_count());
}

void PythonQtWrapper_QGraphicsLinearLayout::dump(QGraphicsLinearLayout* theWrappedObject, int  indent) const
{
  ( theWrappedObject->dump(indent));
}

void PythonQtWrapper_QGraphicsLinearLayout::insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, QGraphicsLayoutItem*  item)
{
  ( theWrappedObject->insertItem(index, item));
}

void PythonQtWrapper_QGraphicsLinearLayout::insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch)
{
  ( theWrappedObject->insertStretch(index, stretch));
}

void PythonQtWrapper_QGraphicsLinearLayout::invalidate(QGraphicsLinearLayout* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->promoted_invalidate());
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLinearLayout::itemAt(QGraphicsLinearLayout* theWrappedObject, int  index) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->promoted_itemAt(index));
}

qreal  PythonQtWrapper_QGraphicsLinearLayout::itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemSpacing(index));
}

Qt::Orientation  PythonQtWrapper_QGraphicsLinearLayout::orientation(QGraphicsLinearLayout* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QGraphicsLinearLayout::removeAt(QGraphicsLinearLayout* theWrappedObject, int  index)
{
  ( ((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->promoted_removeAt(index));
}

void PythonQtWrapper_QGraphicsLinearLayout::removeItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item)
{
  ( theWrappedObject->removeItem(item));
}

void PythonQtWrapper_QGraphicsLinearLayout::setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(item, alignment));
}

void PythonQtWrapper_QGraphicsLinearLayout::setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setGeometry(rect));
}

void PythonQtWrapper_QGraphicsLinearLayout::setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing)
{
  ( theWrappedObject->setItemSpacing(index, spacing));
}

void PythonQtWrapper_QGraphicsLinearLayout::setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation)
{
  ( theWrappedObject->setOrientation(orientation));
}

void PythonQtWrapper_QGraphicsLinearLayout::setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

void PythonQtWrapper_QGraphicsLinearLayout::setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch)
{
  ( theWrappedObject->setStretchFactor(item, stretch));
}

QSizeF  PythonQtWrapper_QGraphicsLinearLayout::sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( theWrappedObject->sizeHint(which, constraint));
}

qreal  PythonQtWrapper_QGraphicsLinearLayout::spacing(QGraphicsLinearLayout* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

int  PythonQtWrapper_QGraphicsLinearLayout::stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
  return ( theWrappedObject->stretchFactor(item));
}



PythonQtShell_QGraphicsObject::~PythonQtShell_QGraphicsObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsObject::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::advance(phase);
}
QRectF  PythonQtShell_QGraphicsObject::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QRectF();
}
void PythonQtShell_QGraphicsObject::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::childEvent(arg__1);
}
bool  PythonQtShell_QGraphicsObject::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsObject::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsObject::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::contains(point);
}
void PythonQtShell_QGraphicsObject::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsObject::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::customEvent(arg__1);
}
void PythonQtShell_QGraphicsObject::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsObject::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsObject::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsObject::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::dropEvent(event);
}
bool  PythonQtShell_QGraphicsObject::event(QEvent*  ev)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&ev};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::event(ev);
}
bool  PythonQtShell_QGraphicsObject::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::eventFilter(arg__1, arg__2);
}
QVariant  PythonQtShell_QGraphicsObject::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::extension(variant);
}
void PythonQtShell_QGraphicsObject::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::focusInEvent(event);
}
void PythonQtShell_QGraphicsObject::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::focusOutEvent(event);
}
void PythonQtShell_QGraphicsObject::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsObject::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsObject::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsObject::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsObject::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsObject::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsObject::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::itemChange(change, value);
}
void PythonQtShell_QGraphicsObject::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::keyPressEvent(event);
}
void PythonQtShell_QGraphicsObject::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsObject::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsObject::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsObject::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::mousePressEvent(event);
}
void PythonQtShell_QGraphicsObject::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsObject::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::opaqueArea();
}
void PythonQtShell_QGraphicsObject::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
bool  PythonQtShell_QGraphicsObject::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsObject::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::sceneEventFilter(watched, event);
}
void PythonQtShell_QGraphicsObject::setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&extension, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::setExtension(extension, variant);
}
QPainterPath  PythonQtShell_QGraphicsObject::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::shape();
}
bool  PythonQtShell_QGraphicsObject::supportsExtension(QGraphicsItem::Extension  extension) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::supportsExtension(extension);
}
void PythonQtShell_QGraphicsObject::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::timerEvent(arg__1);
}
int  PythonQtShell_QGraphicsObject::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsObject::type();
}
void PythonQtShell_QGraphicsObject::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsObject::wheelEvent(event);
}
QGraphicsObject* PythonQtWrapper_QGraphicsObject::new_QGraphicsObject(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsObject(parent); }

bool  PythonQtWrapper_QGraphicsObject::event(QGraphicsObject* theWrappedObject, QEvent*  ev)
{
  return ( ((PythonQtPublicPromoter_QGraphicsObject*)theWrappedObject)->promoted_event(ev));
}

void PythonQtWrapper_QGraphicsObject::grabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags)
{
  ( theWrappedObject->grabGesture(type, flags));
}

void PythonQtWrapper_QGraphicsObject::ungrabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type)
{
  ( theWrappedObject->ungrabGesture(type));
}

QString PythonQtWrapper_QGraphicsObject::py_toString(QGraphicsObject* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QGraphicsOpacityEffect::~PythonQtShell_QGraphicsOpacityEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsOpacityEffect::boundingRectFor(const QRectF&  sourceRect) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRectFor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&sourceRect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsOpacityEffect::boundingRectFor(sourceRect);
}
void PythonQtShell_QGraphicsOpacityEffect::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::childEvent(arg__1);
}
void PythonQtShell_QGraphicsOpacityEffect::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::customEvent(arg__1);
}
void PythonQtShell_QGraphicsOpacityEffect::draw(QPainter*  painter)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "draw");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&painter};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::draw(painter);
}
bool  PythonQtShell_QGraphicsOpacityEffect::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsOpacityEffect::event(arg__1);
}
bool  PythonQtShell_QGraphicsOpacityEffect::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsOpacityEffect::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsOpacityEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sourceChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::sourceChanged(flags);
}
void PythonQtShell_QGraphicsOpacityEffect::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsOpacityEffect::timerEvent(arg__1);
}
QGraphicsOpacityEffect* PythonQtWrapper_QGraphicsOpacityEffect::new_QGraphicsOpacityEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsOpacityEffect(parent); }

void PythonQtWrapper_QGraphicsOpacityEffect::draw(QGraphicsOpacityEffect* theWrappedObject, QPainter*  painter)
{
  ( ((PythonQtPublicPromoter_QGraphicsOpacityEffect*)theWrappedObject)->promoted_draw(painter));
}

qreal  PythonQtWrapper_QGraphicsOpacityEffect::opacity(QGraphicsOpacityEffect* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QBrush  PythonQtWrapper_QGraphicsOpacityEffect::opacityMask(QGraphicsOpacityEffect* theWrappedObject) const
{
  return ( theWrappedObject->opacityMask());
}



PythonQtShell_QGraphicsPathItem::~PythonQtShell_QGraphicsPathItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsPathItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPathItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsPathItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPathItem::opaqueArea();
}
QGraphicsPathItem* PythonQtWrapper_QGraphicsPathItem::new_QGraphicsPathItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPathItem(parent); }

QGraphicsPathItem* PythonQtWrapper_QGraphicsPathItem::new_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPathItem(path, parent); }

QRectF  PythonQtWrapper_QGraphicsPathItem::boundingRect(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsPathItem::contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

bool  PythonQtWrapper_QGraphicsPathItem::isObscuredBy(QGraphicsPathItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::opaqueArea(QGraphicsPathItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsPathItem::paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::path(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

void PythonQtWrapper_QGraphicsPathItem::setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->setPath(path));
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::shape(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

int  PythonQtWrapper_QGraphicsPathItem::type(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsPixmapItem::~PythonQtShell_QGraphicsPixmapItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsPixmapItem::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::advance(phase);
}
QRectF  PythonQtShell_QGraphicsPixmapItem::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::boundingRect();
}
bool  PythonQtShell_QGraphicsPixmapItem::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsPixmapItem::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsPixmapItem::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::contains(point);
}
void PythonQtShell_QGraphicsPixmapItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::dropEvent(event);
}
QVariant  PythonQtShell_QGraphicsPixmapItem::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::extension(variant);
}
void PythonQtShell_QGraphicsPixmapItem::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::focusInEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::focusOutEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsPixmapItem::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsPixmapItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsPixmapItem::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::itemChange(change, value);
}
void PythonQtShell_QGraphicsPixmapItem::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::keyPressEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::mousePressEvent(event);
}
void PythonQtShell_QGraphicsPixmapItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsPixmapItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::opaqueArea();
}
void PythonQtShell_QGraphicsPixmapItem::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::paint(painter, option, widget);
}
bool  PythonQtShell_QGraphicsPixmapItem::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsPixmapItem::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::sceneEventFilter(watched, event);
}
QPainterPath  PythonQtShell_QGraphicsPixmapItem::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::shape();
}
int  PythonQtShell_QGraphicsPixmapItem::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPixmapItem::type();
}
void PythonQtShell_QGraphicsPixmapItem::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsPixmapItem::wheelEvent(event);
}
QGraphicsPixmapItem* PythonQtWrapper_QGraphicsPixmapItem::new_QGraphicsPixmapItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPixmapItem(parent); }

QGraphicsPixmapItem* PythonQtWrapper_QGraphicsPixmapItem::new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPixmapItem(pixmap, parent); }

QRectF  PythonQtWrapper_QGraphicsPixmapItem::boundingRect(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_boundingRect());
}

bool  PythonQtWrapper_QGraphicsPixmapItem::contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_contains(point));
}

QVariant  PythonQtWrapper_QGraphicsPixmapItem::extension(QGraphicsPixmapItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_extension(variant));
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::offset(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::opaqueArea(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsPixmapItem::paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_paint(painter, option, widget));
}

QPixmap  PythonQtWrapper_QGraphicsPixmapItem::pixmap(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->pixmap());
}

void PythonQtWrapper_QGraphicsPixmapItem::setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->setOffset(offset));
}

void PythonQtWrapper_QGraphicsPixmapItem::setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setOffset(x, y));
}

void PythonQtWrapper_QGraphicsPixmapItem::setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap)
{
  ( theWrappedObject->setPixmap(pixmap));
}

void PythonQtWrapper_QGraphicsPixmapItem::setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode)
{
  ( theWrappedObject->setShapeMode(mode));
}

void PythonQtWrapper_QGraphicsPixmapItem::setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode)
{
  ( theWrappedObject->setTransformationMode(mode));
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::shape(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_shape());
}

QGraphicsPixmapItem::ShapeMode  PythonQtWrapper_QGraphicsPixmapItem::shapeMode(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->shapeMode());
}

Qt::TransformationMode  PythonQtWrapper_QGraphicsPixmapItem::transformationMode(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->transformationMode());
}

int  PythonQtWrapper_QGraphicsPixmapItem::type(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->promoted_type());
}



PythonQtShell_QGraphicsPolygonItem::~PythonQtShell_QGraphicsPolygonItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsPolygonItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPolygonItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsPolygonItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPolygonItem::opaqueArea();
}
QGraphicsPolygonItem* PythonQtWrapper_QGraphicsPolygonItem::new_QGraphicsPolygonItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPolygonItem(parent); }

QGraphicsPolygonItem* PythonQtWrapper_QGraphicsPolygonItem::new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPolygonItem(polygon, parent); }

QRectF  PythonQtWrapper_QGraphicsPolygonItem::boundingRect(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsPolygonItem::contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

Qt::FillRule  PythonQtWrapper_QGraphicsPolygonItem::fillRule(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->fillRule());
}

bool  PythonQtWrapper_QGraphicsPolygonItem::isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsPolygonItem::opaqueArea(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsPolygonItem::paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QPolygonF  PythonQtWrapper_QGraphicsPolygonItem::polygon(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->polygon());
}

void PythonQtWrapper_QGraphicsPolygonItem::setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule)
{
  ( theWrappedObject->setFillRule(rule));
}

void PythonQtWrapper_QGraphicsPolygonItem::setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon)
{
  ( theWrappedObject->setPolygon(polygon));
}

QPainterPath  PythonQtWrapper_QGraphicsPolygonItem::shape(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

int  PythonQtWrapper_QGraphicsPolygonItem::type(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsProxyWidget::~PythonQtShell_QGraphicsProxyWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsProxyWidget::changeEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::changeEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::childEvent(arg__1);
}
void PythonQtShell_QGraphicsProxyWidget::closeEvent(QCloseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::closeEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsProxyWidget::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::event(event);
}
bool  PythonQtShell_QGraphicsProxyWidget::eventFilter(QObject*  object, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&object, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::eventFilter(object, event);
}
bool  PythonQtShell_QGraphicsProxyWidget::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::focusNextPrevChild(next);
}
void PythonQtShell_QGraphicsProxyWidget::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsProxyWidget::grabKeyboardEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "grabKeyboardEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::grabKeyboardEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::grabMouseEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "grabMouseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::grabMouseEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::hideEvent(QHideEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::hideEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::initStyleOption(QStyleOption*  option) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "initStyleOption");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QStyleOption*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&option};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::initStyleOption(option);
}
void PythonQtShell_QGraphicsProxyWidget::moveEvent(QGraphicsSceneMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::moveEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintWindowFrame");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
}
void PythonQtShell_QGraphicsProxyWidget::polishEvent()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "polishEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::polishEvent();
}
QVariant  PythonQtShell_QGraphicsProxyWidget::propertyChange(const QString&  propertyName, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "propertyChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QString&" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&propertyName, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("propertyChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::propertyChange(propertyName, value);
}
void PythonQtShell_QGraphicsProxyWidget::resizeEvent(QGraphicsSceneResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::resizeEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::setGeometry(const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::setGeometry(rect);
}
void PythonQtShell_QGraphicsProxyWidget::showEvent(QShowEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::showEvent(event);
}
QSizeF  PythonQtShell_QGraphicsProxyWidget::sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSizeF" , "Qt::SizeHint" , "const QSizeF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QSizeF returnValue;
    void* args[3] = {NULL, (void*)&which, (void*)&constraint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
        } else {
          returnValue = *((QSizeF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::sizeHint(which, constraint);
}
void PythonQtShell_QGraphicsProxyWidget::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::timerEvent(arg__1);
}
void PythonQtShell_QGraphicsProxyWidget::ungrabKeyboardEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ungrabKeyboardEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::ungrabKeyboardEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::ungrabMouseEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ungrabMouseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::ungrabMouseEvent(event);
}
void PythonQtShell_QGraphicsProxyWidget::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsProxyWidget::updateGeometry();
}
bool  PythonQtShell_QGraphicsProxyWidget::windowFrameEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "windowFrameEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("windowFrameEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::windowFrameEvent(e);
}
Qt::WindowFrameSection  PythonQtShell_QGraphicsProxyWidget::windowFrameSectionAt(const QPointF&  pos) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "windowFrameSectionAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::WindowFrameSection" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::WindowFrameSection returnValue;
    void* args[2] = {NULL, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("windowFrameSectionAt", methodInfo, result);
        } else {
          returnValue = *((Qt::WindowFrameSection*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsProxyWidget::windowFrameSectionAt(pos);
}
QGraphicsProxyWidget* PythonQtWrapper_QGraphicsProxyWidget::new_QGraphicsProxyWidget(QGraphicsItem*  parent, Qt::WindowFlags  wFlags)
{ 
return new PythonQtShell_QGraphicsProxyWidget(parent, wFlags); }

QGraphicsProxyWidget*  PythonQtWrapper_QGraphicsProxyWidget::createProxyForChildWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  child)
{
  return ( theWrappedObject->createProxyForChildWidget(child));
}

bool  PythonQtWrapper_QGraphicsProxyWidget::event(QGraphicsProxyWidget* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QGraphicsProxyWidget::eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_eventFilter(object, event));
}

bool  PythonQtWrapper_QGraphicsProxyWidget::focusNextPrevChild(QGraphicsProxyWidget* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QGraphicsProxyWidget::grabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_grabMouseEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::hideEvent(QGraphicsProxyWidget* theWrappedObject, QHideEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_hideEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::hoverLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::hoverMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsProxyWidget::resizeEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_setGeometry(rect));
}

void PythonQtWrapper_QGraphicsProxyWidget::setWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setWidget(widget));
}

void PythonQtWrapper_QGraphicsProxyWidget::showEvent(QGraphicsProxyWidget* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_showEvent(event));
}

QSizeF  PythonQtWrapper_QGraphicsProxyWidget::sizeHint(QGraphicsProxyWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_sizeHint(which, constraint));
}

QRectF  PythonQtWrapper_QGraphicsProxyWidget::subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const
{
  return ( theWrappedObject->subWidgetRect(widget));
}

int  PythonQtWrapper_QGraphicsProxyWidget::type(QGraphicsProxyWidget* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QGraphicsProxyWidget::ungrabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_ungrabMouseEvent(event));
}

QWidget*  PythonQtWrapper_QGraphicsProxyWidget::widget(QGraphicsProxyWidget* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



PythonQtShell_QGraphicsRectItem::~PythonQtShell_QGraphicsRectItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsRectItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsRectItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsRectItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsRectItem::opaqueArea();
}
QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsRectItem(parent); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsRectItem(rect, parent); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsRectItem(x, y, w, h, parent); }

QRectF  PythonQtWrapper_QGraphicsRectItem::boundingRect(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsRectItem::contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

bool  PythonQtWrapper_QGraphicsRectItem::isObscuredBy(QGraphicsRectItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsRectItem::opaqueArea(QGraphicsRectItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsRectItem::paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QRectF  PythonQtWrapper_QGraphicsRectItem::rect(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setRect(rect));
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsRectItem::shape(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

int  PythonQtWrapper_QGraphicsRectItem::type(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsRotation::~PythonQtShell_QGraphicsRotation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsRotation::applyTo(QMatrix4x4*  matrix) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "applyTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMatrix4x4*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&matrix};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsRotation::applyTo(matrix);
}
void PythonQtShell_QGraphicsRotation::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsRotation::childEvent(arg__1);
}
void PythonQtShell_QGraphicsRotation::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsRotation::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsRotation::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsRotation::event(arg__1);
}
bool  PythonQtShell_QGraphicsRotation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsRotation::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsRotation::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsRotation::timerEvent(arg__1);
}
QGraphicsRotation* PythonQtWrapper_QGraphicsRotation::new_QGraphicsRotation(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsRotation(parent); }

qreal  PythonQtWrapper_QGraphicsRotation::angle(QGraphicsRotation* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

void PythonQtWrapper_QGraphicsRotation::applyTo(QGraphicsRotation* theWrappedObject, QMatrix4x4*  matrix) const
{
  ( ((PythonQtPublicPromoter_QGraphicsRotation*)theWrappedObject)->promoted_applyTo(matrix));
}

QVector3D  PythonQtWrapper_QGraphicsRotation::axis(QGraphicsRotation* theWrappedObject) const
{
  return ( theWrappedObject->axis());
}

QVector3D  PythonQtWrapper_QGraphicsRotation::origin(QGraphicsRotation* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QGraphicsRotation::setAngle(QGraphicsRotation* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setAngle(arg__1));
}

void PythonQtWrapper_QGraphicsRotation::setAxis(QGraphicsRotation* theWrappedObject, Qt::Axis  axis)
{
  ( theWrappedObject->setAxis(axis));
}

void PythonQtWrapper_QGraphicsRotation::setAxis(QGraphicsRotation* theWrappedObject, const QVector3D&  axis)
{
  ( theWrappedObject->setAxis(axis));
}

void PythonQtWrapper_QGraphicsRotation::setOrigin(QGraphicsRotation* theWrappedObject, const QVector3D&  point)
{
  ( theWrappedObject->setOrigin(point));
}



PythonQtShell_QGraphicsScale::~PythonQtShell_QGraphicsScale() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsScale::applyTo(QMatrix4x4*  matrix) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "applyTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMatrix4x4*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&matrix};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScale::applyTo(matrix);
}
void PythonQtShell_QGraphicsScale::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScale::childEvent(arg__1);
}
void PythonQtShell_QGraphicsScale::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScale::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsScale::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScale::event(arg__1);
}
bool  PythonQtShell_QGraphicsScale::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScale::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsScale::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScale::timerEvent(arg__1);
}
QGraphicsScale* PythonQtWrapper_QGraphicsScale::new_QGraphicsScale(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScale(parent); }

void PythonQtWrapper_QGraphicsScale::applyTo(QGraphicsScale* theWrappedObject, QMatrix4x4*  matrix) const
{
  ( ((PythonQtPublicPromoter_QGraphicsScale*)theWrappedObject)->promoted_applyTo(matrix));
}

QVector3D  PythonQtWrapper_QGraphicsScale::origin(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QGraphicsScale::setOrigin(QGraphicsScale* theWrappedObject, const QVector3D&  point)
{
  ( theWrappedObject->setOrigin(point));
}

void PythonQtWrapper_QGraphicsScale::setXScale(QGraphicsScale* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setXScale(arg__1));
}

void PythonQtWrapper_QGraphicsScale::setYScale(QGraphicsScale* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setYScale(arg__1));
}

void PythonQtWrapper_QGraphicsScale::setZScale(QGraphicsScale* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setZScale(arg__1));
}

qreal  PythonQtWrapper_QGraphicsScale::xScale(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->xScale());
}

qreal  PythonQtWrapper_QGraphicsScale::yScale(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->yScale());
}

qreal  PythonQtWrapper_QGraphicsScale::zScale(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->zScale());
}



PythonQtShell_QGraphicsScene::~PythonQtShell_QGraphicsScene() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsScene::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::childEvent(arg__1);
}
void PythonQtShell_QGraphicsScene::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsScene::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::customEvent(arg__1);
}
void PythonQtShell_QGraphicsScene::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsScene::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsScene::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsScene::drawBackground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawBackground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::drawBackground(painter, rect);
}
void PythonQtShell_QGraphicsScene::drawForeground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawForeground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::drawForeground(painter, rect);
}
void PythonQtShell_QGraphicsScene::drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItems");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "int" , "QGraphicsItem**" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
    void* args[6] = {NULL, (void*)&painter, (void*)&numItems, (void*)&items, (void*)&options, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::drawItems(painter, numItems, items, options, widget);
}
void PythonQtShell_QGraphicsScene::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dropEvent(event);
}
bool  PythonQtShell_QGraphicsScene::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScene::event(event);
}
bool  PythonQtShell_QGraphicsScene::eventFilter(QObject*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScene::eventFilter(watched, event);
}
void PythonQtShell_QGraphicsScene::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::focusInEvent(event);
}
void PythonQtShell_QGraphicsScene::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::focusOutEvent(event);
}
void PythonQtShell_QGraphicsScene::helpEvent(QGraphicsSceneHelpEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "helpEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHelpEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::helpEvent(event);
}
void PythonQtShell_QGraphicsScene::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsScene::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsScene::inputMethodQuery(query);
}
void PythonQtShell_QGraphicsScene::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::keyPressEvent(event);
}
void PythonQtShell_QGraphicsScene::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mousePressEvent(event);
}
void PythonQtShell_QGraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mouseReleaseEvent(event);
}
void PythonQtShell_QGraphicsScene::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::timerEvent(arg__1);
}
void PythonQtShell_QGraphicsScene::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::wheelEvent(event);
}
QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(parent); }

QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(sceneRect, parent); }

QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(x, y, width, height, parent); }

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::activePanel(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->activePanel());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsScene::activeWindow(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->activeWindow());
}

QGraphicsEllipseItem*  PythonQtWrapper_QGraphicsScene::addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addEllipse(rect, pen, brush));
}

QGraphicsEllipseItem*  PythonQtWrapper_QGraphicsScene::addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addEllipse(x, y, w, h, pen, brush));
}

void PythonQtWrapper_QGraphicsScene::addItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->addItem(item));
}

QGraphicsLineItem*  PythonQtWrapper_QGraphicsScene::addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen)
{
  return ( theWrappedObject->addLine(line, pen));
}

QGraphicsLineItem*  PythonQtWrapper_QGraphicsScene::addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen)
{
  return ( theWrappedObject->addLine(x1, y1, x2, y2, pen));
}

QGraphicsPathItem*  PythonQtWrapper_QGraphicsScene::addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addPath(path, pen, brush));
}

QGraphicsPixmapItem*  PythonQtWrapper_QGraphicsScene::addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap)
{
  return ( theWrappedObject->addPixmap(pixmap));
}

QGraphicsPolygonItem*  PythonQtWrapper_QGraphicsScene::addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addPolygon(polygon, pen, brush));
}

QGraphicsRectItem*  PythonQtWrapper_QGraphicsScene::addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addRect(rect, pen, brush));
}

QGraphicsRectItem*  PythonQtWrapper_QGraphicsScene::addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addRect(x, y, w, h, pen, brush));
}

QGraphicsSimpleTextItem*  PythonQtWrapper_QGraphicsScene::addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font)
{
  return ( theWrappedObject->addSimpleText(text, font));
}

QGraphicsTextItem*  PythonQtWrapper_QGraphicsScene::addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font)
{
  return ( theWrappedObject->addText(text, font));
}

QGraphicsProxyWidget*  PythonQtWrapper_QGraphicsScene::addWidget(QGraphicsScene* theWrappedObject, QWidget*  widget, Qt::WindowFlags  wFlags)
{
  return ( theWrappedObject->addWidget(widget, wFlags));
}

QBrush  PythonQtWrapper_QGraphicsScene::backgroundBrush(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->backgroundBrush());
}

int  PythonQtWrapper_QGraphicsScene::bspTreeDepth(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->bspTreeDepth());
}

void PythonQtWrapper_QGraphicsScene::clearFocus(QGraphicsScene* theWrappedObject)
{
  ( theWrappedObject->clearFocus());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->collidingItems(item, mode));
}

void PythonQtWrapper_QGraphicsScene::contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_contextMenuEvent(event));
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsScene::createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items)
{
  return ( theWrappedObject->createItemGroup(items));
}

void PythonQtWrapper_QGraphicsScene::destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group)
{
  ( theWrappedObject->destroyItemGroup(group));
}

void PythonQtWrapper_QGraphicsScene::dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsScene::dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsScene::dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsScene::drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_drawBackground(painter, rect));
}

void PythonQtWrapper_QGraphicsScene::drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_drawForeground(painter, rect));
}

void PythonQtWrapper_QGraphicsScene::drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_drawItems(painter, numItems, items, options, widget));
}

void PythonQtWrapper_QGraphicsScene::dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dropEvent(event));
}

bool  PythonQtWrapper_QGraphicsScene::event(QGraphicsScene* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QGraphicsScene::eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_eventFilter(watched, event));
}

void PythonQtWrapper_QGraphicsScene::focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_focusInEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::focusItem(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->focusItem());
}

void PythonQtWrapper_QGraphicsScene::focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_focusOutEvent(event));
}

QFont  PythonQtWrapper_QGraphicsScene::font(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QBrush  PythonQtWrapper_QGraphicsScene::foregroundBrush(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->foregroundBrush());
}

bool  PythonQtWrapper_QGraphicsScene::hasFocus(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

qreal  PythonQtWrapper_QGraphicsScene::height(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

void PythonQtWrapper_QGraphicsScene::helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_helpEvent(event));
}

void PythonQtWrapper_QGraphicsScene::inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_inputMethodEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsScene::inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_inputMethodQuery(query));
}

void PythonQtWrapper_QGraphicsScene::invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers)
{
  ( theWrappedObject->invalidate(x, y, w, h, layers));
}

bool  PythonQtWrapper_QGraphicsScene::isActive(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QGraphicsScene::isSortCacheEnabled(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->isSortCacheEnabled());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->itemAt(pos, deviceTransform));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->itemAt(x, y, deviceTransform));
}

QGraphicsScene::ItemIndexMethod  PythonQtWrapper_QGraphicsScene::itemIndexMethod(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->itemIndexMethod());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, Qt::SortOrder  order) const
{
  return ( theWrappedObject->items(order));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(path, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPointF&  pos, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(pos, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(polygon, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(rect, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(x, y, w, h, mode, order, deviceTransform));
}

QRectF  PythonQtWrapper_QGraphicsScene::itemsBoundingRect(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->itemsBoundingRect());
}

void PythonQtWrapper_QGraphicsScene::keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsScene::keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

void PythonQtWrapper_QGraphicsScene::mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::mouseGrabberItem(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->mouseGrabberItem());
}

void PythonQtWrapper_QGraphicsScene::mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsScene::mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsScene::mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

QPalette  PythonQtWrapper_QGraphicsScene::palette(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->palette());
}

void PythonQtWrapper_QGraphicsScene::removeItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->removeItem(item));
}

void PythonQtWrapper_QGraphicsScene::render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target, const QRectF&  source, Qt::AspectRatioMode  aspectRatioMode)
{
  ( theWrappedObject->render(painter, target, source, aspectRatioMode));
}

QRectF  PythonQtWrapper_QGraphicsScene::sceneRect(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->sceneRect());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::selectedItems(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->selectedItems());
}

QPainterPath  PythonQtWrapper_QGraphicsScene::selectionArea(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->selectionArea());
}

bool  PythonQtWrapper_QGraphicsScene::sendEvent(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, QEvent*  event)
{
  return ( theWrappedObject->sendEvent(item, event));
}

void PythonQtWrapper_QGraphicsScene::setActivePanel(QGraphicsScene* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setActivePanel(item));
}

void PythonQtWrapper_QGraphicsScene::setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget)
{
  ( theWrappedObject->setActiveWindow(widget));
}

void PythonQtWrapper_QGraphicsScene::setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackgroundBrush(brush));
}

void PythonQtWrapper_QGraphicsScene::setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth)
{
  ( theWrappedObject->setBspTreeDepth(depth));
}

void PythonQtWrapper_QGraphicsScene::setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason)
{
  ( theWrappedObject->setFocus(focusReason));
}

void PythonQtWrapper_QGraphicsScene::setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason)
{
  ( theWrappedObject->setFocusItem(item, focusReason));
}

void PythonQtWrapper_QGraphicsScene::setFont(QGraphicsScene* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsScene::setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForegroundBrush(brush));
}

void PythonQtWrapper_QGraphicsScene::setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method)
{
  ( theWrappedObject->setItemIndexMethod(method));
}

void PythonQtWrapper_QGraphicsScene::setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette)
{
  ( theWrappedObject->setPalette(palette));
}

void PythonQtWrapper_QGraphicsScene::setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setSceneRect(rect));
}

void PythonQtWrapper_QGraphicsScene::setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setSceneRect(x, y, w, h));
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, const QTransform&  deviceTransform)
{
  ( theWrappedObject->setSelectionArea(path, mode, deviceTransform));
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QTransform&  deviceTransform)
{
  ( theWrappedObject->setSelectionArea(path, deviceTransform));
}

void PythonQtWrapper_QGraphicsScene::setSortCacheEnabled(QGraphicsScene* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setSortCacheEnabled(enabled));
}

void PythonQtWrapper_QGraphicsScene::setStickyFocus(QGraphicsScene* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setStickyFocus(enabled));
}

void PythonQtWrapper_QGraphicsScene::setStyle(QGraphicsScene* theWrappedObject, QStyle*  style)
{
  ( theWrappedObject->setStyle(style));
}

bool  PythonQtWrapper_QGraphicsScene::stickyFocus(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->stickyFocus());
}

QStyle*  PythonQtWrapper_QGraphicsScene::style(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

void PythonQtWrapper_QGraphicsScene::update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->update(x, y, w, h));
}

QList<QGraphicsView* >  PythonQtWrapper_QGraphicsScene::views(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->views());
}

void PythonQtWrapper_QGraphicsScene::wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_wheelEvent(event));
}

qreal  PythonQtWrapper_QGraphicsScene::width(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QGraphicsSceneContextMenuEvent* PythonQtWrapper_QGraphicsSceneContextMenuEvent::new_QGraphicsSceneContextMenuEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneContextMenuEvent(type); }

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneContextMenuEvent::modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneContextMenuEvent::pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QGraphicsSceneContextMenuEvent::Reason  PythonQtWrapper_QGraphicsSceneContextMenuEvent::reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->reason());
}

QPointF  PythonQtWrapper_QGraphicsSceneContextMenuEvent::scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneContextMenuEvent::screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason)
{
  ( theWrappedObject->setReason(reason));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneDragDropEvent* PythonQtWrapper_QGraphicsSceneDragDropEvent::new_QGraphicsSceneDragDropEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneDragDropEvent(type); }

void PythonQtWrapper_QGraphicsSceneDragDropEvent::acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject)
{
  ( theWrappedObject->acceptProposedAction());
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneDragDropEvent::buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

Qt::DropAction  PythonQtWrapper_QGraphicsSceneDragDropEvent::dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->dropAction());
}

const QMimeData*  PythonQtWrapper_QGraphicsSceneDragDropEvent::mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->mimeData());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneDragDropEvent::modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneDragDropEvent::pos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

Qt::DropActions  PythonQtWrapper_QGraphicsSceneDragDropEvent::possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->possibleActions());
}

Qt::DropAction  PythonQtWrapper_QGraphicsSceneDragDropEvent::proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->proposedAction());
}

QPointF  PythonQtWrapper_QGraphicsSceneDragDropEvent::scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneDragDropEvent::screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action)
{
  ( theWrappedObject->setDropAction(action));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions)
{
  ( theWrappedObject->setPossibleActions(actions));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action)
{
  ( theWrappedObject->setProposedAction(action));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}

QWidget*  PythonQtWrapper_QGraphicsSceneDragDropEvent::source(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}



QGraphicsSceneEvent* PythonQtWrapper_QGraphicsSceneEvent::new_QGraphicsSceneEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneEvent(type); }

QWidget*  PythonQtWrapper_QGraphicsSceneEvent::widget(QGraphicsSceneEvent* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



QGraphicsSceneHelpEvent* PythonQtWrapper_QGraphicsSceneHelpEvent::new_QGraphicsSceneHelpEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneHelpEvent(type); }

QPointF  PythonQtWrapper_QGraphicsSceneHelpEvent::scenePos(QGraphicsSceneHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneHelpEvent::screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneHelpEvent::setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneHelpEvent::setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneHoverEvent* PythonQtWrapper_QGraphicsSceneHoverEvent::new_QGraphicsSceneHoverEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneHoverEvent(type); }

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastPos());
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneHoverEvent::lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScreenPos());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneHoverEvent::modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::pos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneHoverEvent::screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastPos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setLastScreenPos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneMouseEvent* PythonQtWrapper_QGraphicsSceneMouseEvent::new_QGraphicsSceneMouseEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneMouseEvent(type); }

Qt::MouseButton  PythonQtWrapper_QGraphicsSceneMouseEvent::button(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->button());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
  return ( theWrappedObject->buttonDownPos(button));
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
  return ( theWrappedObject->buttonDownScenePos(button));
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
  return ( theWrappedObject->buttonDownScreenPos(button));
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneMouseEvent::buttons(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastPos());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScreenPos());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneMouseEvent::modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::pos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button)
{
  ( theWrappedObject->setButton(button));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos)
{
  ( theWrappedObject->setButtonDownPos(button, pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos)
{
  ( theWrappedObject->setButtonDownScenePos(button, pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos)
{
  ( theWrappedObject->setButtonDownScreenPos(button, pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setLastScreenPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneMoveEvent* PythonQtWrapper_QGraphicsSceneMoveEvent::new_QGraphicsSceneMoveEvent()
{ 
return new QGraphicsSceneMoveEvent(); }

QPointF  PythonQtWrapper_QGraphicsSceneMoveEvent::newPos(QGraphicsSceneMoveEvent* theWrappedObject) const
{
  return ( theWrappedObject->newPos());
}

QPointF  PythonQtWrapper_QGraphicsSceneMoveEvent::oldPos(QGraphicsSceneMoveEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldPos());
}

void PythonQtWrapper_QGraphicsSceneMoveEvent::setNewPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setNewPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMoveEvent::setOldPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setOldPos(pos));
}



QGraphicsSceneResizeEvent* PythonQtWrapper_QGraphicsSceneResizeEvent::new_QGraphicsSceneResizeEvent()
{ 
return new QGraphicsSceneResizeEvent(); }

QSizeF  PythonQtWrapper_QGraphicsSceneResizeEvent::newSize(QGraphicsSceneResizeEvent* theWrappedObject) const
{
  return ( theWrappedObject->newSize());
}

QSizeF  PythonQtWrapper_QGraphicsSceneResizeEvent::oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldSize());
}

void PythonQtWrapper_QGraphicsSceneResizeEvent::setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setNewSize(size));
}

void PythonQtWrapper_QGraphicsSceneResizeEvent::setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setOldSize(size));
}


