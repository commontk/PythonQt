#include "com_trolltech_qt_gui3.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QColor>
#include <QIconEngine>
#include <QImage>
#include <QPainterPath>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QTextCursor>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qabstractstate.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcolor.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qgridlayout.h>
#include <qgroupbox.h>
#include <qguiapplication.h>
#include <qheaderview.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qinputdialog.h>
#include <qiodevice.h>
#include <qitemdelegate.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qkeyeventtransition.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsessionmanager.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtransform.h>
#include <qtranslator.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>

QGraphicsSceneWheelEvent* PythonQtWrapper_QGraphicsSceneWheelEvent::new_QGraphicsSceneWheelEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneWheelEvent(type); }

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneWheelEvent::buttons(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

int  PythonQtWrapper_QGraphicsSceneWheelEvent::delta(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->delta());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneWheelEvent::modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

Qt::Orientation  PythonQtWrapper_QGraphicsSceneWheelEvent::orientation(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

QPointF  PythonQtWrapper_QGraphicsSceneWheelEvent::pos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsSceneWheelEvent::scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneWheelEvent::screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta)
{
  ( theWrappedObject->setDelta(delta));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation)
{
  ( theWrappedObject->setOrientation(orientation));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



PythonQtShell_QGraphicsSimpleTextItem::~PythonQtShell_QGraphicsSimpleTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsSimpleTextItem::isObscuredBy(const QGraphicsItem*  item) const
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
  return QGraphicsSimpleTextItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsSimpleTextItem::opaqueArea() const
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
  return QGraphicsSimpleTextItem::opaqueArea();
}
QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsSimpleTextItem(parent); }

QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsSimpleTextItem(text, parent); }

QRectF  PythonQtWrapper_QGraphicsSimpleTextItem::boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QFont  PythonQtWrapper_QGraphicsSimpleTextItem::font(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsSimpleTextItem::opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->promoted_opaqueArea());
}

void PythonQtWrapper_QGraphicsSimpleTextItem::paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

QPainterPath  PythonQtWrapper_QGraphicsSimpleTextItem::shape(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

QString  PythonQtWrapper_QGraphicsSimpleTextItem::text(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

int  PythonQtWrapper_QGraphicsSimpleTextItem::type(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsTextItem::~PythonQtShell_QGraphicsTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsTextItem::childEvent(QChildEvent*  arg__1)
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
  QGraphicsTextItem::childEvent(arg__1);
}
void PythonQtShell_QGraphicsTextItem::customEvent(QEvent*  arg__1)
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
  QGraphicsTextItem::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsTextItem::event(QEvent*  ev)
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
  return QGraphicsTextItem::event(ev);
}
bool  PythonQtShell_QGraphicsTextItem::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGraphicsTextItem::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsTextItem::timerEvent(QTimerEvent*  arg__1)
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
  QGraphicsTextItem::timerEvent(arg__1);
}
QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsTextItem(parent); }

QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsTextItem(text, parent); }

void PythonQtWrapper_QGraphicsTextItem::adjustSize(QGraphicsTextItem* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

QRectF  PythonQtWrapper_QGraphicsTextItem::boundingRect(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsTextItem::contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QColor  PythonQtWrapper_QGraphicsTextItem::defaultTextColor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextColor());
}

QTextDocument*  PythonQtWrapper_QGraphicsTextItem::document(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QFont  PythonQtWrapper_QGraphicsTextItem::font(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( theWrappedObject->isObscuredBy(item));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::opaqueArea(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->opaqueArea());
}

bool  PythonQtWrapper_QGraphicsTextItem::openExternalLinks(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->openExternalLinks());
}

void PythonQtWrapper_QGraphicsTextItem::paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsTextItem::setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c)
{
  ( theWrappedObject->setDefaultTextColor(c));
}

void PythonQtWrapper_QGraphicsTextItem::setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document)
{
  ( theWrappedObject->setDocument(document));
}

void PythonQtWrapper_QGraphicsTextItem::setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsTextItem::setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QGraphicsTextItem::setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenExternalLinks(open));
}

void PythonQtWrapper_QGraphicsTextItem::setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setPlainText(text));
}

void PythonQtWrapper_QGraphicsTextItem::setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b)
{
  ( theWrappedObject->setTabChangesFocus(b));
}

void PythonQtWrapper_QGraphicsTextItem::setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->setTextCursor(cursor));
}

void PythonQtWrapper_QGraphicsTextItem::setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

void PythonQtWrapper_QGraphicsTextItem::setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setTextWidth(width));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::shape(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

bool  PythonQtWrapper_QGraphicsTextItem::tabChangesFocus(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

QTextCursor  PythonQtWrapper_QGraphicsTextItem::textCursor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

Qt::TextInteractionFlags  PythonQtWrapper_QGraphicsTextItem::textInteractionFlags(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

qreal  PythonQtWrapper_QGraphicsTextItem::textWidth(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textWidth());
}

QString  PythonQtWrapper_QGraphicsTextItem::toHtml(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QGraphicsTextItem::toPlainText(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

int  PythonQtWrapper_QGraphicsTextItem::type(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsTransform::~PythonQtShell_QGraphicsTransform() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsTransform::applyTo(QMatrix4x4*  matrix) const
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
  
}
void PythonQtShell_QGraphicsTransform::childEvent(QChildEvent*  arg__1)
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
  QGraphicsTransform::childEvent(arg__1);
}
void PythonQtShell_QGraphicsTransform::customEvent(QEvent*  arg__1)
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
  QGraphicsTransform::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsTransform::event(QEvent*  arg__1)
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
  return QGraphicsTransform::event(arg__1);
}
bool  PythonQtShell_QGraphicsTransform::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGraphicsTransform::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsTransform::timerEvent(QTimerEvent*  arg__1)
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
  QGraphicsTransform::timerEvent(arg__1);
}
QGraphicsTransform* PythonQtWrapper_QGraphicsTransform::new_QGraphicsTransform(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsTransform(parent); }



PythonQtShell_QGraphicsView::~PythonQtShell_QGraphicsView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsView::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::actionEvent(arg__1);
}
void PythonQtShell_QGraphicsView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
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
  QGraphicsView::changeEvent(arg__1);
}
void PythonQtShell_QGraphicsView::childEvent(QChildEvent*  arg__1)
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
  QGraphicsView::childEvent(arg__1);
}
void PythonQtShell_QGraphicsView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::closeEvent(arg__1);
}
void PythonQtShell_QGraphicsView::contextMenuEvent(QContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsView::customEvent(QEvent*  arg__1)
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
  QGraphicsView::customEvent(arg__1);
}
int  PythonQtShell_QGraphicsView::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
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
  return QGraphicsView::devType();
}
void PythonQtShell_QGraphicsView::dragEnterEvent(QDragEnterEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsView::dragLeaveEvent(QDragLeaveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsView::dragMoveEvent(QDragMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsView::drawBackground(QPainter*  painter, const QRectF&  rect)
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
  QGraphicsView::drawBackground(painter, rect);
}
void PythonQtShell_QGraphicsView::drawForeground(QPainter*  painter, const QRectF&  rect)
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
  QGraphicsView::drawForeground(painter, rect);
}
void PythonQtShell_QGraphicsView::drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItems");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "int" , "QGraphicsItem**" , "const QStyleOptionGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&painter, (void*)&numItems, (void*)&items, (void*)&options};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::drawItems(painter, numItems, items, options);
}
void PythonQtShell_QGraphicsView::dropEvent(QDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dropEvent(event);
}
void PythonQtShell_QGraphicsView::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
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
  QGraphicsView::enterEvent(arg__1);
}
bool  PythonQtShell_QGraphicsView::event(QEvent*  event)
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
  return QGraphicsView::event(event);
}
bool  PythonQtShell_QGraphicsView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGraphicsView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsView::focusInEvent(QFocusEvent*  event)
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
  QGraphicsView::focusInEvent(event);
}
bool  PythonQtShell_QGraphicsView::focusNextPrevChild(bool  next)
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
  return QGraphicsView::focusNextPrevChild(next);
}
void PythonQtShell_QGraphicsView::focusOutEvent(QFocusEvent*  event)
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
  QGraphicsView::focusOutEvent(event);
}
bool  PythonQtShell_QGraphicsView::hasHeightForWidth() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasHeightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasHeightForWidth", methodInfo, result);
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
  return QGraphicsView::hasHeightForWidth();
}
int  PythonQtShell_QGraphicsView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
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
  return QGraphicsView::heightForWidth(arg__1);
}
void PythonQtShell_QGraphicsView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::hideEvent(arg__1);
}
void PythonQtShell_QGraphicsView::initPainter(QPainter*  painter) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "initPainter");
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
  QGraphicsView::initPainter(painter);
}
void PythonQtShell_QGraphicsView::inputMethodEvent(QInputMethodEvent*  event)
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
  QGraphicsView::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsView::inputMethodQuery(Qt::InputMethodQuery  query) const
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
  return QGraphicsView::inputMethodQuery(query);
}
void PythonQtShell_QGraphicsView::keyPressEvent(QKeyEvent*  event)
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
  QGraphicsView::keyPressEvent(event);
}
void PythonQtShell_QGraphicsView::keyReleaseEvent(QKeyEvent*  event)
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
  QGraphicsView::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsView::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
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
  QGraphicsView::leaveEvent(arg__1);
}
int  PythonQtShell_QGraphicsView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
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
  return QGraphicsView::metric(arg__1);
}
void PythonQtShell_QGraphicsView::mouseDoubleClickEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsView::mouseMoveEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsView::mousePressEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mousePressEvent(event);
}
void PythonQtShell_QGraphicsView::mouseReleaseEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mouseReleaseEvent(event);
}
void PythonQtShell_QGraphicsView::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::moveEvent(arg__1);
}
bool  PythonQtShell_QGraphicsView::nativeEvent(const QByteArray&  eventType, void*  message, long*  result)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nativeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&eventType, (void*)&message, (void*)&result};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nativeEvent", methodInfo, result);
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
  return QGraphicsView::nativeEvent(eventType, message, result);
}
QPaintEngine*  PythonQtShell_QGraphicsView::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::paintEngine();
}
void PythonQtShell_QGraphicsView::paintEvent(QPaintEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::paintEvent(event);
}
QPaintDevice*  PythonQtShell_QGraphicsView::redirected(QPoint*  offset) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "redirected");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue;
    void* args[2] = {NULL, (void*)&offset};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
        } else {
          returnValue = *((QPaintDevice**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::redirected(offset);
}
void PythonQtShell_QGraphicsView::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::resizeEvent(event);
}
void PythonQtShell_QGraphicsView::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::scrollContentsBy(dx, dy);
}
void PythonQtShell_QGraphicsView::setupViewport(QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setupViewport");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::setupViewport(widget);
}
QPainter*  PythonQtShell_QGraphicsView::sharedPainter() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sharedPainter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
        } else {
          returnValue = *((QPainter**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::sharedPainter();
}
void PythonQtShell_QGraphicsView::showEvent(QShowEvent*  event)
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
  QGraphicsView::showEvent(event);
}
void PythonQtShell_QGraphicsView::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::tabletEvent(arg__1);
}
void PythonQtShell_QGraphicsView::timerEvent(QTimerEvent*  arg__1)
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
  QGraphicsView::timerEvent(arg__1);
}
bool  PythonQtShell_QGraphicsView::viewportEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("viewportEvent", methodInfo, result);
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
  return QGraphicsView::viewportEvent(event);
}
QSize  PythonQtShell_QGraphicsView::viewportSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewportSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::viewportSizeHint();
}
void PythonQtShell_QGraphicsView::wheelEvent(QWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::wheelEvent(event);
}
QGraphicsView* PythonQtWrapper_QGraphicsView::new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent)
{ 
return new PythonQtShell_QGraphicsView(scene, parent); }

QGraphicsView* PythonQtWrapper_QGraphicsView::new_QGraphicsView(QWidget*  parent)
{ 
return new PythonQtShell_QGraphicsView(parent); }

Qt::Alignment  PythonQtWrapper_QGraphicsView::alignment(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QBrush  PythonQtWrapper_QGraphicsView::backgroundBrush(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->backgroundBrush());
}

QGraphicsView::CacheMode  PythonQtWrapper_QGraphicsView::cacheMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->cacheMode());
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item)
{
  ( theWrappedObject->centerOn(item));
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->centerOn(pos));
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->centerOn(x, y));
}

void PythonQtWrapper_QGraphicsView::contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_contextMenuEvent(event));
}

void PythonQtWrapper_QGraphicsView::dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsView::dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

QGraphicsView::DragMode  PythonQtWrapper_QGraphicsView::dragMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->dragMode());
}

void PythonQtWrapper_QGraphicsView::dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsView::drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_drawBackground(painter, rect));
}

void PythonQtWrapper_QGraphicsView::drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_drawForeground(painter, rect));
}

void PythonQtWrapper_QGraphicsView::drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_drawItems(painter, numItems, items, options));
}

void PythonQtWrapper_QGraphicsView::dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_dropEvent(event));
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(item, xmargin, ymargin));
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(rect, xmargin, ymargin));
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin));
}

bool  PythonQtWrapper_QGraphicsView::event(QGraphicsView* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_event(event));
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode)
{
  ( theWrappedObject->fitInView(item, aspectRadioMode));
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode)
{
  ( theWrappedObject->fitInView(rect, aspectRadioMode));
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode)
{
  ( theWrappedObject->fitInView(x, y, w, h, aspectRadioMode));
}

void PythonQtWrapper_QGraphicsView::focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_focusInEvent(event));
}

bool  PythonQtWrapper_QGraphicsView::focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QGraphicsView::focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_focusOutEvent(event));
}

QBrush  PythonQtWrapper_QGraphicsView::foregroundBrush(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->foregroundBrush());
}

void PythonQtWrapper_QGraphicsView::inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_inputMethodEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsView::inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_inputMethodQuery(query));
}

bool  PythonQtWrapper_QGraphicsView::isInteractive(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->isInteractive());
}

bool  PythonQtWrapper_QGraphicsView::isTransformed(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->isTransformed());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsView::itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->itemAt(pos));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsView::itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->itemAt(x, y));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->items());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(path, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->items(pos));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(polygon, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(rect, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->items(x, y));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(x, y, w, h, mode));
}

void PythonQtWrapper_QGraphicsView::keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsView::keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

QPainterPath  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromScene(path));
}

QPoint  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromScene(point));
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromScene(polygon));
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromScene(rect));
}

QPoint  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromScene(x, y));
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromScene(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToScene(path));
}

QPointF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const
{
  return ( theWrappedObject->mapToScene(point));
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const
{
  return ( theWrappedObject->mapToScene(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const
{
  return ( theWrappedObject->mapToScene(rect));
}

QPointF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->mapToScene(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const
{
  return ( theWrappedObject->mapToScene(x, y, w, h));
}

QMatrix  PythonQtWrapper_QGraphicsView::matrix(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->matrix());
}

void PythonQtWrapper_QGraphicsView::mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

void PythonQtWrapper_QGraphicsView::mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsView::mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsView::mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

QGraphicsView::OptimizationFlags  PythonQtWrapper_QGraphicsView::optimizationFlags(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->optimizationFlags());
}

void PythonQtWrapper_QGraphicsView::paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_paintEvent(event));
}

void PythonQtWrapper_QGraphicsView::render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target, const QRect&  source, Qt::AspectRatioMode  aspectRatioMode)
{
  ( theWrappedObject->render(painter, target, source, aspectRatioMode));
}

QPainter::RenderHints  PythonQtWrapper_QGraphicsView::renderHints(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

void PythonQtWrapper_QGraphicsView::resetCachedContent(QGraphicsView* theWrappedObject)
{
  ( theWrappedObject->resetCachedContent());
}

void PythonQtWrapper_QGraphicsView::resetMatrix(QGraphicsView* theWrappedObject)
{
  ( theWrappedObject->resetMatrix());
}

void PythonQtWrapper_QGraphicsView::resetTransform(QGraphicsView* theWrappedObject)
{
  ( theWrappedObject->resetTransform());
}

QGraphicsView::ViewportAnchor  PythonQtWrapper_QGraphicsView::resizeAnchor(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->resizeAnchor());
}

void PythonQtWrapper_QGraphicsView::resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QGraphicsView::rotate(QGraphicsView* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->rotate(angle));
}

Qt::ItemSelectionMode  PythonQtWrapper_QGraphicsView::rubberBandSelectionMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->rubberBandSelectionMode());
}

