#include <PythonQt.h>
#include <QColor>
#include <QIconEngine>
#include <QImage>
#include <QObject>
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
#include <qgraphicstransform.h>
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



class PythonQtWrapper_QGraphicsSceneWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneWheelEvent* new_QGraphicsSceneWheelEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneWheelEvent(QGraphicsSceneWheelEvent* obj) { delete obj; } 
    Qt::MouseButtons  buttons(QGraphicsSceneWheelEvent* theWrappedObject) const;
    int  delta(QGraphicsSceneWheelEvent* theWrappedObject) const;
    Qt::KeyboardModifiers  modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const;
    Qt::Orientation  orientation(QGraphicsSceneWheelEvent* theWrappedObject) const;
    QPointF  pos(QGraphicsSceneWheelEvent* theWrappedObject) const;
    QPointF  scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const;
    QPoint  screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const;
    void setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons);
    void setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta);
    void setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
    void setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation);
    void setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
    void setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
    void setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtShell_QGraphicsSimpleTextItem : public QGraphicsSimpleTextItem
{
public:
    PythonQtShell_QGraphicsSimpleTextItem(QGraphicsItem*  parent = 0):QGraphicsSimpleTextItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = 0):QGraphicsSimpleTextItem(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsSimpleTextItem();

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsSimpleTextItem : public QGraphicsSimpleTextItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsSimpleTextItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsSimpleTextItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsSimpleTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsSimpleTextItem::Type};
public slots:
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(QGraphicsItem*  parent = 0);
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = 0);
void delete_QGraphicsSimpleTextItem(QGraphicsSimpleTextItem* obj) { delete obj; } 
    QRectF  boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const;
    bool  contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const;
    QFont  font(QGraphicsSimpleTextItem* theWrappedObject) const;
    bool  isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const;
    QPainterPath  opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const;
    void paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
    void setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font);
    void setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text);
    QPainterPath  shape(QGraphicsSimpleTextItem* theWrappedObject) const;
    QString  text(QGraphicsSimpleTextItem* theWrappedObject) const;
    int  type(QGraphicsSimpleTextItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsTextItem : public QGraphicsTextItem
{
public:
    PythonQtShell_QGraphicsTextItem(QGraphicsItem*  parent = 0):QGraphicsTextItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0):QGraphicsTextItem(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsTextItem();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  ev);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGraphicsTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsTextItem::Type};
public slots:
QGraphicsTextItem* new_QGraphicsTextItem(QGraphicsItem*  parent = 0);
QGraphicsTextItem* new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0);
void delete_QGraphicsTextItem(QGraphicsTextItem* obj) { delete obj; } 
    void adjustSize(QGraphicsTextItem* theWrappedObject);
    QRectF  boundingRect(QGraphicsTextItem* theWrappedObject) const;
    bool  contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
    QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
    QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
    QFont  font(QGraphicsTextItem* theWrappedObject) const;
    bool  isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const;
    QPainterPath  opaqueArea(QGraphicsTextItem* theWrappedObject) const;
    bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
    void paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
    void setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c);
    void setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document);
    void setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font);
    void setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html);
    void setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open);
    void setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text);
    void setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b);
    void setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor);
    void setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags);
    void setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width);
    QPainterPath  shape(QGraphicsTextItem* theWrappedObject) const;
    bool  tabChangesFocus(QGraphicsTextItem* theWrappedObject) const;
    QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
    Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
    qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
    QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
    QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
    int  type(QGraphicsTextItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsTransform : public QGraphicsTransform
{
public:
    PythonQtShell_QGraphicsTransform(QObject*  parent = 0):QGraphicsTransform(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsTransform();

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGraphicsTransform : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsTransform* new_QGraphicsTransform(QObject*  parent = 0);
void delete_QGraphicsTransform(QGraphicsTransform* obj) { delete obj; } 
};





class PythonQtShell_QGraphicsView : public QGraphicsView
{
public:
    PythonQtShell_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0):QGraphicsView(scene, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsView(QWidget*  parent = 0):QGraphicsView(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsView();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setupViewport(QWidget*  widget);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsView : public QGraphicsView
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QGraphicsView::contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { QGraphicsView::dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { QGraphicsView::dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QGraphicsView::dragMoveEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawBackground(painter, rect); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawForeground(painter, rect); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { QGraphicsView::drawItems(painter, numItems, items, options); }
inline void promoted_dropEvent(QDropEvent*  event) { QGraphicsView::dropEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsView::event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsView::focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsView::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsView::focusOutEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsView::inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsView::inputMethodQuery(query); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsView::keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsView::keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QGraphicsView::mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QGraphicsView::mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGraphicsView::mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGraphicsView::mouseReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QGraphicsView::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QGraphicsView::resizeEvent(event); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QGraphicsView::scrollContentsBy(dx, dy); }
inline void promoted_setupViewport(QWidget*  widget) { QGraphicsView::setupViewport(widget); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsView::showEvent(event); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QGraphicsView::viewportEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QGraphicsView::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptimizationFlag CacheModeFlag )
Q_FLAGS(OptimizationFlags CacheMode )
enum OptimizationFlag{
  DontClipPainter = QGraphicsView::DontClipPainter,   DontSavePainterState = QGraphicsView::DontSavePainterState,   DontAdjustForAntialiasing = QGraphicsView::DontAdjustForAntialiasing,   IndirectPainting = QGraphicsView::IndirectPainting};
enum CacheModeFlag{
  CacheNone = QGraphicsView::CacheNone,   CacheBackground = QGraphicsView::CacheBackground};
Q_DECLARE_FLAGS(OptimizationFlags, OptimizationFlag)
Q_DECLARE_FLAGS(CacheMode, CacheModeFlag)
public slots:
QGraphicsView* new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0);
QGraphicsView* new_QGraphicsView(QWidget*  parent = 0);
void delete_QGraphicsView(QGraphicsView* obj) { delete obj; } 
    Qt::Alignment  alignment(QGraphicsView* theWrappedObject) const;
    QBrush  backgroundBrush(QGraphicsView* theWrappedObject) const;
    QGraphicsView::CacheMode  cacheMode(QGraphicsView* theWrappedObject) const;
    void centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item);
    void centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos);
    void centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y);
    void contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event);
    void dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event);
    void dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event);
    QGraphicsView::DragMode  dragMode(QGraphicsView* theWrappedObject) const;
    void dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event);
    void drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
    void drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
    void drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
    void dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event);
    void ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin = 50, int  ymargin = 50);
    void ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin = 50, int  ymargin = 50);
    void ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
    bool  event(QGraphicsView* theWrappedObject, QEvent*  event);
    void fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
    void fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
    void fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
    void focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
    bool  focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next);
    void focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
    QBrush  foregroundBrush(QGraphicsView* theWrappedObject) const;
    void inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event);
    QVariant  inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const;
    bool  isInteractive(QGraphicsView* theWrappedObject) const;
    bool  isTransformed(QGraphicsView* theWrappedObject) const;
    QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
    QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const;
    QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject) const;
    QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
    QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
    QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
    QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
    QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y) const;
    QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
    void keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
    void keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
    QPainterPath  mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
    QPoint  mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const;
    QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const;
    QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const;
    QPoint  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const;
    QPolygon  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QPainterPath  mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
    QPointF  mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const;
    QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const;
    QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const;
    QPointF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const;
    QPolygonF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const;
    QMatrix  matrix(QGraphicsView* theWrappedObject) const;
    void mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
    void mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
    void mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
    void mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
    QGraphicsView::OptimizationFlags  optimizationFlags(QGraphicsView* theWrappedObject) const;
    void paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event);
    void render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRect&  source = QRect(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
    QPainter::RenderHints  renderHints(QGraphicsView* theWrappedObject) const;
    void resetCachedContent(QGraphicsView* theWrappedObject);
    void resetMatrix(QGraphicsView* theWrappedObject);
    void resetTransform(QGraphicsView* theWrappedObject);
    QGraphicsView::ViewportAnchor  resizeAnchor(QGraphicsView* theWrappedObject) const;
    void resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event);
    void rotate(QGraphicsView* theWrappedObject, qreal  angle);
    Qt::ItemSelectionMode  rubberBandSelectionMode(QGraphicsView* theWrappedObject) const;
    void scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy);
    QGraphicsScene*  scene(QGraphicsView* theWrappedObject) const;
    QRectF  sceneRect(QGraphicsView* theWrappedObject) const;
    void scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy);
    void setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment);
    void setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
    void setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode);
    void setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode);
    void setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
    void setInteractive(QGraphicsView* theWrappedObject, bool  allowed);
    void setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
    void setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled = true);
    void setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags);
    void setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
    void setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints);
    void setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
    void setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode);
    void setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene);
    void setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect);
    void setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
    void setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine = false);
    void setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
    void setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode);
    void setupViewport(QGraphicsView* theWrappedObject, QWidget*  widget);
    void shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv);
    void showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event);
    QSize  sizeHint(QGraphicsView* theWrappedObject) const;
    QTransform  transform(QGraphicsView* theWrappedObject) const;
    QGraphicsView::ViewportAnchor  transformationAnchor(QGraphicsView* theWrappedObject) const;
    void translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy);
    bool  viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event);
    QTransform  viewportTransform(QGraphicsView* theWrappedObject) const;
    QGraphicsView::ViewportUpdateMode  viewportUpdateMode(QGraphicsView* theWrappedObject) const;
    void wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event);
};