void PythonQtWrapper_QGraphicsView::scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy)
{
  ( theWrappedObject->scale(sx, sy));
}

QGraphicsScene*  PythonQtWrapper_QGraphicsView::scene(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->scene());
}

QRectF  PythonQtWrapper_QGraphicsView::sceneRect(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->sceneRect());
}

void PythonQtWrapper_QGraphicsView::scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QGraphicsView::setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QGraphicsView::setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackgroundBrush(brush));
}

void PythonQtWrapper_QGraphicsView::setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode)
{
  ( theWrappedObject->setCacheMode(mode));
}

void PythonQtWrapper_QGraphicsView::setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode)
{
  ( theWrappedObject->setDragMode(mode));
}

void PythonQtWrapper_QGraphicsView::setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForegroundBrush(brush));
}

void PythonQtWrapper_QGraphicsView::setInteractive(QGraphicsView* theWrappedObject, bool  allowed)
{
  ( theWrappedObject->setInteractive(allowed));
}

void PythonQtWrapper_QGraphicsView::setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine)
{
  ( theWrappedObject->setMatrix(matrix, combine));
}

void PythonQtWrapper_QGraphicsView::setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled)
{
  ( theWrappedObject->setOptimizationFlag(flag, enabled));
}

void PythonQtWrapper_QGraphicsView::setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags)
{
  ( theWrappedObject->setOptimizationFlags(flags));
}

void PythonQtWrapper_QGraphicsView::setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled)
{
  ( theWrappedObject->setRenderHint(hint, enabled));
}

void PythonQtWrapper_QGraphicsView::setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints)
{
  ( theWrappedObject->setRenderHints(hints));
}

void PythonQtWrapper_QGraphicsView::setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor)
{
  ( theWrappedObject->setResizeAnchor(anchor));
}

void PythonQtWrapper_QGraphicsView::setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode)
{
  ( theWrappedObject->setRubberBandSelectionMode(mode));
}

void PythonQtWrapper_QGraphicsView::setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene)
{
  ( theWrappedObject->setScene(scene));
}

void PythonQtWrapper_QGraphicsView::setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setSceneRect(rect));
}

void PythonQtWrapper_QGraphicsView::setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setSceneRect(x, y, w, h));
}

void PythonQtWrapper_QGraphicsView::setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine)
{
  ( theWrappedObject->setTransform(matrix, combine));
}

void PythonQtWrapper_QGraphicsView::setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor)
{
  ( theWrappedObject->setTransformationAnchor(anchor));
}

void PythonQtWrapper_QGraphicsView::setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode)
{
  ( theWrappedObject->setViewportUpdateMode(mode));
}

void PythonQtWrapper_QGraphicsView::setupViewport(QGraphicsView* theWrappedObject, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_setupViewport(widget));
}

void PythonQtWrapper_QGraphicsView::shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv)
{
  ( theWrappedObject->shear(sh, sv));
}

void PythonQtWrapper_QGraphicsView::showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_showEvent(event));
}

QSize  PythonQtWrapper_QGraphicsView::sizeHint(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QTransform  PythonQtWrapper_QGraphicsView::transform(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}

QGraphicsView::ViewportAnchor  PythonQtWrapper_QGraphicsView::transformationAnchor(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->transformationAnchor());
}

void PythonQtWrapper_QGraphicsView::translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

bool  PythonQtWrapper_QGraphicsView::viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_viewportEvent(event));
}

QTransform  PythonQtWrapper_QGraphicsView::viewportTransform(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->viewportTransform());
}

QGraphicsView::ViewportUpdateMode  PythonQtWrapper_QGraphicsView::viewportUpdateMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->viewportUpdateMode());
}

void PythonQtWrapper_QGraphicsView::wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_wheelEvent(event));
}



PythonQtShell_QGraphicsWidget::~PythonQtShell_QGraphicsWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsWidget::changeEvent(QEvent*  event)
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
  QGraphicsWidget::changeEvent(event);
}
void PythonQtShell_QGraphicsWidget::childEvent(QChildEvent*  arg__1)
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
  QGraphicsWidget::childEvent(arg__1);
}
void PythonQtShell_QGraphicsWidget::closeEvent(QCloseEvent*  event)
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
  QGraphicsWidget::closeEvent(event);
}
void PythonQtShell_QGraphicsWidget::customEvent(QEvent*  arg__1)
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
  QGraphicsWidget::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsWidget::event(QEvent*  event)
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
  return QGraphicsWidget::event(event);
}
bool  PythonQtShell_QGraphicsWidget::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGraphicsWidget::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QGraphicsWidget::focusNextPrevChild(bool  next)
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
  return QGraphicsWidget::focusNextPrevChild(next);
}
void PythonQtShell_QGraphicsWidget::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
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
  QGraphicsWidget::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsWidget::grabKeyboardEvent(QEvent*  event)
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
  QGraphicsWidget::grabKeyboardEvent(event);
}
void PythonQtShell_QGraphicsWidget::grabMouseEvent(QEvent*  event)
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
  QGraphicsWidget::grabMouseEvent(event);
}
void PythonQtShell_QGraphicsWidget::hideEvent(QHideEvent*  event)
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
  QGraphicsWidget::hideEvent(event);
}
void PythonQtShell_QGraphicsWidget::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
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
  QGraphicsWidget::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsWidget::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
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
  QGraphicsWidget::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsWidget::initStyleOption(QStyleOption*  option) const
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
  QGraphicsWidget::initStyleOption(option);
}
void PythonQtShell_QGraphicsWidget::moveEvent(QGraphicsSceneMoveEvent*  event)
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
  QGraphicsWidget::moveEvent(event);
}
void PythonQtShell_QGraphicsWidget::paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
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
  QGraphicsWidget::paintWindowFrame(painter, option, widget);
}
void PythonQtShell_QGraphicsWidget::polishEvent()
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
  QGraphicsWidget::polishEvent();
}
QVariant  PythonQtShell_QGraphicsWidget::propertyChange(const QString&  propertyName, const QVariant&  value)
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
  return QGraphicsWidget::propertyChange(propertyName, value);
}
void PythonQtShell_QGraphicsWidget::resizeEvent(QGraphicsSceneResizeEvent*  event)
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
  QGraphicsWidget::resizeEvent(event);
}
void PythonQtShell_QGraphicsWidget::setGeometry(const QRectF&  rect)
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
  QGraphicsWidget::setGeometry(rect);
}
void PythonQtShell_QGraphicsWidget::showEvent(QShowEvent*  event)
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
  QGraphicsWidget::showEvent(event);
}
QSizeF  PythonQtShell_QGraphicsWidget::sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const
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
  return QGraphicsWidget::sizeHint(which, constraint);
}
void PythonQtShell_QGraphicsWidget::timerEvent(QTimerEvent*  arg__1)
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
  QGraphicsWidget::timerEvent(arg__1);
}
void PythonQtShell_QGraphicsWidget::ungrabKeyboardEvent(QEvent*  event)
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
  QGraphicsWidget::ungrabKeyboardEvent(event);
}
void PythonQtShell_QGraphicsWidget::ungrabMouseEvent(QEvent*  event)
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
  QGraphicsWidget::ungrabMouseEvent(event);
}
void PythonQtShell_QGraphicsWidget::updateGeometry()
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
  QGraphicsWidget::updateGeometry();
}
bool  PythonQtShell_QGraphicsWidget::windowFrameEvent(QEvent*  e)
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
  return QGraphicsWidget::windowFrameEvent(e);
}
Qt::WindowFrameSection  PythonQtShell_QGraphicsWidget::windowFrameSectionAt(const QPointF&  pos) const
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
  return QGraphicsWidget::windowFrameSectionAt(pos);
}
QGraphicsWidget* PythonQtWrapper_QGraphicsWidget::new_QGraphicsWidget(QGraphicsItem*  parent, Qt::WindowFlags  wFlags)
{ 
return new PythonQtShell_QGraphicsWidget(parent, wFlags); }

QList<QAction* >  PythonQtWrapper_QGraphicsWidget::actions(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->actions());
}

void PythonQtWrapper_QGraphicsWidget::addAction(QGraphicsWidget* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->addAction(action));
}

void PythonQtWrapper_QGraphicsWidget::addActions(QGraphicsWidget* theWrappedObject, QList<QAction* >  actions)
{
  ( theWrappedObject->addActions(actions));
}

void PythonQtWrapper_QGraphicsWidget::adjustSize(QGraphicsWidget* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

bool  PythonQtWrapper_QGraphicsWidget::autoFillBackground(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->autoFillBackground());
}

QRectF  PythonQtWrapper_QGraphicsWidget::boundingRect(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

void PythonQtWrapper_QGraphicsWidget::changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_changeEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_closeEvent(event));
}

bool  PythonQtWrapper_QGraphicsWidget::event(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QGraphicsWidget::focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

Qt::FocusPolicy  PythonQtWrapper_QGraphicsWidget::focusPolicy(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->focusPolicy());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsWidget::focusWidget(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->focusWidget());
}

QFont  PythonQtWrapper_QGraphicsWidget::font(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

void PythonQtWrapper_QGraphicsWidget::getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_getContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( theWrappedObject->getWindowFrameMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_grabKeyboardEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_grabMouseEvent(event));
}

int  PythonQtWrapper_QGraphicsWidget::grabShortcut(QGraphicsWidget* theWrappedObject, const QKeySequence&  sequence, Qt::ShortcutContext  context)
{
  return ( theWrappedObject->grabShortcut(sequence, context));
}

void PythonQtWrapper_QGraphicsWidget::hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_hideEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_initStyleOption(option));
}

void PythonQtWrapper_QGraphicsWidget::insertAction(QGraphicsWidget* theWrappedObject, QAction*  before, QAction*  action)
{
  ( theWrappedObject->insertAction(before, action));
}

void PythonQtWrapper_QGraphicsWidget::insertActions(QGraphicsWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions)
{
  ( theWrappedObject->insertActions(before, actions));
}

bool  PythonQtWrapper_QGraphicsWidget::isActiveWindow(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->isActiveWindow());
}

QGraphicsLayout*  PythonQtWrapper_QGraphicsWidget::layout(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->layout());
}

Qt::LayoutDirection  PythonQtWrapper_QGraphicsWidget::layoutDirection(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->layoutDirection());
}

void PythonQtWrapper_QGraphicsWidget::moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_moveEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsWidget::paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_paintWindowFrame(painter, option, widget));
}

QPalette  PythonQtWrapper_QGraphicsWidget::palette(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->palette());
}

void PythonQtWrapper_QGraphicsWidget::polishEvent(QGraphicsWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_polishEvent());
}

QVariant  PythonQtWrapper_QGraphicsWidget::propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_propertyChange(propertyName, value));
}

QRectF  PythonQtWrapper_QGraphicsWidget::rect(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QGraphicsWidget::releaseShortcut(QGraphicsWidget* theWrappedObject, int  id)
{
  ( theWrappedObject->releaseShortcut(id));
}

void PythonQtWrapper_QGraphicsWidget::removeAction(QGraphicsWidget* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->removeAction(action));
}

void PythonQtWrapper_QGraphicsWidget::resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->resize(size));
}

void PythonQtWrapper_QGraphicsWidget::resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->resize(w, h));
}

void PythonQtWrapper_QGraphicsWidget::resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on)
{
  ( theWrappedObject->setAttribute(attribute, on));
}

void PythonQtWrapper_QGraphicsWidget::setAutoFillBackground(QGraphicsWidget* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAutoFillBackground(enabled));
}

void PythonQtWrapper_QGraphicsWidget::setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
  ( theWrappedObject->setContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy)
{
  ( theWrappedObject->setFocusPolicy(policy));
}

void PythonQtWrapper_QGraphicsWidget::setFont(QGraphicsWidget* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsWidget::setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_setGeometry(rect));
}

void PythonQtWrapper_QGraphicsWidget::setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setGeometry(x, y, w, h));
}

void PythonQtWrapper_QGraphicsWidget::setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout)
{
  ( theWrappedObject->setLayout(layout));
}

void PythonQtWrapper_QGraphicsWidget::setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction)
{
  ( theWrappedObject->setLayoutDirection(direction));
}

void PythonQtWrapper_QGraphicsWidget::setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette)
{
  ( theWrappedObject->setPalette(palette));
}

void PythonQtWrapper_QGraphicsWidget::setShortcutAutoRepeat(QGraphicsWidget* theWrappedObject, int  id, bool  enabled)
{
  ( theWrappedObject->setShortcutAutoRepeat(id, enabled));
}

void PythonQtWrapper_QGraphicsWidget::setShortcutEnabled(QGraphicsWidget* theWrappedObject, int  id, bool  enabled)
{
  ( theWrappedObject->setShortcutEnabled(id, enabled));
}

void PythonQtWrapper_QGraphicsWidget::setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style)
{
  ( theWrappedObject->setStyle(style));
}

void PythonQtWrapper_QGraphicsWidget::static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second)
{
  (QGraphicsWidget::setTabOrder(first, second));
}

void PythonQtWrapper_QGraphicsWidget::setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags)
{
  ( theWrappedObject->setWindowFlags(wFlags));
}

void PythonQtWrapper_QGraphicsWidget::setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
  ( theWrappedObject->setWindowFrameMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setWindowTitle(title));
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::shape(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

void PythonQtWrapper_QGraphicsWidget::showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_showEvent(event));
}

QSizeF  PythonQtWrapper_QGraphicsWidget::size(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QSizeF  PythonQtWrapper_QGraphicsWidget::sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_sizeHint(which, constraint));
}

QStyle*  PythonQtWrapper_QGraphicsWidget::style(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

bool  PythonQtWrapper_QGraphicsWidget::testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const
{
  return ( theWrappedObject->testAttribute(attribute));
}

int  PythonQtWrapper_QGraphicsWidget::type(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QGraphicsWidget::ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_ungrabKeyboardEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_ungrabMouseEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::unsetLayoutDirection(QGraphicsWidget* theWrappedObject)
{
  ( theWrappedObject->unsetLayoutDirection());
}

void PythonQtWrapper_QGraphicsWidget::unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject)
{
  ( theWrappedObject->unsetWindowFrameMargins());
}

void PythonQtWrapper_QGraphicsWidget::updateGeometry(QGraphicsWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_updateGeometry());
}

Qt::WindowFlags  PythonQtWrapper_QGraphicsWidget::windowFlags(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFlags());
}

bool  PythonQtWrapper_QGraphicsWidget::windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_windowFrameEvent(e));
}

QRectF  PythonQtWrapper_QGraphicsWidget::windowFrameGeometry(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFrameGeometry());
}

QRectF  PythonQtWrapper_QGraphicsWidget::windowFrameRect(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFrameRect());
}

Qt::WindowFrameSection  PythonQtWrapper_QGraphicsWidget::windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_windowFrameSectionAt(pos));
}

QString  PythonQtWrapper_QGraphicsWidget::windowTitle(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowTitle());
}

Qt::WindowType  PythonQtWrapper_QGraphicsWidget::windowType(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowType());
}



PythonQtShell_QGridLayout::~PythonQtShell_QGridLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGridLayout::addItem(QLayoutItem*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "addItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QLayoutItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGridLayout::addItem(arg__1);
}
void PythonQtShell_QGridLayout::childEvent(QChildEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGridLayout::childEvent(e);
}
QSizePolicy::ControlTypes  PythonQtShell_QGridLayout::controlTypes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "controlTypes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSizePolicy::ControlTypes"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSizePolicy::ControlTypes returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("controlTypes", methodInfo, result);
        } else {
          returnValue = *((QSizePolicy::ControlTypes*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGridLayout::controlTypes();
}
int  PythonQtShell_QGridLayout::count() const
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
  return QGridLayout::count();
}
void PythonQtShell_QGridLayout::customEvent(QEvent*  arg__1)
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
  QGridLayout::customEvent(arg__1);
}
bool  PythonQtShell_QGridLayout::event(QEvent*  arg__1)
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
  return QGridLayout::event(arg__1);
}
bool  PythonQtShell_QGridLayout::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGridLayout::eventFilter(arg__1, arg__2);
}
Qt::Orientations  PythonQtShell_QGridLayout::expandingDirections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "expandingDirections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::Orientations"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::Orientations returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("expandingDirections", methodInfo, result);
        } else {
          returnValue = *((Qt::Orientations*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGridLayout::expandingDirections();
}
QRect  PythonQtShell_QGridLayout::geometry() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "geometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRect"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRect returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("geometry", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGridLayout::geometry();
}
int  PythonQtShell_QGridLayout::indexOf(QWidget*  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexOf");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexOf", methodInfo, result);
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
  return QGridLayout::indexOf(arg__1);
}
void PythonQtShell_QGridLayout::invalidate()
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
  QGridLayout::invalidate();
}
bool  PythonQtShell_QGridLayout::isEmpty() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isEmpty");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
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
  return QGridLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QGridLayout::itemAt(int  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
        } else {
          returnValue = *((QLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGridLayout::itemAt(index);
}
QLayout*  PythonQtShell_QGridLayout::layout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "layout");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QLayout*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLayout* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("layout", methodInfo, result);
        } else {
          returnValue = *((QLayout**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGridLayout::layout();
}
QSize  PythonQtShell_QGridLayout::maximumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "maximumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("maximumSize", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGridLayout::maximumSize();
}
QSize  PythonQtShell_QGridLayout::minimumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minimumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("minimumSize", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGridLayout::minimumSize();
}
void PythonQtShell_QGridLayout::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRect&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGridLayout::setGeometry(arg__1);
}
QLayoutItem*  PythonQtShell_QGridLayout::takeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "takeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("takeAt", methodInfo, result);
        } else {
          returnValue = *((QLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGridLayout::takeAt(index);
}
void PythonQtShell_QGridLayout::timerEvent(QTimerEvent*  arg__1)
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
  QGridLayout::timerEvent(arg__1);
}
QGridLayout* PythonQtWrapper_QGridLayout::new_QGridLayout()
{ 
return new PythonQtShell_QGridLayout(); }

QGridLayout* PythonQtWrapper_QGridLayout::new_QGridLayout(QWidget*  parent)
{ 
return new PythonQtShell_QGridLayout(parent); }

void PythonQtWrapper_QGridLayout::addItem(QGridLayout* theWrappedObject, QLayoutItem*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_addItem(arg__1));
}

void PythonQtWrapper_QGridLayout::addItem(QGridLayout* theWrappedObject, QLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
  ( theWrappedObject->addItem(item, row, column, rowSpan, columnSpan, arg__6));
}

void PythonQtWrapper_QGridLayout::addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, Qt::Alignment  arg__4)
{
  ( theWrappedObject->addLayout(arg__1, row, column, arg__4));
}

void PythonQtWrapper_QGridLayout::addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
  ( theWrappedObject->addLayout(arg__1, row, column, rowSpan, columnSpan, arg__6));
}

void PythonQtWrapper_QGridLayout::addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, Qt::Alignment  arg__4)
{
  ( theWrappedObject->addWidget(arg__1, row, column, arg__4));
}

void PythonQtWrapper_QGridLayout::addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
  ( theWrappedObject->addWidget(arg__1, row, column, rowSpan, columnSpan, arg__6));
}

QRect  PythonQtWrapper_QGridLayout::cellRect(QGridLayout* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->cellRect(row, column));
}

int  PythonQtWrapper_QGridLayout::columnCount(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->columnCount());
}

int  PythonQtWrapper_QGridLayout::columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnMinimumWidth(column));
}

int  PythonQtWrapper_QGridLayout::columnStretch(QGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnStretch(column));
}

int  PythonQtWrapper_QGridLayout::count(QGridLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_count());
}

Qt::Orientations  PythonQtWrapper_QGridLayout::expandingDirections(QGridLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_expandingDirections());
}

void PythonQtWrapper_QGridLayout::getItemPosition(QGridLayout* theWrappedObject, int  idx, int*  row, int*  column, int*  rowSpan, int*  columnSpan) const
{
  ( theWrappedObject->getItemPosition(idx, row, column, rowSpan, columnSpan));
}

bool  PythonQtWrapper_QGridLayout::hasHeightForWidth(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->hasHeightForWidth());
}

int  PythonQtWrapper_QGridLayout::heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->heightForWidth(arg__1));
}

int  PythonQtWrapper_QGridLayout::horizontalSpacing(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->horizontalSpacing());
}

void PythonQtWrapper_QGridLayout::invalidate(QGridLayout* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_invalidate());
}

QLayoutItem*  PythonQtWrapper_QGridLayout::itemAt(QGridLayout* theWrappedObject, int  index) const
{
  return ( ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_itemAt(index));
}

QLayoutItem*  PythonQtWrapper_QGridLayout::itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->itemAtPosition(row, column));
}

QSize  PythonQtWrapper_QGridLayout::maximumSize(QGridLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_maximumSize());
}

int  PythonQtWrapper_QGridLayout::minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->minimumHeightForWidth(arg__1));
}

QSize  PythonQtWrapper_QGridLayout::minimumSize(QGridLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_minimumSize());
}

Qt::Corner  PythonQtWrapper_QGridLayout::originCorner(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->originCorner());
}

int  PythonQtWrapper_QGridLayout::rowCount(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->rowCount());
}

int  PythonQtWrapper_QGridLayout::rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowMinimumHeight(row));
}

int  PythonQtWrapper_QGridLayout::rowStretch(QGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowStretch(row));
}

void PythonQtWrapper_QGridLayout::setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize)
{
  ( theWrappedObject->setColumnMinimumWidth(column, minSize));
}

void PythonQtWrapper_QGridLayout::setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch)
{
  ( theWrappedObject->setColumnStretch(column, stretch));
}

void PythonQtWrapper_QGridLayout::setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient)
{
  ( theWrappedObject->setDefaultPositioning(n, orient));
}

void PythonQtWrapper_QGridLayout::setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1)
{
  ( ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_setGeometry(arg__1));
}

void PythonQtWrapper_QGridLayout::setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing)
{
  ( theWrappedObject->setHorizontalSpacing(spacing));
}

void PythonQtWrapper_QGridLayout::setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1)
{
  ( theWrappedObject->setOriginCorner(arg__1));
}

void PythonQtWrapper_QGridLayout::setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize)
{
  ( theWrappedObject->setRowMinimumHeight(row, minSize));
}

void PythonQtWrapper_QGridLayout::setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch)
{
  ( theWrappedObject->setRowStretch(row, stretch));
}

void PythonQtWrapper_QGridLayout::setSpacing(QGridLayout* theWrappedObject, int  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

void PythonQtWrapper_QGridLayout::setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing)
{
  ( theWrappedObject->setVerticalSpacing(spacing));
}

QSize  PythonQtWrapper_QGridLayout::sizeHint(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

int  PythonQtWrapper_QGridLayout::spacing(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

QLayoutItem*  PythonQtWrapper_QGridLayout::takeAt(QGridLayout* theWrappedObject, int  index)
{
  return ( ((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->promoted_takeAt(index));
}

int  PythonQtWrapper_QGridLayout::verticalSpacing(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->verticalSpacing());
}



PythonQtShell_QGroupBox::~PythonQtShell_QGroupBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGroupBox::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::actionEvent(arg__1);
}
void PythonQtShell_QGroupBox::changeEvent(QEvent*  event)
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
  QGroupBox::changeEvent(event);
}
void PythonQtShell_QGroupBox::childEvent(QChildEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::childEvent(event);
}
void PythonQtShell_QGroupBox::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::closeEvent(arg__1);
}
void PythonQtShell_QGroupBox::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::contextMenuEvent(arg__1);
}
void PythonQtShell_QGroupBox::customEvent(QEvent*  arg__1)
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
  QGroupBox::customEvent(arg__1);
}
int  PythonQtShell_QGroupBox::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
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
  return QGroupBox::devType();
}
void PythonQtShell_QGroupBox::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::dragEnterEvent(arg__1);
}
void PythonQtShell_QGroupBox::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::dragLeaveEvent(arg__1);
}
void PythonQtShell_QGroupBox::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::dragMoveEvent(arg__1);
}
void PythonQtShell_QGroupBox::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::dropEvent(arg__1);
}
void PythonQtShell_QGroupBox::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
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
  QGroupBox::enterEvent(arg__1);
}
bool  PythonQtShell_QGroupBox::event(QEvent*  event)
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
  return QGroupBox::event(event);
}
bool  PythonQtShell_QGroupBox::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGroupBox::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGroupBox::focusInEvent(QFocusEvent*  event)
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
  QGroupBox::focusInEvent(event);
}
bool  PythonQtShell_QGroupBox::focusNextPrevChild(bool  next)
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
  return QGroupBox::focusNextPrevChild(next);
}
void PythonQtShell_QGroupBox::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::focusOutEvent(arg__1);
}
bool  PythonQtShell_QGroupBox::hasHeightForWidth() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasHeightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasHeightForWidth", methodInfo, result);
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
  return QGroupBox::hasHeightForWidth();
}
int  PythonQtShell_QGroupBox::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
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
  return QGroupBox::heightForWidth(arg__1);
}
void PythonQtShell_QGroupBox::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::hideEvent(arg__1);
}
void PythonQtShell_QGroupBox::initPainter(QPainter*  painter) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "initPainter");
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
  QGroupBox::initPainter(painter);
}
void PythonQtShell_QGroupBox::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QGroupBox::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QGroupBox::inputMethodQuery(arg__1);
}
void PythonQtShell_QGroupBox::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::keyPressEvent(arg__1);
}
void PythonQtShell_QGroupBox::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::keyReleaseEvent(arg__1);
}
void PythonQtShell_QGroupBox::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
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
  QGroupBox::leaveEvent(arg__1);
}
int  PythonQtShell_QGroupBox::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
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
  return QGroupBox::metric(arg__1);
}
void PythonQtShell_QGroupBox::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QGroupBox::mouseMoveEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::mouseMoveEvent(event);
}
void PythonQtShell_QGroupBox::mousePressEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::mousePressEvent(event);
}
void PythonQtShell_QGroupBox::mouseReleaseEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::mouseReleaseEvent(event);
}
void PythonQtShell_QGroupBox::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::moveEvent(arg__1);
}
bool  PythonQtShell_QGroupBox::nativeEvent(const QByteArray&  eventType, void*  message, long*  result)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nativeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&eventType, (void*)&message, (void*)&result};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nativeEvent", methodInfo, result);
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
  return QGroupBox::nativeEvent(eventType, message, result);
}
QPaintEngine*  PythonQtShell_QGroupBox::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGroupBox::paintEngine();
}
void PythonQtShell_QGroupBox::paintEvent(QPaintEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::paintEvent(event);
}
QPaintDevice*  PythonQtShell_QGroupBox::redirected(QPoint*  offset) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "redirected");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue;
    void* args[2] = {NULL, (void*)&offset};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
        } else {
          returnValue = *((QPaintDevice**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGroupBox::redirected(offset);
}
void PythonQtShell_QGroupBox::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::resizeEvent(event);
}
QPainter*  PythonQtShell_QGroupBox::sharedPainter() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sharedPainter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
        } else {
          returnValue = *((QPainter**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGroupBox::sharedPainter();
}
void PythonQtShell_QGroupBox::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::showEvent(arg__1);
}
QSize  PythonQtShell_QGroupBox::sizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("getSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGroupBox::sizeHint();
}
void PythonQtShell_QGroupBox::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::tabletEvent(arg__1);
}
void PythonQtShell_QGroupBox::timerEvent(QTimerEvent*  arg__1)
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
  QGroupBox::timerEvent(arg__1);
}
void PythonQtShell_QGroupBox::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGroupBox::wheelEvent(arg__1);
}
QGroupBox* PythonQtWrapper_QGroupBox::new_QGroupBox(QWidget*  parent)
{ 
return new PythonQtShell_QGroupBox(parent); }

QGroupBox* PythonQtWrapper_QGroupBox::new_QGroupBox(const QString&  title, QWidget*  parent)
{ 
return new PythonQtShell_QGroupBox(title, parent); }

Qt::Alignment  PythonQtWrapper_QGroupBox::alignment(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

void PythonQtWrapper_QGroupBox::changeEvent(QGroupBox* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_changeEvent(event));
}

void PythonQtWrapper_QGroupBox::childEvent(QGroupBox* theWrappedObject, QChildEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_childEvent(event));
}

bool  PythonQtWrapper_QGroupBox::event(QGroupBox* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_event(event));
}

void PythonQtWrapper_QGroupBox::focusInEvent(QGroupBox* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_focusInEvent(event));
}

bool  PythonQtWrapper_QGroupBox::isCheckable(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->isCheckable());
}

bool  PythonQtWrapper_QGroupBox::isChecked(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->isChecked());
}

bool  PythonQtWrapper_QGroupBox::isFlat(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->isFlat());
}

QSize  PythonQtWrapper_QGroupBox::minimumSizeHint(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QGroupBox::mouseMoveEvent(QGroupBox* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGroupBox::mousePressEvent(QGroupBox* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGroupBox::mouseReleaseEvent(QGroupBox* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

void PythonQtWrapper_QGroupBox::paintEvent(QGroupBox* theWrappedObject, QPaintEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_paintEvent(event));
}

void PythonQtWrapper_QGroupBox::resizeEvent(QGroupBox* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QGroupBox::setAlignment(QGroupBox* theWrappedObject, int  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QGroupBox::setCheckable(QGroupBox* theWrappedObject, bool  checkable)
{
  ( theWrappedObject->setCheckable(checkable));
}

void PythonQtWrapper_QGroupBox::setFlat(QGroupBox* theWrappedObject, bool  flat)
{
  ( theWrappedObject->setFlat(flat));
}

void PythonQtWrapper_QGroupBox::setTitle(QGroupBox* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setTitle(title));
}

QString  PythonQtWrapper_QGroupBox::title(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->title());
}



PythonQtShell_QGuiApplication::~PythonQtShell_QGuiApplication() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGuiApplication::childEvent(QChildEvent*  arg__1)
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
  QGuiApplication::childEvent(arg__1);
}
void PythonQtShell_QGuiApplication::customEvent(QEvent*  arg__1)
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
  QGuiApplication::customEvent(arg__1);
}
bool  PythonQtShell_QGuiApplication::event(QEvent*  arg__1)
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
  return QGuiApplication::event(arg__1);
}
bool  PythonQtShell_QGuiApplication::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGuiApplication::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QGuiApplication::notify(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "notify");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("notify", methodInfo, result);
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
  return QGuiApplication::notify(arg__1, arg__2);
}
void PythonQtShell_QGuiApplication::timerEvent(QTimerEvent*  arg__1)
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
  QGuiApplication::timerEvent(arg__1);
}
QGuiApplication* PythonQtWrapper_QGuiApplication::new_QGuiApplication(int&  argc, char**  argv)
{ 
return new PythonQtShell_QGuiApplication(argc, argv); }

QString  PythonQtWrapper_QGuiApplication::static_QGuiApplication_applicationDisplayName()
{
  return (QGuiApplication::applicationDisplayName());
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_changeOverrideCursor(const QCursor&  arg__1)
{
  (QGuiApplication::changeOverrideCursor(arg__1));
}

QClipboard*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_clipboard()
{
  return (QGuiApplication::clipboard());
}

bool  PythonQtWrapper_QGuiApplication::static_QGuiApplication_desktopSettingsAware()
{
  return (QGuiApplication::desktopSettingsAware());
}

qreal  PythonQtWrapper_QGuiApplication::devicePixelRatio(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->devicePixelRatio());
}

bool  PythonQtWrapper_QGuiApplication::event(QGuiApplication* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QGuiApplication*)theWrappedObject)->promoted_event(arg__1));
}

int  PythonQtWrapper_QGuiApplication::static_QGuiApplication_exec()
{
  return (QGuiApplication::exec());
}

QObject*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_focusObject()
{
  return (QGuiApplication::focusObject());
}

QFont  PythonQtWrapper_QGuiApplication::static_QGuiApplication_font()
{
  return (QGuiApplication::font());
}

bool  PythonQtWrapper_QGuiApplication::static_QGuiApplication_isLeftToRight()
{
  return (QGuiApplication::isLeftToRight());
}

bool  PythonQtWrapper_QGuiApplication::static_QGuiApplication_isRightToLeft()
{
  return (QGuiApplication::isRightToLeft());
}

bool  PythonQtWrapper_QGuiApplication::isSavingSession(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->isSavingSession());
}

bool  PythonQtWrapper_QGuiApplication::isSessionRestored(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->isSessionRestored());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGuiApplication::static_QGuiApplication_keyboardModifiers()
{
  return (QGuiApplication::keyboardModifiers());
}

Qt::LayoutDirection  PythonQtWrapper_QGuiApplication::static_QGuiApplication_layoutDirection()
{
  return (QGuiApplication::layoutDirection());
}

Qt::MouseButtons  PythonQtWrapper_QGuiApplication::static_QGuiApplication_mouseButtons()
{
  return (QGuiApplication::mouseButtons());
}