class PythonQtShell_QGraphicsWidget : public QGraphicsWidget
{
public:
    PythonQtShell_QGraphicsWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0):QGraphicsWidget(parent, wFlags),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsWidget();

virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  focusNextPrevChild(bool  next);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void initStyleOption(QStyleOption*  option) const;
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual void polishEvent();
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual void setGeometry(const QRectF&  rect);
virtual void showEvent(QShowEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual bool  windowFrameEvent(QEvent*  e);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsWidget : public QGraphicsWidget
{ public:
inline void promoted_changeEvent(QEvent*  event) { QGraphicsWidget::changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QGraphicsWidget::closeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsWidget::event(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsWidget::focusNextPrevChild(next); }
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsWidget::getContentsMargins(left, top, right, bottom); }
inline void promoted_grabKeyboardEvent(QEvent*  event) { QGraphicsWidget::grabKeyboardEvent(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { QGraphicsWidget::grabMouseEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QGraphicsWidget::hideEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverMoveEvent(event); }
inline void promoted_initStyleOption(QStyleOption*  option) const { QGraphicsWidget::initStyleOption(option); }
inline void promoted_moveEvent(QGraphicsSceneMoveEvent*  event) { QGraphicsWidget::moveEvent(event); }
inline void promoted_paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsWidget::paintWindowFrame(painter, option, widget); }
inline void promoted_polishEvent() { QGraphicsWidget::polishEvent(); }
inline QVariant  promoted_propertyChange(const QString&  propertyName, const QVariant&  value) { return QGraphicsWidget::propertyChange(propertyName, value); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsWidget::resizeEvent(event); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsWidget::setGeometry(rect); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsWidget::showEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsWidget::sizeHint(which, constraint); }
inline void promoted_ungrabKeyboardEvent(QEvent*  event) { QGraphicsWidget::ungrabKeyboardEvent(event); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { QGraphicsWidget::ungrabMouseEvent(event); }
inline void promoted_updateGeometry() { QGraphicsWidget::updateGeometry(); }
inline bool  promoted_windowFrameEvent(QEvent*  e) { return QGraphicsWidget::windowFrameEvent(e); }
inline Qt::WindowFrameSection  promoted_windowFrameSectionAt(const QPointF&  pos) const { return QGraphicsWidget::windowFrameSectionAt(pos); }
};

class PythonQtWrapper_QGraphicsWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsWidget::Type};
public slots:
QGraphicsWidget* new_QGraphicsWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0);
void delete_QGraphicsWidget(QGraphicsWidget* obj) { delete obj; } 
    QList<QAction* >  actions(QGraphicsWidget* theWrappedObject) const;
    void addAction(QGraphicsWidget* theWrappedObject, QAction*  action);
    void addActions(QGraphicsWidget* theWrappedObject, QList<QAction* >  actions);
    void adjustSize(QGraphicsWidget* theWrappedObject);
    bool  autoFillBackground(QGraphicsWidget* theWrappedObject) const;
    QRectF  boundingRect(QGraphicsWidget* theWrappedObject) const;
    void changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
    void closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event);
    bool  event(QGraphicsWidget* theWrappedObject, QEvent*  event);
    bool  focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next);
    Qt::FocusPolicy  focusPolicy(QGraphicsWidget* theWrappedObject) const;
    QGraphicsWidget*  focusWidget(QGraphicsWidget* theWrappedObject) const;
    QFont  font(QGraphicsWidget* theWrappedObject) const;
    void getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
    void getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
    void grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
    void grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
    int  grabShortcut(QGraphicsWidget* theWrappedObject, const QKeySequence&  sequence, Qt::ShortcutContext  context = Qt::WindowShortcut);
    void hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event);
    void hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
    void hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
    void initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const;
    void insertAction(QGraphicsWidget* theWrappedObject, QAction*  before, QAction*  action);
    void insertActions(QGraphicsWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
    bool  isActiveWindow(QGraphicsWidget* theWrappedObject) const;
    QGraphicsLayout*  layout(QGraphicsWidget* theWrappedObject) const;
    Qt::LayoutDirection  layoutDirection(QGraphicsWidget* theWrappedObject) const;
    void moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event);
    void paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
    void paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
    QPalette  palette(QGraphicsWidget* theWrappedObject) const;
    void polishEvent(QGraphicsWidget* theWrappedObject);
    QVariant  propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value);
    QRectF  rect(QGraphicsWidget* theWrappedObject) const;
    void releaseShortcut(QGraphicsWidget* theWrappedObject, int  id);
    void removeAction(QGraphicsWidget* theWrappedObject, QAction*  action);
    void resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
    void resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
    void resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
    void setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on = true);
    void setAutoFillBackground(QGraphicsWidget* theWrappedObject, bool  enabled);
    void setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
    void setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy);
    void setFont(QGraphicsWidget* theWrappedObject, const QFont&  font);
    void setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect);
    void setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
    void setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout);
    void setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction);
    void setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette);
    void setShortcutAutoRepeat(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
    void setShortcutEnabled(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
    void setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style);
    void static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second);
    void setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags);
    void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
    void setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title);
    QPainterPath  shape(QGraphicsWidget* theWrappedObject) const;
    void showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event);
    QSizeF  size(QGraphicsWidget* theWrappedObject) const;
    QSizeF  sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
    QStyle*  style(QGraphicsWidget* theWrappedObject) const;
    bool  testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const;
    int  type(QGraphicsWidget* theWrappedObject) const;
    void ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
    void ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
    void unsetLayoutDirection(QGraphicsWidget* theWrappedObject);
    void unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject);
    void updateGeometry(QGraphicsWidget* theWrappedObject);
    Qt::WindowFlags  windowFlags(QGraphicsWidget* theWrappedObject) const;
    bool  windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e);
    QRectF  windowFrameGeometry(QGraphicsWidget* theWrappedObject) const;
    QRectF  windowFrameRect(QGraphicsWidget* theWrappedObject) const;
    Qt::WindowFrameSection  windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const;
    QString  windowTitle(QGraphicsWidget* theWrappedObject) const;
    Qt::WindowType  windowType(QGraphicsWidget* theWrappedObject) const;
};





class PythonQtShell_QGridLayout : public QGridLayout
{
public:
    PythonQtShell_QGridLayout():QGridLayout(),_wrapper(NULL) {};
    PythonQtShell_QGridLayout(QWidget*  parent):QGridLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGridLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual int  count() const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGridLayout : public QGridLayout
{ public:
inline void promoted_addItem(QLayoutItem*  arg__1) { QGridLayout::addItem(arg__1); }
inline int  promoted_count() const { return QGridLayout::count(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QGridLayout::expandingDirections(); }
inline void promoted_invalidate() { QGridLayout::invalidate(); }
inline QLayoutItem*  promoted_itemAt(int  index) const { return QGridLayout::itemAt(index); }
inline QSize  promoted_maximumSize() const { return QGridLayout::maximumSize(); }
inline QSize  promoted_minimumSize() const { return QGridLayout::minimumSize(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QGridLayout::setGeometry(arg__1); }
inline QLayoutItem*  promoted_takeAt(int  index) { return QGridLayout::takeAt(index); }
};

class PythonQtWrapper_QGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGridLayout* new_QGridLayout();
QGridLayout* new_QGridLayout(QWidget*  parent);
void delete_QGridLayout(QGridLayout* obj) { delete obj; } 
    void addItem(QGridLayout* theWrappedObject, QLayoutItem*  arg__1);
    void addItem(QGridLayout* theWrappedObject, QLayoutItem*  item, int  row, int  column, int  rowSpan = 1, int  columnSpan = 1, Qt::Alignment  arg__6 = 0);
    void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
    void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
    void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
    void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
    QRect  cellRect(QGridLayout* theWrappedObject, int  row, int  column) const;
    int  columnCount(QGridLayout* theWrappedObject) const;
    int  columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const;
    int  columnStretch(QGridLayout* theWrappedObject, int  column) const;
    int  count(QGridLayout* theWrappedObject) const;
    Qt::Orientations  expandingDirections(QGridLayout* theWrappedObject) const;
    void getItemPosition(QGridLayout* theWrappedObject, int  idx, int*  row, int*  column, int*  rowSpan, int*  columnSpan) const;
    bool  hasHeightForWidth(QGridLayout* theWrappedObject) const;
    int  heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
    int  horizontalSpacing(QGridLayout* theWrappedObject) const;
    void invalidate(QGridLayout* theWrappedObject);
    QLayoutItem*  itemAt(QGridLayout* theWrappedObject, int  index) const;
    QLayoutItem*  itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const;
    QSize  maximumSize(QGridLayout* theWrappedObject) const;
    int  minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
    QSize  minimumSize(QGridLayout* theWrappedObject) const;
    Qt::Corner  originCorner(QGridLayout* theWrappedObject) const;
    int  rowCount(QGridLayout* theWrappedObject) const;
    int  rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const;
    int  rowStretch(QGridLayout* theWrappedObject, int  row) const;
    void setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize);
    void setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch);
    void setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient);
    void setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1);
    void setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing);
    void setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1);
    void setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize);
    void setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch);
    void setSpacing(QGridLayout* theWrappedObject, int  spacing);
    void setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing);
    QSize  sizeHint(QGridLayout* theWrappedObject) const;
    int  spacing(QGridLayout* theWrappedObject) const;
    QLayoutItem*  takeAt(QGridLayout* theWrappedObject, int  index);
    int  verticalSpacing(QGridLayout* theWrappedObject) const;
};





class PythonQtShell_QGroupBox : public QGroupBox
{
public:
    PythonQtShell_QGroupBox(QWidget*  parent = 0):QGroupBox(parent),_wrapper(NULL) {};
    PythonQtShell_QGroupBox(const QString&  title, QWidget*  parent = 0):QGroupBox(title, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGroupBox();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGroupBox : public QGroupBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { QGroupBox::changeEvent(event); }
inline void promoted_childEvent(QChildEvent*  event) { QGroupBox::childEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGroupBox::event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGroupBox::focusInEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QGroupBox::mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGroupBox::mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGroupBox::mouseReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QGroupBox::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QGroupBox::resizeEvent(event); }
};

class PythonQtWrapper_QGroupBox : public QObject
{ Q_OBJECT
public:
public slots:
QGroupBox* new_QGroupBox(QWidget*  parent = 0);
QGroupBox* new_QGroupBox(const QString&  title, QWidget*  parent = 0);
void delete_QGroupBox(QGroupBox* obj) { delete obj; } 
    Qt::Alignment  alignment(QGroupBox* theWrappedObject) const;
    void changeEvent(QGroupBox* theWrappedObject, QEvent*  event);
    void childEvent(QGroupBox* theWrappedObject, QChildEvent*  event);
    bool  event(QGroupBox* theWrappedObject, QEvent*  event);
    void focusInEvent(QGroupBox* theWrappedObject, QFocusEvent*  event);
    bool  isCheckable(QGroupBox* theWrappedObject) const;
    bool  isChecked(QGroupBox* theWrappedObject) const;
    bool  isFlat(QGroupBox* theWrappedObject) const;
    QSize  minimumSizeHint(QGroupBox* theWrappedObject) const;
    void mouseMoveEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
    void mousePressEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
    void mouseReleaseEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
    void paintEvent(QGroupBox* theWrappedObject, QPaintEvent*  event);
    void resizeEvent(QGroupBox* theWrappedObject, QResizeEvent*  event);
    void setAlignment(QGroupBox* theWrappedObject, int  alignment);
    void setCheckable(QGroupBox* theWrappedObject, bool  checkable);
    void setFlat(QGroupBox* theWrappedObject, bool  flat);
    void setTitle(QGroupBox* theWrappedObject, const QString&  title);
    QString  title(QGroupBox* theWrappedObject) const;
};





class PythonQtShell_QGuiApplication : public QGuiApplication
{
public:
    PythonQtShell_QGuiApplication(int&  argc, char**  argv, int  arg__3 = ApplicationFlags):QGuiApplication(argc, argv, arg__3),_wrapper(NULL) {};