bool  PythonQtWrapper_QGuiApplication::notify(QGuiApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
  return ( ((PythonQtPublicPromoter_QGuiApplication*)theWrappedObject)->promoted_notify(arg__1, arg__2));
}

QCursor*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_overrideCursor()
{
  return (QGuiApplication::overrideCursor());
}

QPalette  PythonQtWrapper_QGuiApplication::static_QGuiApplication_palette()
{
  return (QGuiApplication::palette());
}

QString  PythonQtWrapper_QGuiApplication::static_QGuiApplication_platformName()
{
  return (QGuiApplication::platformName());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGuiApplication::static_QGuiApplication_queryKeyboardModifiers()
{
  return (QGuiApplication::queryKeyboardModifiers());
}

bool  PythonQtWrapper_QGuiApplication::static_QGuiApplication_quitOnLastWindowClosed()
{
  return (QGuiApplication::quitOnLastWindowClosed());
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_restoreOverrideCursor()
{
  (QGuiApplication::restoreOverrideCursor());
}

QString  PythonQtWrapper_QGuiApplication::sessionId(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->sessionId());
}

QString  PythonQtWrapper_QGuiApplication::sessionKey(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->sessionKey());
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setApplicationDisplayName(const QString&  name)
{
  (QGuiApplication::setApplicationDisplayName(name));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setDesktopSettingsAware(bool  on)
{
  (QGuiApplication::setDesktopSettingsAware(on));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setFont(const QFont&  arg__1)
{
  (QGuiApplication::setFont(arg__1));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setLayoutDirection(Qt::LayoutDirection  direction)
{
  (QGuiApplication::setLayoutDirection(direction));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setOverrideCursor(const QCursor&  arg__1)
{
  (QGuiApplication::setOverrideCursor(arg__1));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setPalette(const QPalette&  pal)
{
  (QGuiApplication::setPalette(pal));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setQuitOnLastWindowClosed(bool  quit)
{
  (QGuiApplication::setQuitOnLastWindowClosed(quit));
}



PythonQtShell_QHBoxLayout::~PythonQtShell_QHBoxLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHBoxLayout::addItem(QLayoutItem*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "addItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QLayoutItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHBoxLayout::addItem(arg__1);
}
void PythonQtShell_QHBoxLayout::childEvent(QChildEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHBoxLayout::childEvent(e);
}
QSizePolicy::ControlTypes  PythonQtShell_QHBoxLayout::controlTypes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "controlTypes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSizePolicy::ControlTypes"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSizePolicy::ControlTypes returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("controlTypes", methodInfo, result);
        } else {
          returnValue = *((QSizePolicy::ControlTypes*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHBoxLayout::controlTypes();
}
int  PythonQtShell_QHBoxLayout::count() const
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
  return QHBoxLayout::count();
}
void PythonQtShell_QHBoxLayout::customEvent(QEvent*  arg__1)
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
  QHBoxLayout::customEvent(arg__1);
}
bool  PythonQtShell_QHBoxLayout::event(QEvent*  arg__1)
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
  return QHBoxLayout::event(arg__1);
}
bool  PythonQtShell_QHBoxLayout::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QHBoxLayout::eventFilter(arg__1, arg__2);
}
Qt::Orientations  PythonQtShell_QHBoxLayout::expandingDirections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "expandingDirections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::Orientations"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::Orientations returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("expandingDirections", methodInfo, result);
        } else {
          returnValue = *((Qt::Orientations*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHBoxLayout::expandingDirections();
}
QRect  PythonQtShell_QHBoxLayout::geometry() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "geometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRect"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRect returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("geometry", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHBoxLayout::geometry();
}
int  PythonQtShell_QHBoxLayout::indexOf(QWidget*  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexOf");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexOf", methodInfo, result);
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
  return QHBoxLayout::indexOf(arg__1);
}
void PythonQtShell_QHBoxLayout::invalidate()
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
  QHBoxLayout::invalidate();
}
bool  PythonQtShell_QHBoxLayout::isEmpty() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isEmpty");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
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
  return QHBoxLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QHBoxLayout::itemAt(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
        } else {
          returnValue = *((QLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHBoxLayout::itemAt(arg__1);
}
QLayout*  PythonQtShell_QHBoxLayout::layout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "layout");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QLayout*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLayout* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("layout", methodInfo, result);
        } else {
          returnValue = *((QLayout**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHBoxLayout::layout();
}
QSize  PythonQtShell_QHBoxLayout::maximumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "maximumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("maximumSize", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHBoxLayout::maximumSize();
}
QSize  PythonQtShell_QHBoxLayout::minimumSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minimumSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("minimumSize", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHBoxLayout::minimumSize();
}
void PythonQtShell_QHBoxLayout::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRect&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHBoxLayout::setGeometry(arg__1);
}
QLayoutItem*  PythonQtShell_QHBoxLayout::takeAt(int  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "takeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("takeAt", methodInfo, result);
        } else {
          returnValue = *((QLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHBoxLayout::takeAt(arg__1);
}
void PythonQtShell_QHBoxLayout::timerEvent(QTimerEvent*  arg__1)
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
  QHBoxLayout::timerEvent(arg__1);
}
QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout()
{ 
return new PythonQtShell_QHBoxLayout(); }

QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout(QWidget*  parent)
{ 
return new PythonQtShell_QHBoxLayout(parent); }



PythonQtShell_QHeaderView::~PythonQtShell_QHeaderView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHeaderView::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::actionEvent(arg__1);
}
void PythonQtShell_QHeaderView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
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
  QHeaderView::changeEvent(arg__1);
}
void PythonQtShell_QHeaderView::childEvent(QChildEvent*  arg__1)
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
  QHeaderView::childEvent(arg__1);
}
void PythonQtShell_QHeaderView::closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*" , "QAbstractItemDelegate::EndEditHint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&editor, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::closeEditor(editor, hint);
}
void PythonQtShell_QHeaderView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::closeEvent(arg__1);
}
void PythonQtShell_QHeaderView::commitData(QWidget*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::commitData(editor);
}
void PythonQtShell_QHeaderView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::contextMenuEvent(arg__1);
}
void PythonQtShell_QHeaderView::currentChanged(const QModelIndex&  current, const QModelIndex&  old)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "currentChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&current, (void*)&old};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::currentChanged(current, old);
}
void PythonQtShell_QHeaderView::customEvent(QEvent*  arg__1)
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
  QHeaderView::customEvent(arg__1);
}
void PythonQtShell_QHeaderView::dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dataChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&" , "const QVector<int >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&topLeft, (void*)&bottomRight, (void*)&roles};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dataChanged(topLeft, bottomRight, roles);
}
int  PythonQtShell_QHeaderView::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
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
  return QHeaderView::devType();
}
void PythonQtShell_QHeaderView::doItemsLayout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doItemsLayout");
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
  QHeaderView::doItemsLayout();
}
void PythonQtShell_QHeaderView::dragEnterEvent(QDragEnterEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dragEnterEvent(event);
}
void PythonQtShell_QHeaderView::dragLeaveEvent(QDragLeaveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dragLeaveEvent(event);
}
void PythonQtShell_QHeaderView::dragMoveEvent(QDragMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dragMoveEvent(event);
}
void PythonQtShell_QHeaderView::dropEvent(QDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dropEvent(event);
}
bool  PythonQtShell_QHeaderView::edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "edit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "QAbstractItemView::EditTrigger" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&trigger, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("edit", methodInfo, result);
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
  return QHeaderView::edit(index, trigger, event);
}
void PythonQtShell_QHeaderView::editorDestroyed(QObject*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "editorDestroyed");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::editorDestroyed(editor);
}
void PythonQtShell_QHeaderView::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
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
  QHeaderView::enterEvent(arg__1);
}
bool  PythonQtShell_QHeaderView::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
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
  return QHeaderView::event(e);
}
bool  PythonQtShell_QHeaderView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QHeaderView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QHeaderView::focusInEvent(QFocusEvent*  event)
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
  QHeaderView::focusInEvent(event);
}
bool  PythonQtShell_QHeaderView::focusNextPrevChild(bool  next)
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
  return QHeaderView::focusNextPrevChild(next);
}
void PythonQtShell_QHeaderView::focusOutEvent(QFocusEvent*  event)
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
  QHeaderView::focusOutEvent(event);
}
bool  PythonQtShell_QHeaderView::hasHeightForWidth() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasHeightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasHeightForWidth", methodInfo, result);
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
  return QHeaderView::hasHeightForWidth();
}
int  PythonQtShell_QHeaderView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
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
  return QHeaderView::heightForWidth(arg__1);
}
void PythonQtShell_QHeaderView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::hideEvent(arg__1);
}
int  PythonQtShell_QHeaderView::horizontalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalOffset");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("horizontalOffset", methodInfo, result);
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
  return QHeaderView::horizontalOffset();
}
void PythonQtShell_QHeaderView::horizontalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::horizontalScrollbarAction(action);
}
void PythonQtShell_QHeaderView::horizontalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::horizontalScrollbarValueChanged(value);
}
QModelIndex  PythonQtShell_QHeaderView::indexAt(const QPoint&  p) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&p};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexAt", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::indexAt(p);
}
void PythonQtShell_QHeaderView::initPainter(QPainter*  painter) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "initPainter");
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
  QHeaderView::initPainter(painter);
}
void PythonQtShell_QHeaderView::inputMethodEvent(QInputMethodEvent*  event)
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
  QHeaderView::inputMethodEvent(event);
}
QVariant  PythonQtShell_QHeaderView::inputMethodQuery(Qt::InputMethodQuery  query) const
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
  return QHeaderView::inputMethodQuery(query);
}
bool  PythonQtShell_QHeaderView::isIndexHidden(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isIndexHidden");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isIndexHidden", methodInfo, result);
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
  return QHeaderView::isIndexHidden(index);
}
void PythonQtShell_QHeaderView::keyPressEvent(QKeyEvent*  event)
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
  QHeaderView::keyPressEvent(event);
}
void PythonQtShell_QHeaderView::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QHeaderView::keyboardSearch(const QString&  search)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyboardSearch");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&search};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::keyboardSearch(search);
}
void PythonQtShell_QHeaderView::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
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
  QHeaderView::leaveEvent(arg__1);
}
int  PythonQtShell_QHeaderView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
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
  return QHeaderView::metric(arg__1);
}
void PythonQtShell_QHeaderView::mouseDoubleClickEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::mouseDoubleClickEvent(e);
}
void PythonQtShell_QHeaderView::mouseMoveEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::mouseMoveEvent(e);
}
void PythonQtShell_QHeaderView::mousePressEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::mousePressEvent(e);
}
void PythonQtShell_QHeaderView::mouseReleaseEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::mouseReleaseEvent(e);
}
void PythonQtShell_QHeaderView::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::moveEvent(arg__1);
}
bool  PythonQtShell_QHeaderView::nativeEvent(const QByteArray&  eventType, void*  message, long*  result)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nativeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&eventType, (void*)&message, (void*)&result};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nativeEvent", methodInfo, result);
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
  return QHeaderView::nativeEvent(eventType, message, result);
}
QPaintEngine*  PythonQtShell_QHeaderView::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::paintEngine();
}
void PythonQtShell_QHeaderView::paintEvent(QPaintEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::paintEvent(e);
}
void PythonQtShell_QHeaderView::paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintSection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRect&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&rect, (void*)&logicalIndex};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::paintSection(painter, rect, logicalIndex);
}
QPaintDevice*  PythonQtShell_QHeaderView::redirected(QPoint*  offset) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "redirected");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue;
    void* args[2] = {NULL, (void*)&offset};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
        } else {
          returnValue = *((QPaintDevice**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::redirected(offset);
}
void PythonQtShell_QHeaderView::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
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
  QHeaderView::reset();
}
void PythonQtShell_QHeaderView::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::resizeEvent(event);
}
void PythonQtShell_QHeaderView::rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsAboutToBeRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::rowsAboutToBeRemoved(parent, start, end);
}
void PythonQtShell_QHeaderView::rowsInserted(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::rowsInserted(parent, start, end);
}
void PythonQtShell_QHeaderView::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::scrollContentsBy(dx, dy);
}
void PythonQtShell_QHeaderView::scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "QAbstractItemView::ScrollHint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&index, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::scrollTo(index, hint);
}
QSize  PythonQtShell_QHeaderView::sectionSizeFromContents(int  logicalIndex) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sectionSizeFromContents");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&logicalIndex};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sectionSizeFromContents", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::sectionSizeFromContents(logicalIndex);
}
void PythonQtShell_QHeaderView::selectAll()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectAll");
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
  QHeaderView::selectAll();
}
QList<QModelIndex >  PythonQtShell_QHeaderView::selectedIndexes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectedIndexes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QModelIndex >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QModelIndex > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectedIndexes", methodInfo, result);
        } else {
          returnValue = *((QList<QModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::selectedIndexes();
}
void PythonQtShell_QHeaderView::selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QItemSelection&" , "const QItemSelection&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&selected, (void*)&deselected};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::selectionChanged(selected, deselected);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QHeaderView::selectionCommand(const QModelIndex&  index, const QEvent*  event) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionCommand");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QItemSelectionModel::SelectionFlags" , "const QModelIndex&" , "const QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QItemSelectionModel::SelectionFlags returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectionCommand", methodInfo, result);
        } else {
          returnValue = *((QItemSelectionModel::SelectionFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::selectionCommand(index, event);
}
void PythonQtShell_QHeaderView::setModel(QAbstractItemModel*  model)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractItemModel*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&model};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::setModel(model);
}
void PythonQtShell_QHeaderView::setRootIndex(const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setRootIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::setRootIndex(index);
}
void PythonQtShell_QHeaderView::setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QRect&" , "QItemSelectionModel::SelectionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&rect, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::setSelection(rect, flags);
}
void PythonQtShell_QHeaderView::setSelectionModel(QItemSelectionModel*  selectionModel)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelectionModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QItemSelectionModel*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&selectionModel};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::setSelectionModel(selectionModel);
}
void PythonQtShell_QHeaderView::setupViewport(QWidget*  viewport)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setupViewport");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&viewport};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::setupViewport(viewport);
}
QPainter*  PythonQtShell_QHeaderView::sharedPainter() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sharedPainter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
        } else {
          returnValue = *((QPainter**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::sharedPainter();
}
void PythonQtShell_QHeaderView::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::showEvent(arg__1);
}
int  PythonQtShell_QHeaderView::sizeHintForColumn(int  column) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForColumn");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&column};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForColumn", methodInfo, result);
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
  return QHeaderView::sizeHintForColumn(column);
}
int  PythonQtShell_QHeaderView::sizeHintForRow(int  row) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&row};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForRow", methodInfo, result);
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
  return QHeaderView::sizeHintForRow(row);
}
void PythonQtShell_QHeaderView::startDrag(Qt::DropActions  supportedActions)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startDrag");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&supportedActions};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::startDrag(supportedActions);
}
void PythonQtShell_QHeaderView::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::tabletEvent(arg__1);
}
void PythonQtShell_QHeaderView::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::timerEvent(event);
}
void PythonQtShell_QHeaderView::updateEditorData()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorData");
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
  QHeaderView::updateEditorData();
}
void PythonQtShell_QHeaderView::updateEditorGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorGeometries");
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
  QHeaderView::updateEditorGeometries();
}
void PythonQtShell_QHeaderView::updateGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometries");
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
  QHeaderView::updateGeometries();
}
int  PythonQtShell_QHeaderView::verticalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalOffset");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("verticalOffset", methodInfo, result);
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
  return QHeaderView::verticalOffset();
}
void PythonQtShell_QHeaderView::verticalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::verticalScrollbarAction(action);
}
void PythonQtShell_QHeaderView::verticalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::verticalScrollbarValueChanged(value);
}
QStyleOptionViewItem  PythonQtShell_QHeaderView::viewOptions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewOptions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStyleOptionViewItem"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStyleOptionViewItem returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewOptions", methodInfo, result);
        } else {
          returnValue = *((QStyleOptionViewItem*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::viewOptions();
}
bool  PythonQtShell_QHeaderView::viewportEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("viewportEvent", methodInfo, result);
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
  return QHeaderView::viewportEvent(e);
}
QSize  PythonQtShell_QHeaderView::viewportSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewportSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::viewportSizeHint();
}
QRect  PythonQtShell_QHeaderView::visualRect(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRect" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRect returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("visualRect", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::visualRect(index);
}
QRegion  PythonQtShell_QHeaderView::visualRegionForSelection(const QItemSelection&  selection) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRegionForSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRegion" , "const QItemSelection&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRegion returnValue;
    void* args[2] = {NULL, (void*)&selection};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("visualRegionForSelection", methodInfo, result);
        } else {
          returnValue = *((QRegion*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::visualRegionForSelection(selection);
}
void PythonQtShell_QHeaderView::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::wheelEvent(arg__1);
}
QHeaderView* PythonQtWrapper_QHeaderView::new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent)
{ 
return new PythonQtShell_QHeaderView(orientation, parent); }