   ~PythonQtShell_QGuiApplication();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  notify(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGuiApplication : public QGuiApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QGuiApplication::event(arg__1); }
inline bool  promoted_notify(QObject*  arg__1, QEvent*  arg__2) { return QGuiApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QGuiApplication : public QObject
{ Q_OBJECT
public:
public slots:
QGuiApplication* new_QGuiApplication(int&  argc, char**  argv);
void delete_QGuiApplication(QGuiApplication* obj) { delete obj; } 
    QString  static_QGuiApplication_applicationDisplayName();
    void static_QGuiApplication_changeOverrideCursor(const QCursor&  arg__1);
    QClipboard*  static_QGuiApplication_clipboard();
    bool  static_QGuiApplication_desktopSettingsAware();
    qreal  devicePixelRatio(QGuiApplication* theWrappedObject) const;
    bool  event(QGuiApplication* theWrappedObject, QEvent*  arg__1);
    int  static_QGuiApplication_exec();
    QObject*  static_QGuiApplication_focusObject();
    QFont  static_QGuiApplication_font();
    bool  static_QGuiApplication_isLeftToRight();
    bool  static_QGuiApplication_isRightToLeft();
    bool  isSavingSession(QGuiApplication* theWrappedObject) const;
    bool  isSessionRestored(QGuiApplication* theWrappedObject) const;
    Qt::KeyboardModifiers  static_QGuiApplication_keyboardModifiers();
    Qt::LayoutDirection  static_QGuiApplication_layoutDirection();
    Qt::MouseButtons  static_QGuiApplication_mouseButtons();
    bool  notify(QGuiApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
    QCursor*  static_QGuiApplication_overrideCursor();
    QPalette  static_QGuiApplication_palette();
    QString  static_QGuiApplication_platformName();
    Qt::KeyboardModifiers  static_QGuiApplication_queryKeyboardModifiers();
    bool  static_QGuiApplication_quitOnLastWindowClosed();
    void static_QGuiApplication_restoreOverrideCursor();
    QString  sessionId(QGuiApplication* theWrappedObject) const;
    QString  sessionKey(QGuiApplication* theWrappedObject) const;
    void static_QGuiApplication_setApplicationDisplayName(const QString&  name);
    void static_QGuiApplication_setDesktopSettingsAware(bool  on);
    void static_QGuiApplication_setFont(const QFont&  arg__1);
    void static_QGuiApplication_setLayoutDirection(Qt::LayoutDirection  direction);
    void static_QGuiApplication_setOverrideCursor(const QCursor&  arg__1);
    void static_QGuiApplication_setPalette(const QPalette&  pal);
    void static_QGuiApplication_setQuitOnLastWindowClosed(bool  quit);
};





class PythonQtShell_QHBoxLayout : public QHBoxLayout
{
public:
    PythonQtShell_QHBoxLayout():QHBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QHBoxLayout(QWidget*  parent):QHBoxLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHBoxLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual int  count() const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QHBoxLayout* new_QHBoxLayout();
QHBoxLayout* new_QHBoxLayout(QWidget*  parent);
void delete_QHBoxLayout(QHBoxLayout* obj) { delete obj; } 
};





class PythonQtShell_QHeaderView : public QHeaderView
{
public:
    PythonQtShell_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0):QHeaderView(orientation, parent),_wrapper(NULL) {};

   ~PythonQtShell_QHeaderView();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  old);
virtual void customEvent(QEvent*  arg__1);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual QSize  sectionSizeFromContents(int  logicalIndex) const;
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  e);
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHeaderView : public QHeaderView
{ public:
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { QHeaderView::currentChanged(current, old); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { QHeaderView::dataChanged(topLeft, bottomRight, roles); }
inline void promoted_doItemsLayout() { QHeaderView::doItemsLayout(); }
inline bool  promoted_event(QEvent*  e) { return QHeaderView::event(e); }
inline int  promoted_horizontalOffset() const { return QHeaderView::horizontalOffset(); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QHeaderView::indexAt(p); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QHeaderView::isIndexHidden(index); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QHeaderView::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QHeaderView::mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QHeaderView::mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QHeaderView::mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QHeaderView::paintEvent(e); }
inline void promoted_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { QHeaderView::paintSection(painter, rect, logicalIndex); }
inline void promoted_reset() { QHeaderView::reset(); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QHeaderView::rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QHeaderView::scrollContentsBy(dx, dy); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { QHeaderView::scrollTo(index, hint); }
inline QSize  promoted_sectionSizeFromContents(int  logicalIndex) const { return QHeaderView::sectionSizeFromContents(logicalIndex); }
inline void promoted_setModel(QAbstractItemModel*  model) { QHeaderView::setModel(model); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags) { QHeaderView::setSelection(rect, flags); }
inline void promoted_updateGeometries() { QHeaderView::updateGeometries(); }
inline int  promoted_verticalOffset() const { return QHeaderView::verticalOffset(); }
inline bool  promoted_viewportEvent(QEvent*  e) { return QHeaderView::viewportEvent(e); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QHeaderView::visualRect(index); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QHeaderView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QHeaderView : public QObject
{ Q_OBJECT
public:
public slots:
QHeaderView* new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QHeaderView(QHeaderView* obj) { delete obj; } 
    bool  cascadingSectionResizes(QHeaderView* theWrappedObject) const;
    int  count(QHeaderView* theWrappedObject) const;
    void currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old);
    void dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
    Qt::Alignment  defaultAlignment(QHeaderView* theWrappedObject) const;
    int  defaultSectionSize(QHeaderView* theWrappedObject) const;
    void doItemsLayout(QHeaderView* theWrappedObject);
    bool  event(QHeaderView* theWrappedObject, QEvent*  e);
    int  hiddenSectionCount(QHeaderView* theWrappedObject) const;
    void hideSection(QHeaderView* theWrappedObject, int  logicalIndex);
    bool  highlightSections(QHeaderView* theWrappedObject) const;
    int  horizontalOffset(QHeaderView* theWrappedObject) const;
    QModelIndex  indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const;
    bool  isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
    bool  isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const;
    bool  isSortIndicatorShown(QHeaderView* theWrappedObject) const;
    int  length(QHeaderView* theWrappedObject) const;
    int  logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const;
    int  logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const;
    int  logicalIndexAt(QHeaderView* theWrappedObject, int  position) const;
    int  logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const;
    int  minimumSectionSize(QHeaderView* theWrappedObject) const;
    void mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
    void mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
    void mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
    void mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
    void moveSection(QHeaderView* theWrappedObject, int  from, int  to);
    int  offset(QHeaderView* theWrappedObject) const;
    Qt::Orientation  orientation(QHeaderView* theWrappedObject) const;
    void paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e);
    void paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
    void reset(QHeaderView* theWrappedObject);
    void resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size);
    void resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
    bool  restoreState(QHeaderView* theWrappedObject, const QByteArray&  state);
    void rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
    QByteArray  saveState(QHeaderView* theWrappedObject) const;
    void scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy);
    void scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
    int  sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
    QHeaderView::ResizeMode  sectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const;
    int  sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const;
    QSize  sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const;
    int  sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const;
    int  sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
    bool  sectionsClickable(QHeaderView* theWrappedObject) const;
    bool  sectionsHidden(QHeaderView* theWrappedObject) const;
    bool  sectionsMovable(QHeaderView* theWrappedObject) const;
    bool  sectionsMoved(QHeaderView* theWrappedObject) const;
    void setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable);
    void setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment);
    void setDefaultSectionSize(QHeaderView* theWrappedObject, int  size);
    void setHighlightSections(QHeaderView* theWrappedObject, bool  highlight);
    void setMinimumSectionSize(QHeaderView* theWrappedObject, int  size);
    void setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model);
    void setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide);
    void setSectionResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
    void setSectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode);
    void setSectionsClickable(QHeaderView* theWrappedObject, bool  clickable);
    void setSectionsMovable(QHeaderView* theWrappedObject, bool  movable);
    void setSelection(QHeaderView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  flags);
    void setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order);
    void setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show);
    void setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch);
    void showSection(QHeaderView* theWrappedObject, int  logicalIndex);
    QSize  sizeHint(QHeaderView* theWrappedObject) const;
    Qt::SortOrder  sortIndicatorOrder(QHeaderView* theWrappedObject) const;
    int  sortIndicatorSection(QHeaderView* theWrappedObject) const;
    bool  stretchLastSection(QHeaderView* theWrappedObject) const;
    int  stretchSectionCount(QHeaderView* theWrappedObject) const;
    void swapSections(QHeaderView* theWrappedObject, int  first, int  second);
    void updateGeometries(QHeaderView* theWrappedObject);
    int  verticalOffset(QHeaderView* theWrappedObject) const;
    bool  viewportEvent(QHeaderView* theWrappedObject, QEvent*  e);
    int  visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const;
    int  visualIndexAt(QHeaderView* theWrappedObject, int  position) const;
    QRect  visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
    QRegion  visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const;
};





class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; } 
    const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
    int  globalX(QHelpEvent* theWrappedObject) const;
    int  globalY(QHelpEvent* theWrappedObject) const;
    const QPoint*  pos(QHelpEvent* theWrappedObject) const;
    int  x(QHelpEvent* theWrappedObject) const;
    int  y(QHelpEvent* theWrappedObject) const;
};





class PythonQtWrapper_QHideEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHideEvent* new_QHideEvent();
void delete_QHideEvent(QHideEvent* obj) { delete obj; } 
};