bool  PythonQtWrapper_QHeaderView::cascadingSectionResizes(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->cascadingSectionResizes());
}

int  PythonQtWrapper_QHeaderView::count(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

void PythonQtWrapper_QHeaderView::currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_currentChanged(current, old));
}

void PythonQtWrapper_QHeaderView::dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_dataChanged(topLeft, bottomRight, roles));
}

Qt::Alignment  PythonQtWrapper_QHeaderView::defaultAlignment(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->defaultAlignment());
}

int  PythonQtWrapper_QHeaderView::defaultSectionSize(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->defaultSectionSize());
}

void PythonQtWrapper_QHeaderView::doItemsLayout(QHeaderView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_doItemsLayout());
}

bool  PythonQtWrapper_QHeaderView::event(QHeaderView* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_event(e));
}

int  PythonQtWrapper_QHeaderView::hiddenSectionCount(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->hiddenSectionCount());
}

void PythonQtWrapper_QHeaderView::hideSection(QHeaderView* theWrappedObject, int  logicalIndex)
{
  ( theWrappedObject->hideSection(logicalIndex));
}

bool  PythonQtWrapper_QHeaderView::highlightSections(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->highlightSections());
}

int  PythonQtWrapper_QHeaderView::horizontalOffset(QHeaderView* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_horizontalOffset());
}

QModelIndex  PythonQtWrapper_QHeaderView::indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_indexAt(p));
}

bool  PythonQtWrapper_QHeaderView::isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_isIndexHidden(index));
}

bool  PythonQtWrapper_QHeaderView::isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->isSectionHidden(logicalIndex));
}

bool  PythonQtWrapper_QHeaderView::isSortIndicatorShown(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->isSortIndicatorShown());
}

int  PythonQtWrapper_QHeaderView::length(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

int  PythonQtWrapper_QHeaderView::logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const
{
  return ( theWrappedObject->logicalIndex(visualIndex));
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->logicalIndexAt(pos));
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, int  position) const
{
  return ( theWrappedObject->logicalIndexAt(position));
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->logicalIndexAt(x, y));
}

int  PythonQtWrapper_QHeaderView::minimumSectionSize(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->minimumSectionSize());
}

void PythonQtWrapper_QHeaderView::mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_mouseDoubleClickEvent(e));
}

void PythonQtWrapper_QHeaderView::mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_mouseMoveEvent(e));
}

void PythonQtWrapper_QHeaderView::mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_mousePressEvent(e));
}

void PythonQtWrapper_QHeaderView::mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_mouseReleaseEvent(e));
}

void PythonQtWrapper_QHeaderView::moveSection(QHeaderView* theWrappedObject, int  from, int  to)
{
  ( theWrappedObject->moveSection(from, to));
}

int  PythonQtWrapper_QHeaderView::offset(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

Qt::Orientation  PythonQtWrapper_QHeaderView::orientation(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QHeaderView::paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_paintEvent(e));
}

void PythonQtWrapper_QHeaderView::paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_paintSection(painter, rect, logicalIndex));
}

void PythonQtWrapper_QHeaderView::reset(QHeaderView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_reset());
}

void PythonQtWrapper_QHeaderView::resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size)
{
  ( theWrappedObject->resizeSection(logicalIndex, size));
}

void PythonQtWrapper_QHeaderView::resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode)
{
  ( theWrappedObject->resizeSections(mode));
}

bool  PythonQtWrapper_QHeaderView::restoreState(QHeaderView* theWrappedObject, const QByteArray&  state)
{
  return ( theWrappedObject->restoreState(state));
}

void PythonQtWrapper_QHeaderView::rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_rowsInserted(parent, start, end));
}

QByteArray  PythonQtWrapper_QHeaderView::saveState(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->saveState());
}

void PythonQtWrapper_QHeaderView::scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QHeaderView::scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_scrollTo(index, hint));
}

int  PythonQtWrapper_QHeaderView::sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionPosition(logicalIndex));
}

QHeaderView::ResizeMode  PythonQtWrapper_QHeaderView::sectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionResizeMode(logicalIndex));
}

int  PythonQtWrapper_QHeaderView::sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionSize(logicalIndex));
}

QSize  PythonQtWrapper_QHeaderView::sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_sectionSizeFromContents(logicalIndex));
}

int  PythonQtWrapper_QHeaderView::sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionSizeHint(logicalIndex));
}

int  PythonQtWrapper_QHeaderView::sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionViewportPosition(logicalIndex));
}

bool  PythonQtWrapper_QHeaderView::sectionsClickable(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sectionsClickable());
}

bool  PythonQtWrapper_QHeaderView::sectionsHidden(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sectionsHidden());
}

bool  PythonQtWrapper_QHeaderView::sectionsMovable(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sectionsMovable());
}

bool  PythonQtWrapper_QHeaderView::sectionsMoved(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sectionsMoved());
}

void PythonQtWrapper_QHeaderView::setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setCascadingSectionResizes(enable));
}

void PythonQtWrapper_QHeaderView::setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setDefaultAlignment(alignment));
}

void PythonQtWrapper_QHeaderView::setDefaultSectionSize(QHeaderView* theWrappedObject, int  size)
{
  ( theWrappedObject->setDefaultSectionSize(size));
}

void PythonQtWrapper_QHeaderView::setHighlightSections(QHeaderView* theWrappedObject, bool  highlight)
{
  ( theWrappedObject->setHighlightSections(highlight));
}

void PythonQtWrapper_QHeaderView::setMinimumSectionSize(QHeaderView* theWrappedObject, int  size)
{
  ( theWrappedObject->setMinimumSectionSize(size));
}

void PythonQtWrapper_QHeaderView::setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_setModel(model));
}

void PythonQtWrapper_QHeaderView::setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide)
{
  ( theWrappedObject->setSectionHidden(logicalIndex, hide));
}

void PythonQtWrapper_QHeaderView::setSectionResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode)
{
  ( theWrappedObject->setSectionResizeMode(mode));
}

void PythonQtWrapper_QHeaderView::setSectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode)
{
  ( theWrappedObject->setSectionResizeMode(logicalIndex, mode));
}

void PythonQtWrapper_QHeaderView::setSectionsClickable(QHeaderView* theWrappedObject, bool  clickable)
{
  ( theWrappedObject->setSectionsClickable(clickable));
}

void PythonQtWrapper_QHeaderView::setSectionsMovable(QHeaderView* theWrappedObject, bool  movable)
{
  ( theWrappedObject->setSectionsMovable(movable));
}

void PythonQtWrapper_QHeaderView::setSelection(QHeaderView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  flags)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_setSelection(rect, flags));
}

void PythonQtWrapper_QHeaderView::setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order)
{
  ( theWrappedObject->setSortIndicator(logicalIndex, order));
}

void PythonQtWrapper_QHeaderView::setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show)
{
  ( theWrappedObject->setSortIndicatorShown(show));
}

void PythonQtWrapper_QHeaderView::setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch)
{
  ( theWrappedObject->setStretchLastSection(stretch));
}

void PythonQtWrapper_QHeaderView::showSection(QHeaderView* theWrappedObject, int  logicalIndex)
{
  ( theWrappedObject->showSection(logicalIndex));
}

QSize  PythonQtWrapper_QHeaderView::sizeHint(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

Qt::SortOrder  PythonQtWrapper_QHeaderView::sortIndicatorOrder(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sortIndicatorOrder());
}

int  PythonQtWrapper_QHeaderView::sortIndicatorSection(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sortIndicatorSection());
}

bool  PythonQtWrapper_QHeaderView::stretchLastSection(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->stretchLastSection());
}

int  PythonQtWrapper_QHeaderView::stretchSectionCount(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->stretchSectionCount());
}

void PythonQtWrapper_QHeaderView::swapSections(QHeaderView* theWrappedObject, int  first, int  second)
{
  ( theWrappedObject->swapSections(first, second));
}

void PythonQtWrapper_QHeaderView::updateGeometries(QHeaderView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_updateGeometries());
}

int  PythonQtWrapper_QHeaderView::verticalOffset(QHeaderView* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_verticalOffset());
}

bool  PythonQtWrapper_QHeaderView::viewportEvent(QHeaderView* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_viewportEvent(e));
}

int  PythonQtWrapper_QHeaderView::visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->visualIndex(logicalIndex));
}

int  PythonQtWrapper_QHeaderView::visualIndexAt(QHeaderView* theWrappedObject, int  position) const
{
  return ( theWrappedObject->visualIndexAt(position));
}

QRect  PythonQtWrapper_QHeaderView::visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_visualRect(index));
}

QRegion  PythonQtWrapper_QHeaderView::visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_visualRegionForSelection(selection));
}



QHelpEvent* PythonQtWrapper_QHelpEvent::new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos)
{ 
return new QHelpEvent(type, pos, globalPos); }

const QPoint*  PythonQtWrapper_QHelpEvent::globalPos(QHelpEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPos());
}

int  PythonQtWrapper_QHelpEvent::globalX(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

int  PythonQtWrapper_QHelpEvent::globalY(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

const QPoint*  PythonQtWrapper_QHelpEvent::pos(QHelpEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}

int  PythonQtWrapper_QHelpEvent::x(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QHelpEvent::y(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



QHideEvent* PythonQtWrapper_QHideEvent::new_QHideEvent()
{ 
return new QHideEvent(); }



PythonQtShell_QHoverEvent::~PythonQtShell_QHoverEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QHoverEvent* PythonQtWrapper_QHoverEvent::new_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QHoverEvent(type, pos, oldPos, modifiers); }

QPoint  PythonQtWrapper_QHoverEvent::oldPos(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldPos());
}

const QPointF*  PythonQtWrapper_QHoverEvent::oldPosF(QHoverEvent* theWrappedObject) const
{
  return &( theWrappedObject->oldPosF());
}

QPoint  PythonQtWrapper_QHoverEvent::pos(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

const QPointF*  PythonQtWrapper_QHoverEvent::posF(QHoverEvent* theWrappedObject) const
{
  return &( theWrappedObject->posF());
}



QIconDragEvent* PythonQtWrapper_QIconDragEvent::new_QIconDragEvent()
{ 
return new QIconDragEvent(); }



PythonQtShell_QImageIOHandler::~PythonQtShell_QImageIOHandler() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QImageIOHandler::canRead() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canRead");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canRead", methodInfo, result);
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
  return bool();
}
int  PythonQtShell_QImageIOHandler::currentImageNumber() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "currentImageNumber");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("currentImageNumber", methodInfo, result);
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
  return QImageIOHandler::currentImageNumber();
}
QRect  PythonQtShell_QImageIOHandler::currentImageRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "currentImageRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRect"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRect returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("currentImageRect", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QImageIOHandler::currentImageRect();
}
int  PythonQtShell_QImageIOHandler::imageCount() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "imageCount");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("imageCount", methodInfo, result);
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
  return QImageIOHandler::imageCount();
}
bool  PythonQtShell_QImageIOHandler::jumpToImage(int  imageNumber)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "jumpToImage");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&imageNumber};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("jumpToImage", methodInfo, result);
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
  return QImageIOHandler::jumpToImage(imageNumber);
}
bool  PythonQtShell_QImageIOHandler::jumpToNextImage()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "jumpToNextImage");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("jumpToNextImage", methodInfo, result);
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
  return QImageIOHandler::jumpToNextImage();
}
int  PythonQtShell_QImageIOHandler::loopCount() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "loopCount");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("loopCount", methodInfo, result);
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
  return QImageIOHandler::loopCount();
}
QByteArray  PythonQtShell_QImageIOHandler::name() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "name");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QByteArray"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QByteArray returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("name", methodInfo, result);
        } else {
          returnValue = *((QByteArray*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QImageIOHandler::name();
}
int  PythonQtShell_QImageIOHandler::nextImageDelay() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nextImageDelay");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("nextImageDelay", methodInfo, result);
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
  return QImageIOHandler::nextImageDelay();
}
QVariant  PythonQtShell_QImageIOHandler::option(QImageIOHandler::ImageOption  option) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "option");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QImageIOHandler::ImageOption"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&option};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("option", methodInfo, result);
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
  return QImageIOHandler::option(option);
}
bool  PythonQtShell_QImageIOHandler::read(QImage*  image)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "read");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QImage*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&image};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("read", methodInfo, result);
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
  return bool();
}
void PythonQtShell_QImageIOHandler::setOption(QImageIOHandler::ImageOption  option, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setOption");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QImageIOHandler::ImageOption" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&option, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QImageIOHandler::setOption(option, value);
}
bool  PythonQtShell_QImageIOHandler::supportsOption(QImageIOHandler::ImageOption  option) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsOption");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QImageIOHandler::ImageOption"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&option};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportsOption", methodInfo, result);
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
  return QImageIOHandler::supportsOption(option);
}
bool  PythonQtShell_QImageIOHandler::write(const QImage&  image)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "write");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QImage&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&image};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("write", methodInfo, result);
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
  return QImageIOHandler::write(image);
}
QImageIOHandler* PythonQtWrapper_QImageIOHandler::new_QImageIOHandler()
{ 
return new PythonQtShell_QImageIOHandler(); }

int  PythonQtWrapper_QImageIOHandler::currentImageNumber(QImageIOHandler* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_currentImageNumber());
}

QRect  PythonQtWrapper_QImageIOHandler::currentImageRect(QImageIOHandler* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_currentImageRect());
}

QIODevice*  PythonQtWrapper_QImageIOHandler::device(QImageIOHandler* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QByteArray  PythonQtWrapper_QImageIOHandler::format(QImageIOHandler* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QImageIOHandler::imageCount(QImageIOHandler* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_imageCount());
}

bool  PythonQtWrapper_QImageIOHandler::jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber)
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_jumpToImage(imageNumber));
}

bool  PythonQtWrapper_QImageIOHandler::jumpToNextImage(QImageIOHandler* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_jumpToNextImage());
}

int  PythonQtWrapper_QImageIOHandler::loopCount(QImageIOHandler* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_loopCount());
}

int  PythonQtWrapper_QImageIOHandler::nextImageDelay(QImageIOHandler* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_nextImageDelay());
}

QVariant  PythonQtWrapper_QImageIOHandler::option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_option(option));
}

void PythonQtWrapper_QImageIOHandler::setDevice(QImageIOHandler* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QImageIOHandler::setFormat(QImageIOHandler* theWrappedObject, const QByteArray&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QImageIOHandler::setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_setOption(option, value));
}

bool  PythonQtWrapper_QImageIOHandler::supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_supportsOption(option));
}

bool  PythonQtWrapper_QImageIOHandler::write(QImageIOHandler* theWrappedObject, const QImage&  image)
{
  return ( ((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->promoted_write(image));
}



PythonQtShell_QImageIOPlugin::~PythonQtShell_QImageIOPlugin() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QImageIOPlugin::Capabilities  PythonQtShell_QImageIOPlugin::capabilities(QIODevice*  device, const QByteArray&  format) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "capabilities");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QImageIOPlugin::Capabilities" , "QIODevice*" , "const QByteArray&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QImageIOPlugin::Capabilities returnValue;
    void* args[3] = {NULL, (void*)&device, (void*)&format};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("capabilities", methodInfo, result);
        } else {
          returnValue = *((QImageIOPlugin::Capabilities*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QImageIOPlugin::Capabilities();
}
void PythonQtShell_QImageIOPlugin::childEvent(QChildEvent*  arg__1)
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
  QImageIOPlugin::childEvent(arg__1);
}
QImageIOHandler*  PythonQtShell_QImageIOPlugin::create(QIODevice*  device, const QByteArray&  format) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "create");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QImageIOHandler*" , "QIODevice*" , "const QByteArray&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QImageIOHandler* returnValue;
    void* args[3] = {NULL, (void*)&device, (void*)&format};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
        } else {
          returnValue = *((QImageIOHandler**)args[0]);
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
void PythonQtShell_QImageIOPlugin::customEvent(QEvent*  arg__1)
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
  QImageIOPlugin::customEvent(arg__1);
}
bool  PythonQtShell_QImageIOPlugin::event(QEvent*  arg__1)
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
  return QImageIOPlugin::event(arg__1);
}
bool  PythonQtShell_QImageIOPlugin::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QImageIOPlugin::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QImageIOPlugin::timerEvent(QTimerEvent*  arg__1)
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
  QImageIOPlugin::timerEvent(arg__1);
}
QImageIOPlugin* PythonQtWrapper_QImageIOPlugin::new_QImageIOPlugin(QObject*  parent)
{ 
return new PythonQtShell_QImageIOPlugin(parent); }



QImageReader* PythonQtWrapper_QImageReader::new_QImageReader()
{ 
return new QImageReader(); }

QImageReader* PythonQtWrapper_QImageReader::new_QImageReader(QIODevice*  device, const QByteArray&  format)
{ 
return new QImageReader(device, format); }

QImageReader* PythonQtWrapper_QImageReader::new_QImageReader(const QString&  fileName, const QByteArray&  format)
{ 
return new QImageReader(fileName, format); }

bool  PythonQtWrapper_QImageReader::autoDetectImageFormat(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->autoDetectImageFormat());
}

QColor  PythonQtWrapper_QImageReader::backgroundColor(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->backgroundColor());
}

bool  PythonQtWrapper_QImageReader::canRead(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->canRead());
}

QRect  PythonQtWrapper_QImageReader::clipRect(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->clipRect());
}

int  PythonQtWrapper_QImageReader::currentImageNumber(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->currentImageNumber());
}

QRect  PythonQtWrapper_QImageReader::currentImageRect(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->currentImageRect());
}

bool  PythonQtWrapper_QImageReader::decideFormatFromContent(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->decideFormatFromContent());
}

QIODevice*  PythonQtWrapper_QImageReader::device(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QImageReader::ImageReaderError  PythonQtWrapper_QImageReader::error(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QImageReader::errorString(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QImageReader::fileName(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QByteArray  PythonQtWrapper_QImageReader::format(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QImageReader::imageCount(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->imageCount());
}

QImage::Format  PythonQtWrapper_QImageReader::imageFormat(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->imageFormat());
}

QByteArray  PythonQtWrapper_QImageReader::static_QImageReader_imageFormat(QIODevice*  device)
{
  return (QImageReader::imageFormat(device));
}

QByteArray  PythonQtWrapper_QImageReader::static_QImageReader_imageFormat(const QString&  fileName)
{
  return (QImageReader::imageFormat(fileName));
}

bool  PythonQtWrapper_QImageReader::jumpToImage(QImageReader* theWrappedObject, int  imageNumber)
{
  return ( theWrappedObject->jumpToImage(imageNumber));
}

bool  PythonQtWrapper_QImageReader::jumpToNextImage(QImageReader* theWrappedObject)
{
  return ( theWrappedObject->jumpToNextImage());
}

int  PythonQtWrapper_QImageReader::loopCount(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

int  PythonQtWrapper_QImageReader::nextImageDelay(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->nextImageDelay());
}

int  PythonQtWrapper_QImageReader::quality(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

QImage  PythonQtWrapper_QImageReader::read(QImageReader* theWrappedObject)
{
  return ( theWrappedObject->read());
}

QRect  PythonQtWrapper_QImageReader::scaledClipRect(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->scaledClipRect());
}

QSize  PythonQtWrapper_QImageReader::scaledSize(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->scaledSize());
}

void PythonQtWrapper_QImageReader::setAutoDetectImageFormat(QImageReader* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAutoDetectImageFormat(enabled));
}

void PythonQtWrapper_QImageReader::setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setBackgroundColor(color));
}

void PythonQtWrapper_QImageReader::setClipRect(QImageReader* theWrappedObject, const QRect&  rect)
{
  ( theWrappedObject->setClipRect(rect));
}

void PythonQtWrapper_QImageReader::setDecideFormatFromContent(QImageReader* theWrappedObject, bool  ignored)
{
  ( theWrappedObject->setDecideFormatFromContent(ignored));
}

void PythonQtWrapper_QImageReader::setDevice(QImageReader* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QImageReader::setFileName(QImageReader* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

void PythonQtWrapper_QImageReader::setFormat(QImageReader* theWrappedObject, const QByteArray&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QImageReader::setQuality(QImageReader* theWrappedObject, int  quality)
{
  ( theWrappedObject->setQuality(quality));
}

void PythonQtWrapper_QImageReader::setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect)
{
  ( theWrappedObject->setScaledClipRect(rect));
}

void PythonQtWrapper_QImageReader::setScaledSize(QImageReader* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setScaledSize(size));
}

QSize  PythonQtWrapper_QImageReader::size(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QList<QByteArray >  PythonQtWrapper_QImageReader::static_QImageReader_supportedImageFormats()
{
  return (QImageReader::supportedImageFormats());
}

bool  PythonQtWrapper_QImageReader::supportsAnimation(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->supportsAnimation());
}

bool  PythonQtWrapper_QImageReader::supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
  return ( theWrappedObject->supportsOption(option));
}

QString  PythonQtWrapper_QImageReader::text(QImageReader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->text(key));
}

QStringList  PythonQtWrapper_QImageReader::textKeys(QImageReader* theWrappedObject) const
{
  return ( theWrappedObject->textKeys());
}



QImageWriter* PythonQtWrapper_QImageWriter::new_QImageWriter()
{ 
return new QImageWriter(); }

QImageWriter* PythonQtWrapper_QImageWriter::new_QImageWriter(QIODevice*  device, const QByteArray&  format)
{ 
return new QImageWriter(device, format); }

QImageWriter* PythonQtWrapper_QImageWriter::new_QImageWriter(const QString&  fileName, const QByteArray&  format)
{ 
return new QImageWriter(fileName, format); }

bool  PythonQtWrapper_QImageWriter::canWrite(QImageWriter* theWrappedObject) const
{
  return ( theWrappedObject->canWrite());
}

int  PythonQtWrapper_QImageWriter::compression(QImageWriter* theWrappedObject) const
{
  return ( theWrappedObject->compression());
}

QIODevice*  PythonQtWrapper_QImageWriter::device(QImageWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QImageWriter::ImageWriterError  PythonQtWrapper_QImageWriter::error(QImageWriter* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QImageWriter::errorString(QImageWriter* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QImageWriter::fileName(QImageWriter* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QByteArray  PythonQtWrapper_QImageWriter::format(QImageWriter* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

float  PythonQtWrapper_QImageWriter::gamma(QImageWriter* theWrappedObject) const
{
  return ( theWrappedObject->gamma());
}

int  PythonQtWrapper_QImageWriter::quality(QImageWriter* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

void PythonQtWrapper_QImageWriter::setCompression(QImageWriter* theWrappedObject, int  compression)
{
  ( theWrappedObject->setCompression(compression));
}

void PythonQtWrapper_QImageWriter::setDevice(QImageWriter* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QImageWriter::setFileName(QImageWriter* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

void PythonQtWrapper_QImageWriter::setFormat(QImageWriter* theWrappedObject, const QByteArray&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QImageWriter::setGamma(QImageWriter* theWrappedObject, float  gamma)
{
  ( theWrappedObject->setGamma(gamma));
}

void PythonQtWrapper_QImageWriter::setQuality(QImageWriter* theWrappedObject, int  quality)
{
  ( theWrappedObject->setQuality(quality));
}

void PythonQtWrapper_QImageWriter::setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text)
{
  ( theWrappedObject->setText(key, text));
}

QList<QByteArray >  PythonQtWrapper_QImageWriter::static_QImageWriter_supportedImageFormats()
{
  return (QImageWriter::supportedImageFormats());
}

bool  PythonQtWrapper_QImageWriter::supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
  return ( theWrappedObject->supportsOption(option));
}

bool  PythonQtWrapper_QImageWriter::write(QImageWriter* theWrappedObject, const QImage&  image)
{
  return ( theWrappedObject->write(image));
}



PythonQtShell_QInputDialog::~PythonQtShell_QInputDialog() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QInputDialog::accept()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "accept");
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
  QInputDialog::accept();
}
void PythonQtShell_QInputDialog::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::actionEvent(arg__1);
}
void PythonQtShell_QInputDialog::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
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
  QInputDialog::changeEvent(arg__1);
}
void PythonQtShell_QInputDialog::childEvent(QChildEvent*  arg__1)
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
  QInputDialog::childEvent(arg__1);
}
void PythonQtShell_QInputDialog::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::closeEvent(arg__1);
}
void PythonQtShell_QInputDialog::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::contextMenuEvent(arg__1);
}
void PythonQtShell_QInputDialog::customEvent(QEvent*  arg__1)
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
  QInputDialog::customEvent(arg__1);
}
int  PythonQtShell_QInputDialog::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
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
  return QInputDialog::devType();
}
void PythonQtShell_QInputDialog::done(int  result)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "done");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&result};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::done(result);
}
void PythonQtShell_QInputDialog::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::dragEnterEvent(arg__1);
}
void PythonQtShell_QInputDialog::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::dragLeaveEvent(arg__1);
}
void PythonQtShell_QInputDialog::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::dragMoveEvent(arg__1);
}
void PythonQtShell_QInputDialog::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::dropEvent(arg__1);
}
void PythonQtShell_QInputDialog::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
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
  QInputDialog::enterEvent(arg__1);
}
bool  PythonQtShell_QInputDialog::event(QEvent*  arg__1)
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
  return QInputDialog::event(arg__1);
}
bool  PythonQtShell_QInputDialog::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QInputDialog::eventFilter(arg__1, arg__2);
}
int  PythonQtShell_QInputDialog::exec()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "exec");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("exec", methodInfo, result);
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
  return QInputDialog::exec();
}
void PythonQtShell_QInputDialog::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::focusInEvent(arg__1);
}
bool  PythonQtShell_QInputDialog::focusNextPrevChild(bool  next)
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
  return QInputDialog::focusNextPrevChild(next);
}
void PythonQtShell_QInputDialog::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::focusOutEvent(arg__1);
}
bool  PythonQtShell_QInputDialog::hasHeightForWidth() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasHeightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasHeightForWidth", methodInfo, result);
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
  return QInputDialog::hasHeightForWidth();
}
int  PythonQtShell_QInputDialog::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
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
  return QInputDialog::heightForWidth(arg__1);
}
void PythonQtShell_QInputDialog::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::hideEvent(arg__1);
}
void PythonQtShell_QInputDialog::initPainter(QPainter*  painter) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "initPainter");
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
  QInputDialog::initPainter(painter);
}
void PythonQtShell_QInputDialog::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QInputDialog::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QInputDialog::inputMethodQuery(arg__1);
}
void PythonQtShell_QInputDialog::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::keyPressEvent(arg__1);
}
void PythonQtShell_QInputDialog::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::keyReleaseEvent(arg__1);
}
void PythonQtShell_QInputDialog::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
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
  QInputDialog::leaveEvent(arg__1);
}
int  PythonQtShell_QInputDialog::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
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
  return QInputDialog::metric(arg__1);
}
void PythonQtShell_QInputDialog::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QInputDialog::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::mouseMoveEvent(arg__1);
}
void PythonQtShell_QInputDialog::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::mousePressEvent(arg__1);
}
void PythonQtShell_QInputDialog::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QInputDialog::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::moveEvent(arg__1);
}
bool  PythonQtShell_QInputDialog::nativeEvent(const QByteArray&  eventType, void*  message, long*  result)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nativeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&eventType, (void*)&message, (void*)&result};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nativeEvent", methodInfo, result);
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
  return QInputDialog::nativeEvent(eventType, message, result);
}
void PythonQtShell_QInputDialog::open()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
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
  QInputDialog::open();
}
QPaintEngine*  PythonQtShell_QInputDialog::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QInputDialog::paintEngine();
}
void PythonQtShell_QInputDialog::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QInputDialog::redirected(QPoint*  offset) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "redirected");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue;
    void* args[2] = {NULL, (void*)&offset};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
        } else {
          returnValue = *((QPaintDevice**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QInputDialog::redirected(offset);
}
void PythonQtShell_QInputDialog::reject()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reject");
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
  QInputDialog::reject();
}
void PythonQtShell_QInputDialog::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::resizeEvent(arg__1);
}
QPainter*  PythonQtShell_QInputDialog::sharedPainter() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sharedPainter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
        } else {
          returnValue = *((QPainter**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QInputDialog::sharedPainter();
}
void PythonQtShell_QInputDialog::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::showEvent(arg__1);
}
void PythonQtShell_QInputDialog::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::tabletEvent(arg__1);
}
void PythonQtShell_QInputDialog::timerEvent(QTimerEvent*  arg__1)
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
  QInputDialog::timerEvent(arg__1);
}
void PythonQtShell_QInputDialog::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QInputDialog::wheelEvent(arg__1);
}
QInputDialog* PythonQtWrapper_QInputDialog::new_QInputDialog(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QInputDialog(parent, flags); }

QString  PythonQtWrapper_QInputDialog::cancelButtonText(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->cancelButtonText());
}

QStringList  PythonQtWrapper_QInputDialog::comboBoxItems(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->comboBoxItems());
}

void PythonQtWrapper_QInputDialog::done(QInputDialog* theWrappedObject, int  result)
{
  ( ((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->promoted_done(result));
}

int  PythonQtWrapper_QInputDialog::doubleDecimals(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->doubleDecimals());
}

double  PythonQtWrapper_QInputDialog::doubleMaximum(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->doubleMaximum());
}

double  PythonQtWrapper_QInputDialog::doubleMinimum(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->doubleMinimum());
}

double  PythonQtWrapper_QInputDialog::doubleValue(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->doubleValue());
}

double  PythonQtWrapper_QInputDialog::static_QInputDialog_getDouble(QWidget*  parent, const QString&  title, const QString&  label, double  value, double  minValue, double  maxValue, int  decimals, bool*  ok, Qt::WindowFlags  flags)
{
  return (QInputDialog::getDouble(parent, title, label, value, minValue, maxValue, decimals, ok, flags));
}

int  PythonQtWrapper_QInputDialog::static_QInputDialog_getInt(QWidget*  parent, const QString&  title, const QString&  label, int  value, int  minValue, int  maxValue, int  step, bool*  ok, Qt::WindowFlags  flags)
{
  return (QInputDialog::getInt(parent, title, label, value, minValue, maxValue, step, ok, flags));
}

QString  PythonQtWrapper_QInputDialog::static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  items, int  current, bool  editable, bool*  ok, Qt::WindowFlags  flags, Qt::InputMethodHints  inputMethodHints)
{
  return (QInputDialog::getItem(parent, title, label, items, current, editable, ok, flags, inputMethodHints));
}

QString  PythonQtWrapper_QInputDialog::static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo, const QString&  text, bool*  ok, Qt::WindowFlags  flags, Qt::InputMethodHints  inputMethodHints)
{
  return (QInputDialog::getText(parent, title, label, echo, text, ok, flags, inputMethodHints));
}

QInputDialog::InputMode  PythonQtWrapper_QInputDialog::inputMode(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->inputMode());
}

int  PythonQtWrapper_QInputDialog::intMaximum(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->intMaximum());
}

int  PythonQtWrapper_QInputDialog::intMinimum(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->intMinimum());
}

int  PythonQtWrapper_QInputDialog::intStep(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->intStep());
}

int  PythonQtWrapper_QInputDialog::intValue(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->intValue());
}

bool  PythonQtWrapper_QInputDialog::isComboBoxEditable(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->isComboBoxEditable());
}

QString  PythonQtWrapper_QInputDialog::labelText(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->labelText());
}

QSize  PythonQtWrapper_QInputDialog::minimumSizeHint(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

QString  PythonQtWrapper_QInputDialog::okButtonText(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->okButtonText());
}

void PythonQtWrapper_QInputDialog::open(QInputDialog* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->promoted_open());
}

void PythonQtWrapper_QInputDialog::open(QInputDialog* theWrappedObject, QObject*  receiver, const char*  member)
{
  ( theWrappedObject->open(receiver, member));
}

QInputDialog::InputDialogOptions  PythonQtWrapper_QInputDialog::options(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->options());
}

void PythonQtWrapper_QInputDialog::setCancelButtonText(QInputDialog* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setCancelButtonText(text));
}

void PythonQtWrapper_QInputDialog::setComboBoxEditable(QInputDialog* theWrappedObject, bool  editable)
{
  ( theWrappedObject->setComboBoxEditable(editable));
}