class PythonQtShell_QHoverEvent : public QHoverEvent
{
public:
    PythonQtShell_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QHoverEvent(type, pos, oldPos, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QHoverEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; } 
    QPoint  oldPos(QHoverEvent* theWrappedObject) const;
    const QPointF*  oldPosF(QHoverEvent* theWrappedObject) const;
    QPoint  pos(QHoverEvent* theWrappedObject) const;
    const QPointF*  posF(QHoverEvent* theWrappedObject) const;
};





class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public slots:
QIconDragEvent* new_QIconDragEvent();
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; } 
};





class PythonQtShell_QImageIOHandler : public QImageIOHandler
{
public:
    PythonQtShell_QImageIOHandler():QImageIOHandler(),_wrapper(NULL) {};

   ~PythonQtShell_QImageIOHandler();

virtual bool  canRead() const;
virtual int  currentImageNumber() const;
virtual QRect  currentImageRect() const;
virtual int  imageCount() const;
virtual bool  jumpToImage(int  imageNumber);
virtual bool  jumpToNextImage();
virtual int  loopCount() const;
virtual QByteArray  name() const;
virtual int  nextImageDelay() const;
virtual QVariant  option(QImageIOHandler::ImageOption  option) const;
virtual bool  read(QImage*  image);
virtual void setOption(QImageIOHandler::ImageOption  option, const QVariant&  value);
virtual bool  supportsOption(QImageIOHandler::ImageOption  option) const;
virtual bool  write(const QImage&  image);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QImageIOHandler : public QImageIOHandler
{ public:
inline int  promoted_currentImageNumber() const { return QImageIOHandler::currentImageNumber(); }
inline QRect  promoted_currentImageRect() const { return QImageIOHandler::currentImageRect(); }
inline int  promoted_imageCount() const { return QImageIOHandler::imageCount(); }
inline bool  promoted_jumpToImage(int  imageNumber) { return QImageIOHandler::jumpToImage(imageNumber); }
inline bool  promoted_jumpToNextImage() { return QImageIOHandler::jumpToNextImage(); }
inline int  promoted_loopCount() const { return QImageIOHandler::loopCount(); }
inline int  promoted_nextImageDelay() const { return QImageIOHandler::nextImageDelay(); }
inline QVariant  promoted_option(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::option(option); }
inline void promoted_setOption(QImageIOHandler::ImageOption  option, const QVariant&  value) { QImageIOHandler::setOption(option, value); }
inline bool  promoted_supportsOption(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::supportsOption(option); }
inline bool  promoted_write(const QImage&  image) { return QImageIOHandler::write(image); }
};

class PythonQtWrapper_QImageIOHandler : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageOption )
enum ImageOption{
  Size = QImageIOHandler::Size,   ClipRect = QImageIOHandler::ClipRect,   Description = QImageIOHandler::Description,   ScaledClipRect = QImageIOHandler::ScaledClipRect,   ScaledSize = QImageIOHandler::ScaledSize,   CompressionRatio = QImageIOHandler::CompressionRatio,   Gamma = QImageIOHandler::Gamma,   Quality = QImageIOHandler::Quality,   Name = QImageIOHandler::Name,   SubType = QImageIOHandler::SubType,   IncrementalReading = QImageIOHandler::IncrementalReading,   Endianness = QImageIOHandler::Endianness,   Animation = QImageIOHandler::Animation,   BackgroundColor = QImageIOHandler::BackgroundColor,   ImageFormat = QImageIOHandler::ImageFormat};
public slots:
QImageIOHandler* new_QImageIOHandler();
void delete_QImageIOHandler(QImageIOHandler* obj) { delete obj; } 
    int  currentImageNumber(QImageIOHandler* theWrappedObject) const;
    QRect  currentImageRect(QImageIOHandler* theWrappedObject) const;
    QIODevice*  device(QImageIOHandler* theWrappedObject) const;
    QByteArray  format(QImageIOHandler* theWrappedObject) const;
    int  imageCount(QImageIOHandler* theWrappedObject) const;
    bool  jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber);
    bool  jumpToNextImage(QImageIOHandler* theWrappedObject);
    int  loopCount(QImageIOHandler* theWrappedObject) const;
    int  nextImageDelay(QImageIOHandler* theWrappedObject) const;
    QVariant  option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
    void setDevice(QImageIOHandler* theWrappedObject, QIODevice*  device);
    void setFormat(QImageIOHandler* theWrappedObject, const QByteArray&  format);
    void setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value);
    bool  supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
    bool  write(QImageIOHandler* theWrappedObject, const QImage&  image);
};





class PythonQtShell_QImageIOPlugin : public QImageIOPlugin
{
public:
    PythonQtShell_QImageIOPlugin(QObject*  parent = 0):QImageIOPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QImageIOPlugin();

virtual QImageIOPlugin::Capabilities  capabilities(QIODevice*  device, const QByteArray&  format) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual QImageIOHandler*  create(QIODevice*  device, const QByteArray&  format = QByteArray()) const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QImageIOPlugin : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
Q_FLAGS(Capabilities )
enum Capability{
  CanRead = QImageIOPlugin::CanRead,   CanWrite = QImageIOPlugin::CanWrite,   CanReadIncremental = QImageIOPlugin::CanReadIncremental};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QImageIOPlugin* new_QImageIOPlugin(QObject*  parent = 0);
void delete_QImageIOPlugin(QImageIOPlugin* obj) { delete obj; } 
};





class PythonQtWrapper_QImageReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageReaderError )
enum ImageReaderError{
  UnknownError = QImageReader::UnknownError,   FileNotFoundError = QImageReader::FileNotFoundError,   DeviceError = QImageReader::DeviceError,   UnsupportedFormatError = QImageReader::UnsupportedFormatError,   InvalidDataError = QImageReader::InvalidDataError};
public slots:
QImageReader* new_QImageReader();
QImageReader* new_QImageReader(QIODevice*  device, const QByteArray&  format = QByteArray());
QImageReader* new_QImageReader(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageReader(QImageReader* obj) { delete obj; } 
    bool  autoDetectImageFormat(QImageReader* theWrappedObject) const;
    QColor  backgroundColor(QImageReader* theWrappedObject) const;
    bool  canRead(QImageReader* theWrappedObject) const;
    QRect  clipRect(QImageReader* theWrappedObject) const;
    int  currentImageNumber(QImageReader* theWrappedObject) const;
    QRect  currentImageRect(QImageReader* theWrappedObject) const;
    bool  decideFormatFromContent(QImageReader* theWrappedObject) const;
    QIODevice*  device(QImageReader* theWrappedObject) const;
    QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
    QString  errorString(QImageReader* theWrappedObject) const;
    QString  fileName(QImageReader* theWrappedObject) const;
    QByteArray  format(QImageReader* theWrappedObject) const;
    int  imageCount(QImageReader* theWrappedObject) const;
    QImage::Format  imageFormat(QImageReader* theWrappedObject) const;
    QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
    QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
    bool  jumpToImage(QImageReader* theWrappedObject, int  imageNumber);
    bool  jumpToNextImage(QImageReader* theWrappedObject);
    int  loopCount(QImageReader* theWrappedObject) const;
    int  nextImageDelay(QImageReader* theWrappedObject) const;
    int  quality(QImageReader* theWrappedObject) const;
    QImage  read(QImageReader* theWrappedObject);
    QRect  scaledClipRect(QImageReader* theWrappedObject) const;
    QSize  scaledSize(QImageReader* theWrappedObject) const;
    void setAutoDetectImageFormat(QImageReader* theWrappedObject, bool  enabled);
    void setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color);
    void setClipRect(QImageReader* theWrappedObject, const QRect&  rect);
    void setDecideFormatFromContent(QImageReader* theWrappedObject, bool  ignored);
    void setDevice(QImageReader* theWrappedObject, QIODevice*  device);
    void setFileName(QImageReader* theWrappedObject, const QString&  fileName);
    void setFormat(QImageReader* theWrappedObject, const QByteArray&  format);
    void setQuality(QImageReader* theWrappedObject, int  quality);
    void setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect);
    void setScaledSize(QImageReader* theWrappedObject, const QSize&  size);
    QSize  size(QImageReader* theWrappedObject) const;
    QList<QByteArray >  static_QImageReader_supportedImageFormats();
    bool  supportsAnimation(QImageReader* theWrappedObject) const;
    bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
    QString  text(QImageReader* theWrappedObject, const QString&  key) const;
    QStringList  textKeys(QImageReader* theWrappedObject) const;
};