void PythonQtWrapper_QInputDialog::setComboBoxItems(QInputDialog* theWrappedObject, const QStringList&  items)
{
  ( theWrappedObject->setComboBoxItems(items));
}

void PythonQtWrapper_QInputDialog::setDoubleDecimals(QInputDialog* theWrappedObject, int  decimals)
{
  ( theWrappedObject->setDoubleDecimals(decimals));
}

void PythonQtWrapper_QInputDialog::setDoubleMaximum(QInputDialog* theWrappedObject, double  max)
{
  ( theWrappedObject->setDoubleMaximum(max));
}

void PythonQtWrapper_QInputDialog::setDoubleMinimum(QInputDialog* theWrappedObject, double  min)
{
  ( theWrappedObject->setDoubleMinimum(min));
}

void PythonQtWrapper_QInputDialog::setDoubleRange(QInputDialog* theWrappedObject, double  min, double  max)
{
  ( theWrappedObject->setDoubleRange(min, max));
}

void PythonQtWrapper_QInputDialog::setDoubleValue(QInputDialog* theWrappedObject, double  value)
{
  ( theWrappedObject->setDoubleValue(value));
}

void PythonQtWrapper_QInputDialog::setInputMode(QInputDialog* theWrappedObject, QInputDialog::InputMode  mode)
{
  ( theWrappedObject->setInputMode(mode));
}

void PythonQtWrapper_QInputDialog::setIntMaximum(QInputDialog* theWrappedObject, int  max)
{
  ( theWrappedObject->setIntMaximum(max));
}

void PythonQtWrapper_QInputDialog::setIntMinimum(QInputDialog* theWrappedObject, int  min)
{
  ( theWrappedObject->setIntMinimum(min));
}

void PythonQtWrapper_QInputDialog::setIntRange(QInputDialog* theWrappedObject, int  min, int  max)
{
  ( theWrappedObject->setIntRange(min, max));
}

void PythonQtWrapper_QInputDialog::setIntStep(QInputDialog* theWrappedObject, int  step)
{
  ( theWrappedObject->setIntStep(step));
}

void PythonQtWrapper_QInputDialog::setIntValue(QInputDialog* theWrappedObject, int  value)
{
  ( theWrappedObject->setIntValue(value));
}

void PythonQtWrapper_QInputDialog::setLabelText(QInputDialog* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setLabelText(text));
}

void PythonQtWrapper_QInputDialog::setOkButtonText(QInputDialog* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setOkButtonText(text));
}

void PythonQtWrapper_QInputDialog::setOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QInputDialog::setOptions(QInputDialog* theWrappedObject, QInputDialog::InputDialogOptions  options)
{
  ( theWrappedObject->setOptions(options));
}

void PythonQtWrapper_QInputDialog::setTextEchoMode(QInputDialog* theWrappedObject, QLineEdit::EchoMode  mode)
{
  ( theWrappedObject->setTextEchoMode(mode));
}

void PythonQtWrapper_QInputDialog::setTextValue(QInputDialog* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setTextValue(text));
}

void PythonQtWrapper_QInputDialog::setVisible(QInputDialog* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}

QSize  PythonQtWrapper_QInputDialog::sizeHint(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

bool  PythonQtWrapper_QInputDialog::testOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option) const
{
  return ( theWrappedObject->testOption(option));
}

QLineEdit::EchoMode  PythonQtWrapper_QInputDialog::textEchoMode(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->textEchoMode());
}

QString  PythonQtWrapper_QInputDialog::textValue(QInputDialog* theWrappedObject) const
{
  return ( theWrappedObject->textValue());
}



PythonQtShell_QInputEvent::~PythonQtShell_QInputEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QInputEvent* PythonQtWrapper_QInputEvent::new_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QInputEvent(type, modifiers); }

Qt::KeyboardModifiers  PythonQtWrapper_QInputEvent::modifiers(QInputEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

void PythonQtWrapper_QInputEvent::setModifiers(QInputEvent* theWrappedObject, Qt::KeyboardModifiers  amodifiers)
{
  ( theWrappedObject->setModifiers(amodifiers));
}

void PythonQtWrapper_QInputEvent::setTimestamp(QInputEvent* theWrappedObject, ulong  atimestamp)
{
  ( theWrappedObject->setTimestamp(atimestamp));
}

ulong  PythonQtWrapper_QInputEvent::timestamp(QInputEvent* theWrappedObject) const
{
  return ( theWrappedObject->timestamp());
}



PythonQtShell_QIntValidator::~PythonQtShell_QIntValidator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QIntValidator::childEvent(QChildEvent*  arg__1)
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
  QIntValidator::childEvent(arg__1);
}
void PythonQtShell_QIntValidator::customEvent(QEvent*  arg__1)
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
  QIntValidator::customEvent(arg__1);
}
bool  PythonQtShell_QIntValidator::event(QEvent*  arg__1)
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
  return QIntValidator::event(arg__1);
}
bool  PythonQtShell_QIntValidator::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QIntValidator::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QIntValidator::fixup(QString&  input) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fixup");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&input};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QIntValidator::fixup(input);
}
void PythonQtShell_QIntValidator::setRange(int  bottom, int  top)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setRange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&bottom, (void*)&top};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QIntValidator::setRange(bottom, top);
}
void PythonQtShell_QIntValidator::timerEvent(QTimerEvent*  arg__1)
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
  QIntValidator::timerEvent(arg__1);
}
QValidator::State  PythonQtShell_QIntValidator::validate(QString&  arg__1, int&  arg__2) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "validate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QValidator::State" , "QString&" , "int&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QValidator::State returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("validate", methodInfo, result);
        } else {
          returnValue = *((QValidator::State*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QIntValidator::validate(arg__1, arg__2);
}
QIntValidator* PythonQtWrapper_QIntValidator::new_QIntValidator(QObject*  parent)
{ 
return new PythonQtShell_QIntValidator(parent); }

QIntValidator* PythonQtWrapper_QIntValidator::new_QIntValidator(int  bottom, int  top, QObject*  parent)
{ 
return new PythonQtShell_QIntValidator(bottom, top, parent); }

int  PythonQtWrapper_QIntValidator::bottom(QIntValidator* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

void PythonQtWrapper_QIntValidator::fixup(QIntValidator* theWrappedObject, QString&  input) const
{
  ( ((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->promoted_fixup(input));
}

void PythonQtWrapper_QIntValidator::setBottom(QIntValidator* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setBottom(arg__1));
}

void PythonQtWrapper_QIntValidator::setRange(QIntValidator* theWrappedObject, int  bottom, int  top)
{
  ( ((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->promoted_setRange(bottom, top));
}

void PythonQtWrapper_QIntValidator::setTop(QIntValidator* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setTop(arg__1));
}

int  PythonQtWrapper_QIntValidator::top(QIntValidator* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

QValidator::State  PythonQtWrapper_QIntValidator::validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const
{
  return ( ((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->promoted_validate(arg__1, arg__2));
}



PythonQtShell_QItemDelegate::~PythonQtShell_QItemDelegate() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QItemDelegate::childEvent(QChildEvent*  arg__1)
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
  QItemDelegate::childEvent(arg__1);
}
QWidget*  PythonQtShell_QItemDelegate::createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QWidget*" , "QWidget*" , "const QStyleOptionViewItem&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QWidget* returnValue;
    void* args[4] = {NULL, (void*)&parent, (void*)&option, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createEditor", methodInfo, result);
        } else {
          returnValue = *((QWidget**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemDelegate::createEditor(parent, option, index);
}
void PythonQtShell_QItemDelegate::customEvent(QEvent*  arg__1)
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
  QItemDelegate::customEvent(arg__1);
}
void PythonQtShell_QItemDelegate::destroyEditor(QWidget*  editor, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "destroyEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&editor, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::destroyEditor(editor, index);
}
void PythonQtShell_QItemDelegate::drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawCheck");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionViewItem&" , "const QRect&" , "Qt::CheckState"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&painter, (void*)&option, (void*)&rect, (void*)&state};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::drawCheck(painter, option, rect, state);
}
void PythonQtShell_QItemDelegate::drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawDecoration");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionViewItem&" , "const QRect&" , "const QPixmap&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&painter, (void*)&option, (void*)&rect, (void*)&pixmap};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::drawDecoration(painter, option, rect, pixmap);
}
void PythonQtShell_QItemDelegate::drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawDisplay");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionViewItem&" , "const QRect&" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&painter, (void*)&option, (void*)&rect, (void*)&text};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::drawDisplay(painter, option, rect, text);
}
void PythonQtShell_QItemDelegate::drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawFocus");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionViewItem&" , "const QRect&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::drawFocus(painter, option, rect);
}
bool  PythonQtShell_QItemDelegate::editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "editorEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*" , "QAbstractItemModel*" , "const QStyleOptionViewItem&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&event, (void*)&model, (void*)&option, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("editorEvent", methodInfo, result);
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
  return QItemDelegate::editorEvent(event, model, option, index);
}
bool  PythonQtShell_QItemDelegate::event(QEvent*  arg__1)
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
  return QItemDelegate::event(arg__1);
}
bool  PythonQtShell_QItemDelegate::eventFilter(QObject*  object, QEvent*  event)
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
  return QItemDelegate::eventFilter(object, event);
}
bool  PythonQtShell_QItemDelegate::helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "helpEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QHelpEvent*" , "QAbstractItemView*" , "const QStyleOptionViewItem&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&event, (void*)&view, (void*)&option, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("helpEvent", methodInfo, result);
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
  return QItemDelegate::helpEvent(event, view, option, index);
}
void PythonQtShell_QItemDelegate::paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionViewItem&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::paint(painter, option, index);
}
QVector<int >  PythonQtShell_QItemDelegate::paintingRoles() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintingRoles");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVector<int >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVector<int > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintingRoles", methodInfo, result);
        } else {
          returnValue = *((QVector<int >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemDelegate::paintingRoles();
}
void PythonQtShell_QItemDelegate::setEditorData(QWidget*  editor, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setEditorData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&editor, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::setEditorData(editor, index);
}
void PythonQtShell_QItemDelegate::setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setModelData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*" , "QAbstractItemModel*" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&editor, (void*)&model, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::setModelData(editor, model, index);
}
QSize  PythonQtShell_QItemDelegate::sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize" , "const QStyleOptionViewItem&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QSize returnValue;
    void* args[3] = {NULL, (void*)&option, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemDelegate::sizeHint(option, index);
}
void PythonQtShell_QItemDelegate::timerEvent(QTimerEvent*  arg__1)
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
  QItemDelegate::timerEvent(arg__1);
}
void PythonQtShell_QItemDelegate::updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWidget*" , "const QStyleOptionViewItem&" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&editor, (void*)&option, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemDelegate::updateEditorGeometry(editor, option, index);
}
QItemDelegate* PythonQtWrapper_QItemDelegate::new_QItemDelegate(QObject*  parent)
{ 
return new PythonQtShell_QItemDelegate(parent); }

QWidget*  PythonQtWrapper_QItemDelegate::createEditor(QItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_createEditor(parent, option, index));
}

void PythonQtWrapper_QItemDelegate::drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const
{
  ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_drawCheck(painter, option, rect, state));
}

void PythonQtWrapper_QItemDelegate::drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const
{
  ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_drawDecoration(painter, option, rect, pixmap));
}

void PythonQtWrapper_QItemDelegate::drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const
{
  ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_drawDisplay(painter, option, rect, text));
}

void PythonQtWrapper_QItemDelegate::drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const
{
  ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_drawFocus(painter, option, rect));
}

bool  PythonQtWrapper_QItemDelegate::editorEvent(QItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index)
{
  return ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_editorEvent(event, model, option, index));
}

bool  PythonQtWrapper_QItemDelegate::eventFilter(QItemDelegate* theWrappedObject, QObject*  object, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_eventFilter(object, event));
}

bool  PythonQtWrapper_QItemDelegate::hasClipping(QItemDelegate* theWrappedObject) const
{
  return ( theWrappedObject->hasClipping());
}

QItemEditorFactory*  PythonQtWrapper_QItemDelegate::itemEditorFactory(QItemDelegate* theWrappedObject) const
{
  return ( theWrappedObject->itemEditorFactory());
}

void PythonQtWrapper_QItemDelegate::paint(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
  ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_paint(painter, option, index));
}

void PythonQtWrapper_QItemDelegate::setClipping(QItemDelegate* theWrappedObject, bool  clip)
{
  ( theWrappedObject->setClipping(clip));
}

void PythonQtWrapper_QItemDelegate::setEditorData(QItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const
{
  ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_setEditorData(editor, index));
}

void PythonQtWrapper_QItemDelegate::setItemEditorFactory(QItemDelegate* theWrappedObject, QItemEditorFactory*  factory)
{
  ( theWrappedObject->setItemEditorFactory(factory));
}

void PythonQtWrapper_QItemDelegate::setModelData(QItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const
{
  ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_setModelData(editor, model, index));
}

QSize  PythonQtWrapper_QItemDelegate::sizeHint(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_sizeHint(option, index));
}

void PythonQtWrapper_QItemDelegate::updateEditorGeometry(QItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const
{
  ( ((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->promoted_updateEditorGeometry(editor, option, index));
}



PythonQtShell_QItemEditorCreatorBase::~PythonQtShell_QItemEditorCreatorBase() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWidget*  PythonQtShell_QItemEditorCreatorBase::createWidget(QWidget*  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createWidget");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QWidget*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QWidget* returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createWidget", methodInfo, result);
        } else {
          returnValue = *((QWidget**)args[0]);
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
QByteArray  PythonQtShell_QItemEditorCreatorBase::valuePropertyName() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "valuePropertyName");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QByteArray"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QByteArray returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("valuePropertyName", methodInfo, result);
        } else {
          returnValue = *((QByteArray*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QByteArray();
}
QItemEditorCreatorBase* PythonQtWrapper_QItemEditorCreatorBase::new_QItemEditorCreatorBase()
{ 
return new PythonQtShell_QItemEditorCreatorBase(); }



PythonQtShell_QItemEditorFactory::~PythonQtShell_QItemEditorFactory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWidget*  PythonQtShell_QItemEditorFactory::createEditor(int  userType, QWidget*  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QWidget*" , "int" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QWidget* returnValue;
    void* args[3] = {NULL, (void*)&userType, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createEditor", methodInfo, result);
        } else {
          returnValue = *((QWidget**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemEditorFactory::createEditor(userType, parent);
}
QByteArray  PythonQtShell_QItemEditorFactory::valuePropertyName(int  userType) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "valuePropertyName");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QByteArray" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QByteArray returnValue;
    void* args[2] = {NULL, (void*)&userType};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("valuePropertyName", methodInfo, result);
        } else {
          returnValue = *((QByteArray*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemEditorFactory::valuePropertyName(userType);
}
QItemEditorFactory* PythonQtWrapper_QItemEditorFactory::new_QItemEditorFactory()
{ 
return new PythonQtShell_QItemEditorFactory(); }

QWidget*  PythonQtWrapper_QItemEditorFactory::createEditor(QItemEditorFactory* theWrappedObject, int  userType, QWidget*  parent) const
{
  return ( ((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->promoted_createEditor(userType, parent));
}

const QItemEditorFactory*  PythonQtWrapper_QItemEditorFactory::static_QItemEditorFactory_defaultFactory()
{
  return (QItemEditorFactory::defaultFactory());
}

void PythonQtWrapper_QItemEditorFactory::registerEditor(QItemEditorFactory* theWrappedObject, int  userType, QItemEditorCreatorBase*  creator)
{
  ( theWrappedObject->registerEditor(userType, creator));
}

void PythonQtWrapper_QItemEditorFactory::static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory)
{
  (QItemEditorFactory::setDefaultFactory(factory));
}

QByteArray  PythonQtWrapper_QItemEditorFactory::valuePropertyName(QItemEditorFactory* theWrappedObject, int  userType) const
{
  return ( ((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->promoted_valuePropertyName(userType));
}



QItemSelection* PythonQtWrapper_QItemSelection::new_QItemSelection()
{ 
return new QItemSelection(); }

QItemSelection* PythonQtWrapper_QItemSelection::new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{ 
return new QItemSelection(topLeft, bottomRight); }

void PythonQtWrapper_QItemSelection::append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
  ( theWrappedObject->append(t));
}

void PythonQtWrapper_QItemSelection::append(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  t)
{
  ( theWrappedObject->append(t));
}

const QItemSelectionRange*  PythonQtWrapper_QItemSelection::at(QItemSelection* theWrappedObject, int  i) const
{
  return &( theWrappedObject->at(i));
}

const QItemSelectionRange*  PythonQtWrapper_QItemSelection::back(QItemSelection* theWrappedObject) const
{
  return &( theWrappedObject->back());
}

void PythonQtWrapper_QItemSelection::clear(QItemSelection* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QItemSelection::contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->contains(index));
}

int  PythonQtWrapper_QItemSelection::count(QItemSelection* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QItemSelection::count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const
{
  return ( theWrappedObject->count(t));
}

void PythonQtWrapper_QItemSelection::detachShared(QItemSelection* theWrappedObject)
{
  ( theWrappedObject->detachShared());
}

bool  PythonQtWrapper_QItemSelection::empty(QItemSelection* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

bool  PythonQtWrapper_QItemSelection::endsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const
{
  return ( theWrappedObject->endsWith(t));
}

const QItemSelectionRange*  PythonQtWrapper_QItemSelection::first(QItemSelection* theWrappedObject) const
{
  return &( theWrappedObject->first());
}

QList<QItemSelectionRange >  PythonQtWrapper_QItemSelection::static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector)
{
  return (QItemSelection::fromVector(vector));
}

const QItemSelectionRange*  PythonQtWrapper_QItemSelection::front(QItemSelection* theWrappedObject) const
{
  return &( theWrappedObject->front());
}

int  PythonQtWrapper_QItemSelection::indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const
{
  return ( theWrappedObject->indexOf(t, from));
}

QList<QModelIndex >  PythonQtWrapper_QItemSelection::indexes(QItemSelection* theWrappedObject) const
{
  return ( theWrappedObject->indexes());
}

bool  PythonQtWrapper_QItemSelection::isEmpty(QItemSelection* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QItemSelection::isSharedWith(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  other) const
{
  return ( theWrappedObject->isSharedWith(other));
}

const QItemSelectionRange*  PythonQtWrapper_QItemSelection::last(QItemSelection* theWrappedObject) const
{
  return &( theWrappedObject->last());
}

int  PythonQtWrapper_QItemSelection::lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const
{
  return ( theWrappedObject->lastIndexOf(t, from));
}

int  PythonQtWrapper_QItemSelection::length(QItemSelection* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

void PythonQtWrapper_QItemSelection::merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command)
{
  ( theWrappedObject->merge(other, command));
}

QList<QItemSelectionRange >  PythonQtWrapper_QItemSelection::mid(QItemSelection* theWrappedObject, int  pos, int  length) const
{
  return ( theWrappedObject->mid(pos, length));
}

void PythonQtWrapper_QItemSelection::move(QItemSelection* theWrappedObject, int  from, int  to)
{
  ( theWrappedObject->move(from, to));
}

bool  PythonQtWrapper_QItemSelection::__ne__(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const
{
  return ( (*theWrappedObject)!= l);
}

bool  PythonQtWrapper_QItemSelection::__eq__(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const
{
  return ( (*theWrappedObject)== l);
}

void PythonQtWrapper_QItemSelection::pop_back(QItemSelection* theWrappedObject)
{
  ( theWrappedObject->pop_back());
}

void PythonQtWrapper_QItemSelection::pop_front(QItemSelection* theWrappedObject)
{
  ( theWrappedObject->pop_front());
}

void PythonQtWrapper_QItemSelection::prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
  ( theWrappedObject->prepend(t));
}

void PythonQtWrapper_QItemSelection::push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
  ( theWrappedObject->push_back(t));
}

void PythonQtWrapper_QItemSelection::push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
  ( theWrappedObject->push_front(t));
}

int  PythonQtWrapper_QItemSelection::removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
  return ( theWrappedObject->removeAll(t));
}

void PythonQtWrapper_QItemSelection::removeAt(QItemSelection* theWrappedObject, int  i)
{
  ( theWrappedObject->removeAt(i));
}

void PythonQtWrapper_QItemSelection::removeFirst(QItemSelection* theWrappedObject)
{
  ( theWrappedObject->removeFirst());
}

void PythonQtWrapper_QItemSelection::removeLast(QItemSelection* theWrappedObject)
{
  ( theWrappedObject->removeLast());
}

bool  PythonQtWrapper_QItemSelection::removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
  return ( theWrappedObject->removeOne(t));
}

void PythonQtWrapper_QItemSelection::replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t)
{
  ( theWrappedObject->replace(i, t));
}

void PythonQtWrapper_QItemSelection::reserve(QItemSelection* theWrappedObject, int  size)
{
  ( theWrappedObject->reserve(size));
}

void PythonQtWrapper_QItemSelection::select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
  ( theWrappedObject->select(topLeft, bottomRight));
}

void PythonQtWrapper_QItemSelection::setSharable(QItemSelection* theWrappedObject, bool  sharable)
{
  ( theWrappedObject->setSharable(sharable));
}

int  PythonQtWrapper_QItemSelection::size(QItemSelection* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QItemSelection::static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result)
{
  (QItemSelection::split(range, other, result));
}

bool  PythonQtWrapper_QItemSelection::startsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const
{
  return ( theWrappedObject->startsWith(t));
}

void PythonQtWrapper_QItemSelection::swap(QItemSelection* theWrappedObject, QList<QItemSelectionRange >&  other)
{
  ( theWrappedObject->swap(other));
}

void PythonQtWrapper_QItemSelection::swap(QItemSelection* theWrappedObject, int  i, int  j)
{
  ( theWrappedObject->swap(i, j));
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::takeAt(QItemSelection* theWrappedObject, int  i)
{
  return ( theWrappedObject->takeAt(i));
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::takeFirst(QItemSelection* theWrappedObject)
{
  return ( theWrappedObject->takeFirst());
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::takeLast(QItemSelection* theWrappedObject)
{
  return ( theWrappedObject->takeLast());
}

QVector<QItemSelectionRange >  PythonQtWrapper_QItemSelection::toVector(QItemSelection* theWrappedObject) const
{
  return ( theWrappedObject->toVector());
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::value(QItemSelection* theWrappedObject, int  i) const
{
  return ( theWrappedObject->value(i));
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const
{
  return ( theWrappedObject->value(i, defaultValue));
}



PythonQtShell_QItemSelectionModel::~PythonQtShell_QItemSelectionModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QItemSelectionModel::childEvent(QChildEvent*  arg__1)
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
  QItemSelectionModel::childEvent(arg__1);
}
void PythonQtShell_QItemSelectionModel::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
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
  QItemSelectionModel::clear();
}
void PythonQtShell_QItemSelectionModel::clearCurrentIndex()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clearCurrentIndex");
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
  QItemSelectionModel::clearCurrentIndex();
}
void PythonQtShell_QItemSelectionModel::customEvent(QEvent*  arg__1)
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
  QItemSelectionModel::customEvent(arg__1);
}
bool  PythonQtShell_QItemSelectionModel::event(QEvent*  arg__1)
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
  return QItemSelectionModel::event(arg__1);
}
bool  PythonQtShell_QItemSelectionModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QItemSelectionModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QItemSelectionModel::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
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
  QItemSelectionModel::reset();
}
void PythonQtShell_QItemSelectionModel::select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "select");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QItemSelection&" , "QItemSelectionModel::SelectionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&selection, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::select(selection, command);
}
void PythonQtShell_QItemSelectionModel::select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "select");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "QItemSelectionModel::SelectionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&index, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::select(index, command);
}
void PythonQtShell_QItemSelectionModel::setCurrentIndex(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setCurrentIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "QItemSelectionModel::SelectionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&index, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::setCurrentIndex(index, command);
}
void PythonQtShell_QItemSelectionModel::timerEvent(QTimerEvent*  arg__1)
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
  QItemSelectionModel::timerEvent(arg__1);
}
QItemSelectionModel* PythonQtWrapper_QItemSelectionModel::new_QItemSelectionModel(QAbstractItemModel*  model)
{ 
return new PythonQtShell_QItemSelectionModel(model); }

QItemSelectionModel* PythonQtWrapper_QItemSelectionModel::new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent)
{ 
return new PythonQtShell_QItemSelectionModel(model, parent); }

void PythonQtWrapper_QItemSelectionModel::clear(QItemSelectionModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->promoted_clear());
}

void PythonQtWrapper_QItemSelectionModel::clearCurrentIndex(QItemSelectionModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->promoted_clearCurrentIndex());
}

bool  PythonQtWrapper_QItemSelectionModel::columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->columnIntersectsSelection(column, parent));
}

QModelIndex  PythonQtWrapper_QItemSelectionModel::currentIndex(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->currentIndex());
}

bool  PythonQtWrapper_QItemSelectionModel::hasSelection(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

bool  PythonQtWrapper_QItemSelectionModel::isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->isColumnSelected(column, parent));
}

bool  PythonQtWrapper_QItemSelectionModel::isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const
{
  return ( theWrappedObject->isRowSelected(row, parent));
}

bool  PythonQtWrapper_QItemSelectionModel::isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->isSelected(index));
}

const QAbstractItemModel*  PythonQtWrapper_QItemSelectionModel::model(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

void PythonQtWrapper_QItemSelectionModel::reset(QItemSelectionModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->promoted_reset());
}

bool  PythonQtWrapper_QItemSelectionModel::rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const
{
  return ( theWrappedObject->rowIntersectsSelection(row, parent));
}

void PythonQtWrapper_QItemSelectionModel::select(QItemSelectionModel* theWrappedObject, const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command)
{
  ( ((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->promoted_select(selection, command));
}

void PythonQtWrapper_QItemSelectionModel::select(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command)
{
  ( ((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->promoted_select(index, command));
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionModel::selectedColumns(QItemSelectionModel* theWrappedObject, int  row) const
{
  return ( theWrappedObject->selectedColumns(row));
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionModel::selectedIndexes(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->selectedIndexes());
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionModel::selectedRows(QItemSelectionModel* theWrappedObject, int  column) const
{
  return ( theWrappedObject->selectedRows(column));
}

const QItemSelection  PythonQtWrapper_QItemSelectionModel::selection(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->selection());
}

void PythonQtWrapper_QItemSelectionModel::setCurrentIndex(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command)
{
  ( ((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->promoted_setCurrentIndex(index, command));
}



QItemSelectionRange* PythonQtWrapper_QItemSelectionRange::new_QItemSelectionRange()
{ 
return new QItemSelectionRange(); }

QItemSelectionRange* PythonQtWrapper_QItemSelectionRange::new_QItemSelectionRange(const QItemSelectionRange&  other)
{ 
return new QItemSelectionRange(other); }

QItemSelectionRange* PythonQtWrapper_QItemSelectionRange::new_QItemSelectionRange(const QModelIndex&  index)
{ 
return new QItemSelectionRange(index); }

QItemSelectionRange* PythonQtWrapper_QItemSelectionRange::new_QItemSelectionRange(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{ 
return new QItemSelectionRange(topLeft, bottomRight); }

int  PythonQtWrapper_QItemSelectionRange::bottom(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

const QPersistentModelIndex*  PythonQtWrapper_QItemSelectionRange::bottomRight(QItemSelectionRange* theWrappedObject) const
{
  return &( theWrappedObject->bottomRight());
}

bool  PythonQtWrapper_QItemSelectionRange::contains(QItemSelectionRange* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->contains(index));
}

bool  PythonQtWrapper_QItemSelectionRange::contains(QItemSelectionRange* theWrappedObject, int  row, int  column, const QModelIndex&  parentIndex) const
{
  return ( theWrappedObject->contains(row, column, parentIndex));
}

int  PythonQtWrapper_QItemSelectionRange::height(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionRange::indexes(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->indexes());
}

QItemSelectionRange  PythonQtWrapper_QItemSelectionRange::intersected(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const
{
  return ( theWrappedObject->intersected(other));
}

bool  PythonQtWrapper_QItemSelectionRange::intersects(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const
{
  return ( theWrappedObject->intersects(other));
}

bool  PythonQtWrapper_QItemSelectionRange::isEmpty(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QItemSelectionRange::isValid(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QItemSelectionRange::left(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

const QAbstractItemModel*  PythonQtWrapper_QItemSelectionRange::model(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

bool  PythonQtWrapper_QItemSelectionRange::__ne__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QItemSelectionRange::__lt__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const
{
  return ( (*theWrappedObject)< other);
}

bool  PythonQtWrapper_QItemSelectionRange::__eq__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const
{
  return ( (*theWrappedObject)== other);
}

QModelIndex  PythonQtWrapper_QItemSelectionRange::parent(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

int  PythonQtWrapper_QItemSelectionRange::right(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

int  PythonQtWrapper_QItemSelectionRange::top(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

const QPersistentModelIndex*  PythonQtWrapper_QItemSelectionRange::topLeft(QItemSelectionRange* theWrappedObject) const
{
  return &( theWrappedObject->topLeft());
}

int  PythonQtWrapper_QItemSelectionRange::width(QItemSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

QString PythonQtWrapper_QItemSelectionRange::py_toString(QItemSelectionRange* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QKeyEvent::~PythonQtShell_QKeyEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QKeyEvent* PythonQtWrapper_QKeyEvent::new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text, bool  autorep, ushort  count)
{ 
return new PythonQtShell_QKeyEvent(type, key, modifiers, text, autorep, count); }

QKeyEvent* PythonQtWrapper_QKeyEvent::new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text, bool  autorep, ushort  count)
{ 
return new PythonQtShell_QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count); }

int  PythonQtWrapper_QKeyEvent::count(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QKeyEvent::isAutoRepeat(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->isAutoRepeat());
}

int  PythonQtWrapper_QKeyEvent::key(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

bool  PythonQtWrapper_QKeyEvent::matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const
{
  return ( theWrappedObject->matches(key));
}

Qt::KeyboardModifiers  PythonQtWrapper_QKeyEvent::modifiers(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

unsigned int  PythonQtWrapper_QKeyEvent::nativeModifiers(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->nativeModifiers());
}

unsigned int  PythonQtWrapper_QKeyEvent::nativeScanCode(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->nativeScanCode());
}

unsigned int  PythonQtWrapper_QKeyEvent::nativeVirtualKey(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->nativeVirtualKey());
}

QString  PythonQtWrapper_QKeyEvent::text(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->text());
}



PythonQtShell_QKeyEventTransition::~PythonQtShell_QKeyEventTransition() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QKeyEventTransition::childEvent(QChildEvent*  arg__1)
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
  QKeyEventTransition::childEvent(arg__1);
}
void PythonQtShell_QKeyEventTransition::customEvent(QEvent*  arg__1)
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
  QKeyEventTransition::customEvent(arg__1);
}
bool  PythonQtShell_QKeyEventTransition::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
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
  return QKeyEventTransition::event(e);
}
bool  PythonQtShell_QKeyEventTransition::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QKeyEventTransition::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QKeyEventTransition::eventTest(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventTest");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("eventTest", methodInfo, result);
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
  return QKeyEventTransition::eventTest(event);
}
void PythonQtShell_QKeyEventTransition::onTransition(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onTransition");
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
  QKeyEventTransition::onTransition(event);
}
void PythonQtShell_QKeyEventTransition::timerEvent(QTimerEvent*  arg__1)
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
  QKeyEventTransition::timerEvent(arg__1);
}
QKeyEventTransition* PythonQtWrapper_QKeyEventTransition::new_QKeyEventTransition(QObject*  object, QEvent::Type  type, int  key, QState*  sourceState)
{ 
return new PythonQtShell_QKeyEventTransition(object, type, key, sourceState); }

QKeyEventTransition* PythonQtWrapper_QKeyEventTransition::new_QKeyEventTransition(QState*  sourceState)
{ 
return new PythonQtShell_QKeyEventTransition(sourceState); }

bool  PythonQtWrapper_QKeyEventTransition::eventTest(QKeyEventTransition* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QKeyEventTransition*)theWrappedObject)->promoted_eventTest(event));
}

int  PythonQtWrapper_QKeyEventTransition::key(QKeyEventTransition* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

Qt::KeyboardModifiers  PythonQtWrapper_QKeyEventTransition::modifierMask(QKeyEventTransition* theWrappedObject) const
{
  return ( theWrappedObject->modifierMask());
}

void PythonQtWrapper_QKeyEventTransition::onTransition(QKeyEventTransition* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QKeyEventTransition*)theWrappedObject)->promoted_onTransition(event));
}

void PythonQtWrapper_QKeyEventTransition::setKey(QKeyEventTransition* theWrappedObject, int  key)
{
  ( theWrappedObject->setKey(key));
}

void PythonQtWrapper_QKeyEventTransition::setModifierMask(QKeyEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifierMask(modifiers));
}