class PythonQtWrapper_QImageWriter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageWriterError )
enum ImageWriterError{
  UnknownError = QImageWriter::UnknownError,   DeviceError = QImageWriter::DeviceError,   UnsupportedFormatError = QImageWriter::UnsupportedFormatError};
public slots:
QImageWriter* new_QImageWriter();
QImageWriter* new_QImageWriter(QIODevice*  device, const QByteArray&  format);
QImageWriter* new_QImageWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageWriter(QImageWriter* obj) { delete obj; } 
    bool  canWrite(QImageWriter* theWrappedObject) const;
    int  compression(QImageWriter* theWrappedObject) const;
    QIODevice*  device(QImageWriter* theWrappedObject) const;
    QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
    QString  errorString(QImageWriter* theWrappedObject) const;
    QString  fileName(QImageWriter* theWrappedObject) const;
    QByteArray  format(QImageWriter* theWrappedObject) const;
    float  gamma(QImageWriter* theWrappedObject) const;
    int  quality(QImageWriter* theWrappedObject) const;
    void setCompression(QImageWriter* theWrappedObject, int  compression);
    void setDevice(QImageWriter* theWrappedObject, QIODevice*  device);
    void setFileName(QImageWriter* theWrappedObject, const QString&  fileName);
    void setFormat(QImageWriter* theWrappedObject, const QByteArray&  format);
    void setGamma(QImageWriter* theWrappedObject, float  gamma);
    void setQuality(QImageWriter* theWrappedObject, int  quality);
    void setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text);
    QList<QByteArray >  static_QImageWriter_supportedImageFormats();
    bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
    bool  write(QImageWriter* theWrappedObject, const QImage&  image);
};





class PythonQtShell_QInputDialog : public QInputDialog
{
public:
    PythonQtShell_QInputDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QInputDialog(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QInputDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  result);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void open();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QInputDialog : public QInputDialog
{ public:
inline void promoted_done(int  result) { QInputDialog::done(result); }
inline void promoted_open() { QInputDialog::open(); }
};

class PythonQtWrapper_QInputDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InputDialogOption InputMode )
Q_FLAGS(InputDialogOptions )
enum InputDialogOption{
  NoButtons = QInputDialog::NoButtons,   UseListViewForComboBoxItems = QInputDialog::UseListViewForComboBoxItems};
enum InputMode{
  TextInput = QInputDialog::TextInput,   IntInput = QInputDialog::IntInput,   DoubleInput = QInputDialog::DoubleInput};
Q_DECLARE_FLAGS(InputDialogOptions, InputDialogOption)
public slots:
QInputDialog* new_QInputDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QInputDialog(QInputDialog* obj) { delete obj; } 
    QString  cancelButtonText(QInputDialog* theWrappedObject) const;
    QStringList  comboBoxItems(QInputDialog* theWrappedObject) const;
    void done(QInputDialog* theWrappedObject, int  result);
    int  doubleDecimals(QInputDialog* theWrappedObject) const;
    double  doubleMaximum(QInputDialog* theWrappedObject) const;
    double  doubleMinimum(QInputDialog* theWrappedObject) const;
    double  doubleValue(QInputDialog* theWrappedObject) const;
    double  static_QInputDialog_getDouble(QWidget*  parent, const QString&  title, const QString&  label, double  value = 0, double  minValue = -2147483647, double  maxValue = 2147483647, int  decimals = 1, bool*  ok = 0, Qt::WindowFlags  flags = 0);
    int  static_QInputDialog_getInt(QWidget*  parent, const QString&  title, const QString&  label, int  value = 0, int  minValue = -2147483647, int  maxValue = 2147483647, int  step = 1, bool*  ok = 0, Qt::WindowFlags  flags = 0);
    QString  static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  items, int  current = 0, bool  editable = true, bool*  ok = 0, Qt::WindowFlags  flags = 0, Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
    QString  static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo = QLineEdit::Normal, const QString&  text = QString(), bool*  ok = 0, Qt::WindowFlags  flags = 0, Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
    QInputDialog::InputMode  inputMode(QInputDialog* theWrappedObject) const;
    int  intMaximum(QInputDialog* theWrappedObject) const;
    int  intMinimum(QInputDialog* theWrappedObject) const;
    int  intStep(QInputDialog* theWrappedObject) const;
    int  intValue(QInputDialog* theWrappedObject) const;
    bool  isComboBoxEditable(QInputDialog* theWrappedObject) const;
    QString  labelText(QInputDialog* theWrappedObject) const;
    QSize  minimumSizeHint(QInputDialog* theWrappedObject) const;
    QString  okButtonText(QInputDialog* theWrappedObject) const;
    void open(QInputDialog* theWrappedObject);
    void open(QInputDialog* theWrappedObject, QObject*  receiver, const char*  member);
    QInputDialog::InputDialogOptions  options(QInputDialog* theWrappedObject) const;
    void setCancelButtonText(QInputDialog* theWrappedObject, const QString&  text);
    void setComboBoxEditable(QInputDialog* theWrappedObject, bool  editable);
    void setComboBoxItems(QInputDialog* theWrappedObject, const QStringList&  items);
    void setDoubleDecimals(QInputDialog* theWrappedObject, int  decimals);
    void setDoubleMaximum(QInputDialog* theWrappedObject, double  max);
    void setDoubleMinimum(QInputDialog* theWrappedObject, double  min);
    void setDoubleRange(QInputDialog* theWrappedObject, double  min, double  max);
    void setDoubleValue(QInputDialog* theWrappedObject, double  value);
    void setInputMode(QInputDialog* theWrappedObject, QInputDialog::InputMode  mode);
    void setIntMaximum(QInputDialog* theWrappedObject, int  max);
    void setIntMinimum(QInputDialog* theWrappedObject, int  min);
    void setIntRange(QInputDialog* theWrappedObject, int  min, int  max);
    void setIntStep(QInputDialog* theWrappedObject, int  step);
    void setIntValue(QInputDialog* theWrappedObject, int  value);
    void setLabelText(QInputDialog* theWrappedObject, const QString&  text);
    void setOkButtonText(QInputDialog* theWrappedObject, const QString&  text);
    void setOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option, bool  on = true);
    void setOptions(QInputDialog* theWrappedObject, QInputDialog::InputDialogOptions  options);
    void setTextEchoMode(QInputDialog* theWrappedObject, QLineEdit::EchoMode  mode);
    void setTextValue(QInputDialog* theWrappedObject, const QString&  text);
    void setVisible(QInputDialog* theWrappedObject, bool  visible);
    QSize  sizeHint(QInputDialog* theWrappedObject) const;
    bool  testOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option) const;
    QLineEdit::EchoMode  textEchoMode(QInputDialog* theWrappedObject) const;
    QString  textValue(QInputDialog* theWrappedObject) const;
};





class PythonQtShell_QInputEvent : public QInputEvent
{
public:
    PythonQtShell_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QInputEvent(type, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QInputEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputEvent* new_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QInputEvent(QInputEvent* obj) { delete obj; } 
    Qt::KeyboardModifiers  modifiers(QInputEvent* theWrappedObject) const;
    void setModifiers(QInputEvent* theWrappedObject, Qt::KeyboardModifiers  amodifiers);
    void setTimestamp(QInputEvent* theWrappedObject, ulong  atimestamp);
    ulong  timestamp(QInputEvent* theWrappedObject) const;
};





class PythonQtShell_QIntValidator : public QIntValidator
{
public:
    PythonQtShell_QIntValidator(QObject*  parent = 0):QIntValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QIntValidator(int  bottom, int  top, QObject*  parent = 0):QIntValidator(bottom, top, parent),_wrapper(NULL) {};

   ~PythonQtShell_QIntValidator();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  input) const;
virtual void setRange(int  bottom, int  top);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIntValidator : public QIntValidator
{ public:
inline void promoted_fixup(QString&  input) const { QIntValidator::fixup(input); }
inline void promoted_setRange(int  bottom, int  top) { QIntValidator::setRange(bottom, top); }
inline QValidator::State  promoted_validate(QString&  arg__1, int&  arg__2) const { return QIntValidator::validate(arg__1, arg__2); }
};

class PythonQtWrapper_QIntValidator : public QObject
{ Q_OBJECT
public:
public slots:
QIntValidator* new_QIntValidator(QObject*  parent = 0);
QIntValidator* new_QIntValidator(int  bottom, int  top, QObject*  parent = 0);
void delete_QIntValidator(QIntValidator* obj) { delete obj; } 
    int  bottom(QIntValidator* theWrappedObject) const;
    void fixup(QIntValidator* theWrappedObject, QString&  input) const;
    void setBottom(QIntValidator* theWrappedObject, int  arg__1);
    void setRange(QIntValidator* theWrappedObject, int  bottom, int  top);
    void setTop(QIntValidator* theWrappedObject, int  arg__1);
    int  top(QIntValidator* theWrappedObject) const;
    QValidator::State  validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
};





class PythonQtShell_QItemDelegate : public QItemDelegate
{
public:
    PythonQtShell_QItemDelegate(QObject*  parent = 0):QItemDelegate(parent),_wrapper(NULL) {};

   ~PythonQtShell_QItemDelegate();

virtual void childEvent(QChildEvent*  arg__1);
virtual QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void customEvent(QEvent*  arg__1);
virtual void destroyEditor(QWidget*  editor, const QModelIndex&  index) const;
virtual void drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
virtual void drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
virtual void drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
virtual void drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
virtual bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual bool  helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual QVector<int >  paintingRoles() const;
virtual void setEditorData(QWidget*  editor, const QModelIndex&  index) const;
virtual void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
virtual QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemDelegate : public QItemDelegate
{ public:
inline QWidget*  promoted_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::createEditor(parent, option, index); }
inline void promoted_drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const { QItemDelegate::drawCheck(painter, option, rect, state); }
inline void promoted_drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const { QItemDelegate::drawDecoration(painter, option, rect, pixmap); }
inline void promoted_drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const { QItemDelegate::drawDisplay(painter, option, rect, text); }
inline void promoted_drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const { QItemDelegate::drawFocus(painter, option, rect); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QItemDelegate::editorEvent(event, model, option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QItemDelegate::eventFilter(object, event); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::paint(painter, option, index); }
inline void promoted_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QItemDelegate::setEditorData(editor, index); }
inline void promoted_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QItemDelegate::setModelData(editor, model, index); }
inline QSize  promoted_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::sizeHint(option, index); }
inline void promoted_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QItemDelegate* new_QItemDelegate(QObject*  parent = 0);
void delete_QItemDelegate(QItemDelegate* obj) { delete obj; } 
    QWidget*  createEditor(QItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
    void drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
    void drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
    void drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
    void drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
    bool  editorEvent(QItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
    bool  eventFilter(QItemDelegate* theWrappedObject, QObject*  object, QEvent*  event);
    bool  hasClipping(QItemDelegate* theWrappedObject) const;
    QItemEditorFactory*  itemEditorFactory(QItemDelegate* theWrappedObject) const;
    void paint(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
    void setClipping(QItemDelegate* theWrappedObject, bool  clip);
    void setEditorData(QItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
    void setItemEditorFactory(QItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
    void setModelData(QItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
    QSize  sizeHint(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
    void updateEditorGeometry(QItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
};





class PythonQtShell_QItemEditorCreatorBase : public QItemEditorCreatorBase
{
public:
    PythonQtShell_QItemEditorCreatorBase():QItemEditorCreatorBase(),_wrapper(NULL) {};

   ~PythonQtShell_QItemEditorCreatorBase();

virtual QWidget*  createWidget(QWidget*  parent) const;
virtual QByteArray  valuePropertyName() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QItemEditorCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorCreatorBase* new_QItemEditorCreatorBase();
void delete_QItemEditorCreatorBase(QItemEditorCreatorBase* obj) { delete obj; } 
};





class PythonQtShell_QItemEditorFactory : public QItemEditorFactory
{
public:
    PythonQtShell_QItemEditorFactory():QItemEditorFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QItemEditorFactory();

virtual QWidget*  createEditor(int  userType, QWidget*  parent) const;
virtual QByteArray  valuePropertyName(int  userType) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemEditorFactory : public QItemEditorFactory
{ public:
inline QWidget*  promoted_createEditor(int  userType, QWidget*  parent) const { return QItemEditorFactory::createEditor(userType, parent); }
inline QByteArray  promoted_valuePropertyName(int  userType) const { return QItemEditorFactory::valuePropertyName(userType); }
};

class PythonQtWrapper_QItemEditorFactory : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorFactory* new_QItemEditorFactory();
void delete_QItemEditorFactory(QItemEditorFactory* obj) { delete obj; } 
    QWidget*  createEditor(QItemEditorFactory* theWrappedObject, int  userType, QWidget*  parent) const;
    const QItemEditorFactory*  static_QItemEditorFactory_defaultFactory();
    void registerEditor(QItemEditorFactory* theWrappedObject, int  userType, QItemEditorCreatorBase*  creator);
    void static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory);
    QByteArray  valuePropertyName(QItemEditorFactory* theWrappedObject, int  userType) const;
};





class PythonQtWrapper_QItemSelection : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelection* new_QItemSelection();
QItemSelection* new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
QItemSelection* new_QItemSelection(const QItemSelection& other) {
QItemSelection* a = new QItemSelection();
*((QItemSelection*)a) = other;
return a; }
void delete_QItemSelection(QItemSelection* obj) { delete obj; } 
    void append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
    void append(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  t);
    const QItemSelectionRange*  at(QItemSelection* theWrappedObject, int  i) const;
    const QItemSelectionRange*  back(QItemSelection* theWrappedObject) const;
    void clear(QItemSelection* theWrappedObject);
    bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
    int  count(QItemSelection* theWrappedObject) const;
    int  count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
    void detachShared(QItemSelection* theWrappedObject);
    bool  empty(QItemSelection* theWrappedObject) const;
    bool  endsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
    const QItemSelectionRange*  first(QItemSelection* theWrappedObject) const;
    QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector);
    const QItemSelectionRange*  front(QItemSelection* theWrappedObject) const;
    int  indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
    QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
    bool  isEmpty(QItemSelection* theWrappedObject) const;
    bool  isSharedWith(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  other) const;
    const QItemSelectionRange*  last(QItemSelection* theWrappedObject) const;
    int  lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
    int  length(QItemSelection* theWrappedObject) const;
    void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
    QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, int  pos, int  length) const;
    void move(QItemSelection* theWrappedObject, int  from, int  to);
    bool  __ne__(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
    bool  __eq__(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
    void pop_back(QItemSelection* theWrappedObject);
    void pop_front(QItemSelection* theWrappedObject);
    void prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
    void push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
    void push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
    int  removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
    void removeAt(QItemSelection* theWrappedObject, int  i);
    void removeFirst(QItemSelection* theWrappedObject);
    void removeLast(QItemSelection* theWrappedObject);
    bool  removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
    void replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t);
    void reserve(QItemSelection* theWrappedObject, int  size);
    void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
    void setSharable(QItemSelection* theWrappedObject, bool  sharable);
    int  size(QItemSelection* theWrappedObject) const;
    void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
    bool  startsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
    void swap(QItemSelection* theWrappedObject, QList<QItemSelectionRange >&  other);
    void swap(QItemSelection* theWrappedObject, int  i, int  j);
    QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, int  i);
    QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
    QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
    QVector<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
    QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i) const;
    QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const;
};





class PythonQtShell_QItemSelectionModel : public QItemSelectionModel
{
public:
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model):QItemSelectionModel(model),_wrapper(NULL) {};
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent):QItemSelectionModel(model, parent),_wrapper(NULL) {};

   ~PythonQtShell_QItemSelectionModel();

virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void clearCurrentIndex();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void reset();
virtual void select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command);
virtual void select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command);
virtual void setCurrentIndex(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemSelectionModel : public QItemSelectionModel
{ public:
inline void promoted_clear() { QItemSelectionModel::clear(); }
inline void promoted_clearCurrentIndex() { QItemSelectionModel::clearCurrentIndex(); }
inline void promoted_reset() { QItemSelectionModel::reset(); }
inline void promoted_select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(selection, command); }
inline void promoted_select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(index, command); }
inline void promoted_setCurrentIndex(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::setCurrentIndex(index, command); }
};

class PythonQtWrapper_QItemSelectionModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectionFlag )
Q_FLAGS(SelectionFlags )
enum SelectionFlag{
  NoUpdate = QItemSelectionModel::NoUpdate,   Clear = QItemSelectionModel::Clear,   Select = QItemSelectionModel::Select,   Deselect = QItemSelectionModel::Deselect,   Toggle = QItemSelectionModel::Toggle,   Current = QItemSelectionModel::Current,   Rows = QItemSelectionModel::Rows,   Columns = QItemSelectionModel::Columns,   SelectCurrent = QItemSelectionModel::SelectCurrent,   ToggleCurrent = QItemSelectionModel::ToggleCurrent,   ClearAndSelect = QItemSelectionModel::ClearAndSelect};
Q_DECLARE_FLAGS(SelectionFlags, SelectionFlag)
public slots:
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model);
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent);
void delete_QItemSelectionModel(QItemSelectionModel* obj) { delete obj; } 
    void clear(QItemSelectionModel* theWrappedObject);
    void clearCurrentIndex(QItemSelectionModel* theWrappedObject);
    bool  columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
    QModelIndex  currentIndex(QItemSelectionModel* theWrappedObject) const;
    bool  hasSelection(QItemSelectionModel* theWrappedObject) const;
    bool  isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
    bool  isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
    bool  isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const;
    const QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject) const;
    void reset(QItemSelectionModel* theWrappedObject);
    bool  rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
    void select(QItemSelectionModel* theWrappedObject, const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command);
    void select(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command);
    QList<QModelIndex >  selectedColumns(QItemSelectionModel* theWrappedObject, int  row = 0) const;
    QList<QModelIndex >  selectedIndexes(QItemSelectionModel* theWrappedObject) const;
    QList<QModelIndex >  selectedRows(QItemSelectionModel* theWrappedObject, int  column = 0) const;
    const QItemSelection  selection(QItemSelectionModel* theWrappedObject) const;
    void setCurrentIndex(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command);
};





class PythonQtWrapper_QItemSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelectionRange* new_QItemSelectionRange();
QItemSelectionRange* new_QItemSelectionRange(const QItemSelectionRange&  other);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  index);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
void delete_QItemSelectionRange(QItemSelectionRange* obj) { delete obj; } 
    int  bottom(QItemSelectionRange* theWrappedObject) const;
    const QPersistentModelIndex*  bottomRight(QItemSelectionRange* theWrappedObject) const;
    bool  contains(QItemSelectionRange* theWrappedObject, const QModelIndex&  index) const;
    bool  contains(QItemSelectionRange* theWrappedObject, int  row, int  column, const QModelIndex&  parentIndex) const;
    int  height(QItemSelectionRange* theWrappedObject) const;
    QList<QModelIndex >  indexes(QItemSelectionRange* theWrappedObject) const;
    QItemSelectionRange  intersected(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
    bool  intersects(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
    bool  isEmpty(QItemSelectionRange* theWrappedObject) const;
    bool  isValid(QItemSelectionRange* theWrappedObject) const;
    int  left(QItemSelectionRange* theWrappedObject) const;
    const QAbstractItemModel*  model(QItemSelectionRange* theWrappedObject) const;
    bool  __ne__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
    bool  __lt__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
    bool  __eq__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
    QModelIndex  parent(QItemSelectionRange* theWrappedObject) const;
    int  right(QItemSelectionRange* theWrappedObject) const;
    int  top(QItemSelectionRange* theWrappedObject) const;
    const QPersistentModelIndex*  topLeft(QItemSelectionRange* theWrappedObject) const;
    int  width(QItemSelectionRange* theWrappedObject) const;
    QString py_toString(QItemSelectionRange*);
};





class PythonQtShell_QKeyEvent : public QKeyEvent
{
public:
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1):QKeyEvent(type, key, modifiers, text, autorep, count),_wrapper(NULL) {};
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1):QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count),_wrapper(NULL) {};

   ~PythonQtShell_QKeyEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QKeyEvent : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
void delete_QKeyEvent(QKeyEvent* obj) { delete obj; } 
    int  count(QKeyEvent* theWrappedObject) const;
    bool  isAutoRepeat(QKeyEvent* theWrappedObject) const;
    int  key(QKeyEvent* theWrappedObject) const;
    bool  matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const;
    Qt::KeyboardModifiers  modifiers(QKeyEvent* theWrappedObject) const;
    unsigned int  nativeModifiers(QKeyEvent* theWrappedObject) const;
    unsigned int  nativeScanCode(QKeyEvent* theWrappedObject) const;
    unsigned int  nativeVirtualKey(QKeyEvent* theWrappedObject) const;
    QString  text(QKeyEvent* theWrappedObject) const;
};





class PythonQtShell_QKeyEventTransition : public QKeyEventTransition
{
public:
    PythonQtShell_QKeyEventTransition(QObject*  object, QEvent::Type  type, int  key, QState*  sourceState = 0):QKeyEventTransition(object, type, key, sourceState),_wrapper(NULL) {};
    PythonQtShell_QKeyEventTransition(QState*  sourceState = 0):QKeyEventTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QKeyEventTransition();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QKeyEventTransition : public QKeyEventTransition
{ public:
inline bool  promoted_eventTest(QEvent*  event) { return QKeyEventTransition::eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { QKeyEventTransition::onTransition(event); }
};

class PythonQtWrapper_QKeyEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEventTransition* new_QKeyEventTransition(QObject*  object, QEvent::Type  type, int  key, QState*  sourceState = 0);
QKeyEventTransition* new_QKeyEventTransition(QState*  sourceState = 0);
void delete_QKeyEventTransition(QKeyEventTransition* obj) { delete obj; } 
    bool  eventTest(QKeyEventTransition* theWrappedObject, QEvent*  event);
    int  key(QKeyEventTransition* theWrappedObject) const;
    Qt::KeyboardModifiers  modifierMask(QKeyEventTransition* theWrappedObject) const;
    void onTransition(QKeyEventTransition* theWrappedObject, QEvent*  event);
    void setKey(QKeyEventTransition* theWrappedObject, int  key);
    void setModifierMask(QKeyEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers);
};


