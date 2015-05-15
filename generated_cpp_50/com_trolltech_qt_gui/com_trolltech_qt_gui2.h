#include <PythonQt.h>
#include <QGesture>
#include <QObject>
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



class PythonQtShell_QGraphicsColorizeEffect : public QGraphicsColorizeEffect
{
public:
    PythonQtShell_QGraphicsColorizeEffect(QObject*  parent = 0):QGraphicsColorizeEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsColorizeEffect();

virtual QRectF  boundingRectFor(const QRectF&  sourceRect) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void draw(QPainter*  painter);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsColorizeEffect : public QGraphicsColorizeEffect
{ public:
inline void promoted_draw(QPainter*  painter) { QGraphicsColorizeEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsColorizeEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsColorizeEffect* new_QGraphicsColorizeEffect(QObject*  parent = 0);
void delete_QGraphicsColorizeEffect(QGraphicsColorizeEffect* obj) { delete obj; } 
    QColor  color(QGraphicsColorizeEffect* theWrappedObject) const;
    void draw(QGraphicsColorizeEffect* theWrappedObject, QPainter*  painter);
    qreal  strength(QGraphicsColorizeEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsDropShadowEffect : public QGraphicsDropShadowEffect
{
public:
    PythonQtShell_QGraphicsDropShadowEffect(QObject*  parent = 0):QGraphicsDropShadowEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsDropShadowEffect();

virtual QRectF  boundingRectFor(const QRectF&  rect) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void draw(QPainter*  painter);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsDropShadowEffect : public QGraphicsDropShadowEffect
{ public:
inline QRectF  promoted_boundingRectFor(const QRectF&  rect) const { return QGraphicsDropShadowEffect::boundingRectFor(rect); }
inline void promoted_draw(QPainter*  painter) { QGraphicsDropShadowEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsDropShadowEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsDropShadowEffect* new_QGraphicsDropShadowEffect(QObject*  parent = 0);
void delete_QGraphicsDropShadowEffect(QGraphicsDropShadowEffect* obj) { delete obj; } 
    qreal  blurRadius(QGraphicsDropShadowEffect* theWrappedObject) const;
    QRectF  boundingRectFor(QGraphicsDropShadowEffect* theWrappedObject, const QRectF&  rect) const;
    QColor  color(QGraphicsDropShadowEffect* theWrappedObject) const;
    void draw(QGraphicsDropShadowEffect* theWrappedObject, QPainter*  painter);
    QPointF  offset(QGraphicsDropShadowEffect* theWrappedObject) const;
    qreal  xOffset(QGraphicsDropShadowEffect* theWrappedObject) const;
    qreal  yOffset(QGraphicsDropShadowEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsEffect : public QGraphicsEffect
{
public:
    PythonQtShell_QGraphicsEffect(QObject*  parent = 0):QGraphicsEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsEffect();

virtual QRectF  boundingRectFor(const QRectF&  sourceRect) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void draw(QPainter*  painter);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsEffect : public QGraphicsEffect
{ public:
inline QRectF  promoted_boundingRectFor(const QRectF&  sourceRect) const { return QGraphicsEffect::boundingRectFor(sourceRect); }
inline void promoted_sourceChanged(QGraphicsEffect::ChangeFlags  flags) { QGraphicsEffect::sourceChanged(flags); }
};

class PythonQtWrapper_QGraphicsEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PixmapPadMode ChangeFlag )
Q_FLAGS(ChangeFlags )
enum PixmapPadMode{
  NoPad = QGraphicsEffect::NoPad,   PadToTransparentBorder = QGraphicsEffect::PadToTransparentBorder,   PadToEffectiveBoundingRect = QGraphicsEffect::PadToEffectiveBoundingRect};
enum ChangeFlag{
  SourceAttached = QGraphicsEffect::SourceAttached,   SourceDetached = QGraphicsEffect::SourceDetached,   SourceBoundingRectChanged = QGraphicsEffect::SourceBoundingRectChanged,   SourceInvalidated = QGraphicsEffect::SourceInvalidated};
Q_DECLARE_FLAGS(ChangeFlags, ChangeFlag)
public slots:
QGraphicsEffect* new_QGraphicsEffect(QObject*  parent = 0);
void delete_QGraphicsEffect(QGraphicsEffect* obj) { delete obj; } 
    QRectF  boundingRect(QGraphicsEffect* theWrappedObject) const;
    QRectF  boundingRectFor(QGraphicsEffect* theWrappedObject, const QRectF&  sourceRect) const;
    bool  isEnabled(QGraphicsEffect* theWrappedObject) const;
    void sourceChanged(QGraphicsEffect* theWrappedObject, QGraphicsEffect::ChangeFlags  flags);
};





class PythonQtShell_QGraphicsEllipseItem : public QGraphicsEllipseItem
{
public:
    PythonQtShell_QGraphicsEllipseItem(QGraphicsItem*  parent = 0):QGraphicsEllipseItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = 0):QGraphicsEllipseItem(rect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0):QGraphicsEllipseItem(x, y, w, h, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsEllipseItem();

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsEllipseItem : public QGraphicsEllipseItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsEllipseItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsEllipseItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsEllipseItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsEllipseItem::Type};
public slots:
QGraphicsEllipseItem* new_QGraphicsEllipseItem(QGraphicsItem*  parent = 0);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = 0);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0);
void delete_QGraphicsEllipseItem(QGraphicsEllipseItem* obj) { delete obj; } 
    QRectF  boundingRect(QGraphicsEllipseItem* theWrappedObject) const;
    bool  contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const;
    bool  isObscuredBy(QGraphicsEllipseItem* theWrappedObject, const QGraphicsItem*  item) const;
    QPainterPath  opaqueArea(QGraphicsEllipseItem* theWrappedObject) const;
    void paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
    QRectF  rect(QGraphicsEllipseItem* theWrappedObject) const;
    void setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect);
    void setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
    void setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
    void setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
    QPainterPath  shape(QGraphicsEllipseItem* theWrappedObject) const;
    int  spanAngle(QGraphicsEllipseItem* theWrappedObject) const;
    int  startAngle(QGraphicsEllipseItem* theWrappedObject) const;
    int  type(QGraphicsEllipseItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsGridLayout : public QGraphicsGridLayout
{
public:
    PythonQtShell_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsGridLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsGridLayout();

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsGridLayout : public QGraphicsGridLayout
{ public:
inline int  promoted_count() const { return QGraphicsGridLayout::count(); }
inline void promoted_invalidate() { QGraphicsGridLayout::invalidate(); }
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsGridLayout::itemAt(index); }
inline void promoted_removeAt(int  index) { QGraphicsGridLayout::removeAt(index); }
};

class PythonQtWrapper_QGraphicsGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsGridLayout* new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsGridLayout(QGraphicsGridLayout* obj) { delete obj; } 
    void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, Qt::Alignment  alignment = 0);
    void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment = 0);
    Qt::Alignment  alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
    Qt::Alignment  columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const;
    int  columnCount(QGraphicsGridLayout* theWrappedObject) const;
    qreal  columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
    qreal  columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
    qreal  columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
    qreal  columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const;
    int  columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const;
    int  count(QGraphicsGridLayout* theWrappedObject) const;
    qreal  horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const;
    void invalidate(QGraphicsGridLayout* theWrappedObject);
    QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const;
    QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const;
    void removeAt(QGraphicsGridLayout* theWrappedObject, int  index);
    void removeItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item);
    Qt::Alignment  rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const;
    int  rowCount(QGraphicsGridLayout* theWrappedObject) const;
    qreal  rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
    qreal  rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
    qreal  rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
    qreal  rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const;
    int  rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const;
    void setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
    void setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment);
    void setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
    void setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
    void setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
    void setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
    void setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing);
    void setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch);
    void setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect);
    void setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
    void setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment);
    void setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
    void setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
    void setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
    void setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
    void setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing);
    void setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch);
    void setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
    void setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
    QSizeF  sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
    qreal  verticalSpacing(QGraphicsGridLayout* theWrappedObject) const;
};





class PythonQtShell_QGraphicsItem : public QGraphicsItem
{
public:
    PythonQtShell_QGraphicsItem(QGraphicsItem*  parent = 0):QGraphicsItem(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsItem();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItem : public QGraphicsItem
{ public:
inline void promoted_advance(int  phase) { QGraphicsItem::advance(phase); }
inline bool  promoted_collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithItem(other, mode); }
inline bool  promoted_collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithPath(path, mode); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsItem::contains(point); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsItem::contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragMoveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dropEvent(event); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsItem::extension(variant); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsItem::focusInEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsItem::focusOutEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverEnterEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsItem::inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsItem::inputMethodQuery(query); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItem::isObscuredBy(item); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsItem::itemChange(change, value); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsItem::keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsItem::keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseReleaseEvent(event); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsItem::opaqueArea(); }
inline bool  promoted_sceneEvent(QEvent*  event) { return QGraphicsItem::sceneEvent(event); }
inline bool  promoted_sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) { return QGraphicsItem::sceneEventFilter(watched, event); }
inline QPainterPath  promoted_shape() const { return QGraphicsItem::shape(); }
inline int  promoted_type() const { return QGraphicsItem::type(); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsItem::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PanelModality enum_1 GraphicsItemFlag CacheMode GraphicsItemChange )
Q_FLAGS(GraphicsItemFlags )
enum PanelModality{
  NonModal = QGraphicsItem::NonModal,   PanelModal = QGraphicsItem::PanelModal,   SceneModal = QGraphicsItem::SceneModal};
enum enum_1{
  Type = QGraphicsItem::Type,   UserType = QGraphicsItem::UserType};
enum GraphicsItemFlag{
  ItemIsMovable = QGraphicsItem::ItemIsMovable,   ItemIsSelectable = QGraphicsItem::ItemIsSelectable,   ItemIsFocusable = QGraphicsItem::ItemIsFocusable,   ItemClipsToShape = QGraphicsItem::ItemClipsToShape,   ItemClipsChildrenToShape = QGraphicsItem::ItemClipsChildrenToShape,   ItemIgnoresTransformations = QGraphicsItem::ItemIgnoresTransformations,   ItemIgnoresParentOpacity = QGraphicsItem::ItemIgnoresParentOpacity,   ItemDoesntPropagateOpacityToChildren = QGraphicsItem::ItemDoesntPropagateOpacityToChildren,   ItemStacksBehindParent = QGraphicsItem::ItemStacksBehindParent,   ItemUsesExtendedStyleOption = QGraphicsItem::ItemUsesExtendedStyleOption,   ItemHasNoContents = QGraphicsItem::ItemHasNoContents,   ItemSendsGeometryChanges = QGraphicsItem::ItemSendsGeometryChanges,   ItemAcceptsInputMethod = QGraphicsItem::ItemAcceptsInputMethod,   ItemNegativeZStacksBehindParent = QGraphicsItem::ItemNegativeZStacksBehindParent,   ItemIsPanel = QGraphicsItem::ItemIsPanel,   ItemIsFocusScope = QGraphicsItem::ItemIsFocusScope,   ItemSendsScenePositionChanges = QGraphicsItem::ItemSendsScenePositionChanges,   ItemStopsClickFocusPropagation = QGraphicsItem::ItemStopsClickFocusPropagation,   ItemStopsFocusHandling = QGraphicsItem::ItemStopsFocusHandling};
enum CacheMode{
  NoCache = QGraphicsItem::NoCache,   ItemCoordinateCache = QGraphicsItem::ItemCoordinateCache,   DeviceCoordinateCache = QGraphicsItem::DeviceCoordinateCache};
enum GraphicsItemChange{
  ItemPositionChange = QGraphicsItem::ItemPositionChange,   ItemMatrixChange = QGraphicsItem::ItemMatrixChange,   ItemVisibleChange = QGraphicsItem::ItemVisibleChange,   ItemEnabledChange = QGraphicsItem::ItemEnabledChange,   ItemSelectedChange = QGraphicsItem::ItemSelectedChange,   ItemParentChange = QGraphicsItem::ItemParentChange,   ItemChildAddedChange = QGraphicsItem::ItemChildAddedChange,   ItemChildRemovedChange = QGraphicsItem::ItemChildRemovedChange,   ItemTransformChange = QGraphicsItem::ItemTransformChange,   ItemPositionHasChanged = QGraphicsItem::ItemPositionHasChanged,   ItemTransformHasChanged = QGraphicsItem::ItemTransformHasChanged,   ItemSceneChange = QGraphicsItem::ItemSceneChange,   ItemVisibleHasChanged = QGraphicsItem::ItemVisibleHasChanged,   ItemEnabledHasChanged = QGraphicsItem::ItemEnabledHasChanged,   ItemSelectedHasChanged = QGraphicsItem::ItemSelectedHasChanged,   ItemParentHasChanged = QGraphicsItem::ItemParentHasChanged,   ItemSceneHasChanged = QGraphicsItem::ItemSceneHasChanged,   ItemCursorChange = QGraphicsItem::ItemCursorChange,   ItemCursorHasChanged = QGraphicsItem::ItemCursorHasChanged,   ItemToolTipChange = QGraphicsItem::ItemToolTipChange,   ItemToolTipHasChanged = QGraphicsItem::ItemToolTipHasChanged,   ItemFlagsChange = QGraphicsItem::ItemFlagsChange,   ItemFlagsHaveChanged = QGraphicsItem::ItemFlagsHaveChanged,   ItemZValueChange = QGraphicsItem::ItemZValueChange,   ItemZValueHasChanged = QGraphicsItem::ItemZValueHasChanged,   ItemOpacityChange = QGraphicsItem::ItemOpacityChange,   ItemOpacityHasChanged = QGraphicsItem::ItemOpacityHasChanged,   ItemScenePositionHasChanged = QGraphicsItem::ItemScenePositionHasChanged,   ItemRotationChange = QGraphicsItem::ItemRotationChange,   ItemRotationHasChanged = QGraphicsItem::ItemRotationHasChanged,   ItemScaleChange = QGraphicsItem::ItemScaleChange,   ItemScaleHasChanged = QGraphicsItem::ItemScaleHasChanged,   ItemTransformOriginPointChange = QGraphicsItem::ItemTransformOriginPointChange,   ItemTransformOriginPointHasChanged = QGraphicsItem::ItemTransformOriginPointHasChanged};
Q_DECLARE_FLAGS(GraphicsItemFlags, GraphicsItemFlag)
public slots:
QGraphicsItem* new_QGraphicsItem(QGraphicsItem*  parent = 0);
void delete_QGraphicsItem(QGraphicsItem* obj) { delete obj; } 
    bool  acceptDrops(QGraphicsItem* theWrappedObject) const;
    bool  acceptHoverEvents(QGraphicsItem* theWrappedObject) const;
    bool  acceptTouchEvents(QGraphicsItem* theWrappedObject) const;
    Qt::MouseButtons  acceptedMouseButtons(QGraphicsItem* theWrappedObject) const;
    void advance(QGraphicsItem* theWrappedObject, int  phase);
    QRegion  boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
    qreal  boundingRegionGranularity(QGraphicsItem* theWrappedObject) const;
    QGraphicsItem::CacheMode  cacheMode(QGraphicsItem* theWrappedObject) const;
    QList<QGraphicsItem* >  childItems(QGraphicsItem* theWrappedObject) const;
    QRectF  childrenBoundingRect(QGraphicsItem* theWrappedObject) const;
    void clearFocus(QGraphicsItem* theWrappedObject);
    QPainterPath  clipPath(QGraphicsItem* theWrappedObject) const;
    bool  collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
    bool  collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
    QList<QGraphicsItem* >  collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
    QGraphicsItem*  commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const;
    bool  contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
    void contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
    QCursor  cursor(QGraphicsItem* theWrappedObject) const;
    QVariant  data(QGraphicsItem* theWrappedObject, int  key) const;
    QTransform  deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const;
    void dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
    void dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
    void dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
    void dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
    qreal  effectiveOpacity(QGraphicsItem* theWrappedObject) const;
    void ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF(), int  xmargin = 50, int  ymargin = 50);
    void ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
    QVariant  extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const;
    bool  filtersChildEvents(QGraphicsItem* theWrappedObject) const;
    QGraphicsItem::GraphicsItemFlags  flags(QGraphicsItem* theWrappedObject) const;
    void focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
    QGraphicsItem*  focusItem(QGraphicsItem* theWrappedObject) const;
    void focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
    QGraphicsItem*  focusProxy(QGraphicsItem* theWrappedObject) const;
    QGraphicsItem*  focusScopeItem(QGraphicsItem* theWrappedObject) const;
    void grabKeyboard(QGraphicsItem* theWrappedObject);
    void grabMouse(QGraphicsItem* theWrappedObject);
    QGraphicsEffect*  graphicsEffect(QGraphicsItem* theWrappedObject) const;
    QGraphicsItemGroup*  group(QGraphicsItem* theWrappedObject) const;
    bool  handlesChildEvents(QGraphicsItem* theWrappedObject) const;
    bool  hasCursor(QGraphicsItem* theWrappedObject) const;
    bool  hasFocus(QGraphicsItem* theWrappedObject) const;
    void hide(QGraphicsItem* theWrappedObject);
    void hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
    void hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
    void hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
    void inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event);
    Qt::InputMethodHints  inputMethodHints(QGraphicsItem* theWrappedObject) const;
    QVariant  inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const;
    void installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
    bool  isActive(QGraphicsItem* theWrappedObject) const;
    bool  isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const;
    bool  isBlockedByModalPanel(QGraphicsItem* theWrappedObject, QGraphicsItem**  blockingPanel = 0) const;
    bool  isClipped(QGraphicsItem* theWrappedObject) const;
    bool  isEnabled(QGraphicsItem* theWrappedObject) const;
    bool  isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF()) const;
    bool  isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    bool  isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const;
    bool  isPanel(QGraphicsItem* theWrappedObject) const;
    bool  isSelected(QGraphicsItem* theWrappedObject) const;
    bool  isUnderMouse(QGraphicsItem* theWrappedObject) const;
    bool  isVisible(QGraphicsItem* theWrappedObject) const;
    bool  isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const;
    bool  isWidget(QGraphicsItem* theWrappedObject) const;
    bool  isWindow(QGraphicsItem* theWrappedObject) const;
    QVariant  itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
    QTransform  itemTransform(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, bool*  ok = 0) const;
    void keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
    void keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
    QPainterPath  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
    QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
    QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
    QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
    QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
    QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QPainterPath  mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
    QPointF  mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
    QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
    QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QPointF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
    QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QPainterPath  mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
    QPointF  mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
    QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
    QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QPointF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
    QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
    QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
    QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QPainterPath  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
    QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
    QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
    QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
    QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
    QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QPainterPath  mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
    QPointF  mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
    QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
    QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QPointF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
    QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    QPainterPath  mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
    QPointF  mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
    QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
    QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QPointF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
    QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
    void mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
    void mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
    void mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
    void mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
    void moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
    qreal  opacity(QGraphicsItem* theWrappedObject) const;
    QPainterPath  opaqueArea(QGraphicsItem* theWrappedObject) const;
    QGraphicsItem*  panel(QGraphicsItem* theWrappedObject) const;
    QGraphicsItem::PanelModality  panelModality(QGraphicsItem* theWrappedObject) const;
    QGraphicsItem*  parentItem(QGraphicsItem* theWrappedObject) const;
    QGraphicsObject*  parentObject(QGraphicsItem* theWrappedObject) const;
    QGraphicsWidget*  parentWidget(QGraphicsItem* theWrappedObject) const;
    QPointF  pos(QGraphicsItem* theWrappedObject) const;
    void removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
    void resetTransform(QGraphicsItem* theWrappedObject);
    qreal  rotation(QGraphicsItem* theWrappedObject) const;
    qreal  scale(QGraphicsItem* theWrappedObject) const;
    QGraphicsScene*  scene(QGraphicsItem* theWrappedObject) const;
    QRectF  sceneBoundingRect(QGraphicsItem* theWrappedObject) const;
    bool  sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event);
    bool  sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event);
    QPointF  scenePos(QGraphicsItem* theWrappedObject) const;
    QTransform  sceneTransform(QGraphicsItem* theWrappedObject) const;
    void scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect = QRectF());
    void setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on);
    void setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
    void setAcceptTouchEvents(QGraphicsItem* theWrappedObject, bool  enabled);
    void setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons);
    void setActive(QGraphicsItem* theWrappedObject, bool  active);
    void setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity);
    void setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize = QSize());
    void setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor);
    void setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value);
    void setEnabled(QGraphicsItem* theWrappedObject, bool  enabled);
    void setFiltersChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
    void setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled = true);
    void setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
    void setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
    void setFocusProxy(QGraphicsItem* theWrappedObject, QGraphicsItem*  item);
    void setGraphicsEffect(QGraphicsItem* theWrappedObject, QGraphicsEffect*  effect);
    void setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group);
    void setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
    void setInputMethodHints(QGraphicsItem* theWrappedObject, Qt::InputMethodHints  hints);
    void setOpacity(QGraphicsItem* theWrappedObject, qreal  opacity);
    void setPanelModality(QGraphicsItem* theWrappedObject, QGraphicsItem::PanelModality  panelModality);
    void setParentItem(QGraphicsItem* theWrappedObject, QGraphicsItem*  parent);
    void setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos);
    void setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y);
    void setRotation(QGraphicsItem* theWrappedObject, qreal  angle);
    void setScale(QGraphicsItem* theWrappedObject, qreal  scale);
    void setSelected(QGraphicsItem* theWrappedObject, bool  selected);
    void setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip);
    void setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine = false);
    void setTransformOriginPoint(QGraphicsItem* theWrappedObject, const QPointF&  origin);
    void setTransformOriginPoint(QGraphicsItem* theWrappedObject, qreal  ax, qreal  ay);
    void setTransformations(QGraphicsItem* theWrappedObject, const QList<QGraphicsTransform* >&  transformations);
    void setVisible(QGraphicsItem* theWrappedObject, bool  visible);
    void setX(QGraphicsItem* theWrappedObject, qreal  x);
    void setY(QGraphicsItem* theWrappedObject, qreal  y);
    void setZValue(QGraphicsItem* theWrappedObject, qreal  z);
    QPainterPath  shape(QGraphicsItem* theWrappedObject) const;
    void show(QGraphicsItem* theWrappedObject);
    void stackBefore(QGraphicsItem* theWrappedObject, const QGraphicsItem*  sibling);
    QGraphicsObject*  toGraphicsObject(QGraphicsItem* theWrappedObject);
    QString  toolTip(QGraphicsItem* theWrappedObject) const;
    QGraphicsItem*  topLevelItem(QGraphicsItem* theWrappedObject) const;
    QGraphicsWidget*  topLevelWidget(QGraphicsItem* theWrappedObject) const;
    QTransform  transform(QGraphicsItem* theWrappedObject) const;
    QPointF  transformOriginPoint(QGraphicsItem* theWrappedObject) const;
    QList<QGraphicsTransform* >  transformations(QGraphicsItem* theWrappedObject) const;
    int  type(QGraphicsItem* theWrappedObject) const;
    void ungrabKeyboard(QGraphicsItem* theWrappedObject);
    void ungrabMouse(QGraphicsItem* theWrappedObject);
    void unsetCursor(QGraphicsItem* theWrappedObject);
    void update(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF());
    void update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
    void wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event);
    QGraphicsWidget*  window(QGraphicsItem* theWrappedObject) const;
    qreal  x(QGraphicsItem* theWrappedObject) const;
    qreal  y(QGraphicsItem* theWrappedObject) const;
    qreal  zValue(QGraphicsItem* theWrappedObject) const;
    QString py_toString(QGraphicsItem*);
};





class PythonQtShell_QGraphicsItemAnimation : public QGraphicsItemAnimation
{
public:
    PythonQtShell_QGraphicsItemAnimation(QObject*  parent = 0):QGraphicsItemAnimation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsItemAnimation();

virtual void afterAnimationStep(qreal  step);
virtual void beforeAnimationStep(qreal  step);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItemAnimation : public QGraphicsItemAnimation
{ public:
inline void promoted_afterAnimationStep(qreal  step) { QGraphicsItemAnimation::afterAnimationStep(step); }
inline void promoted_beforeAnimationStep(qreal  step) { QGraphicsItemAnimation::beforeAnimationStep(step); }
};

class PythonQtWrapper_QGraphicsItemAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsItemAnimation* new_QGraphicsItemAnimation(QObject*  parent = 0);
void delete_QGraphicsItemAnimation(QGraphicsItemAnimation* obj) { delete obj; } 
    void afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
    void beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
    void clear(QGraphicsItemAnimation* theWrappedObject);
    qreal  horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
    qreal  horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
    QGraphicsItem*  item(QGraphicsItemAnimation* theWrappedObject) const;
    QMatrix  matrixAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
    QPointF  posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
    QList<QPair<qreal , QPointF >  >  posList(QGraphicsItemAnimation* theWrappedObject) const;
    qreal  rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
    QList<QPair<qreal , qreal >  >  rotationList(QGraphicsItemAnimation* theWrappedObject) const;
    QList<QPair<qreal , QPointF >  >  scaleList(QGraphicsItemAnimation* theWrappedObject) const;
    void setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item);
    void setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos);
    void setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle);
    void setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy);
    void setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv);
    void setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine);
    void setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy);
    QList<QPair<qreal , QPointF >  >  shearList(QGraphicsItemAnimation* theWrappedObject) const;
    QTimeLine*  timeLine(QGraphicsItemAnimation* theWrappedObject) const;
    QList<QPair<qreal , QPointF >  >  translationList(QGraphicsItemAnimation* theWrappedObject) const;
    qreal  verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
    qreal  verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
    qreal  xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
    qreal  yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
};





class PythonQtShell_QGraphicsItemGroup : public QGraphicsItemGroup
{
public:
    PythonQtShell_QGraphicsItemGroup(QGraphicsItem*  parent = 0):QGraphicsItemGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsItemGroup();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItemGroup : public QGraphicsItemGroup
{ public:
inline QRectF  promoted_boundingRect() const { return QGraphicsItemGroup::boundingRect(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItemGroup::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsItemGroup::opaqueArea(); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsItemGroup::paint(painter, option, widget); }
inline int  promoted_type() const { return QGraphicsItemGroup::type(); }
};

class PythonQtWrapper_QGraphicsItemGroup : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsItemGroup::Type};
public slots:
QGraphicsItemGroup* new_QGraphicsItemGroup(QGraphicsItem*  parent = 0);
void delete_QGraphicsItemGroup(QGraphicsItemGroup* obj) { delete obj; } 
    void addToGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
    QRectF  boundingRect(QGraphicsItemGroup* theWrappedObject) const;
    bool  isObscuredBy(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item) const;
    QPainterPath  opaqueArea(QGraphicsItemGroup* theWrappedObject) const;
    void paint(QGraphicsItemGroup* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
    void removeFromGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
    int  type(QGraphicsItemGroup* theWrappedObject) const;
};





class PythonQtShell_QGraphicsLayout : public QGraphicsLayout
{
public:
    PythonQtShell_QGraphicsLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsLayout();

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  i) const;
virtual void removeAt(int  index);
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const;
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLayout : public QGraphicsLayout
{ public:
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayout::getContentsMargins(left, top, right, bottom); }
inline void promoted_invalidate() { QGraphicsLayout::invalidate(); }
inline void promoted_updateGeometry() { QGraphicsLayout::updateGeometry(); }
inline void promoted_widgetEvent(QEvent*  e) { QGraphicsLayout::widgetEvent(e); }
};

class PythonQtWrapper_QGraphicsLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayout* new_QGraphicsLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsLayout(QGraphicsLayout* obj) { delete obj; } 
    void activate(QGraphicsLayout* theWrappedObject);
    void getContentsMargins(QGraphicsLayout* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
    bool  static_QGraphicsLayout_instantInvalidatePropagation();
    void invalidate(QGraphicsLayout* theWrappedObject);
    bool  isActivated(QGraphicsLayout* theWrappedObject) const;
    void setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
    void static_QGraphicsLayout_setInstantInvalidatePropagation(bool  enable);
    void updateGeometry(QGraphicsLayout* theWrappedObject);
    void widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e);
};





class PythonQtShell_QGraphicsLayoutItem : public QGraphicsLayoutItem
{
public:
    PythonQtShell_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = 0, bool  isLayout = false):QGraphicsLayoutItem(parent, isLayout),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsLayoutItem();

virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void updateGeometry();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLayoutItem : public QGraphicsLayoutItem
{ public:
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsLayoutItem::setGeometry(rect); }
inline void promoted_updateGeometry() { QGraphicsLayoutItem::updateGeometry(); }
};

class PythonQtWrapper_QGraphicsLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayoutItem* new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = 0, bool  isLayout = false);
void delete_QGraphicsLayoutItem(QGraphicsLayoutItem* obj) { delete obj; } 
    QRectF  contentsRect(QGraphicsLayoutItem* theWrappedObject) const;
    QSizeF  effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
    QRectF  geometry(QGraphicsLayoutItem* theWrappedObject) const;
    void getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
    QGraphicsItem*  graphicsItem(QGraphicsLayoutItem* theWrappedObject) const;
    bool  isLayout(QGraphicsLayoutItem* theWrappedObject) const;
    qreal  maximumHeight(QGraphicsLayoutItem* theWrappedObject) const;
    QSizeF  maximumSize(QGraphicsLayoutItem* theWrappedObject) const;
    qreal  maximumWidth(QGraphicsLayoutItem* theWrappedObject) const;
    qreal  minimumHeight(QGraphicsLayoutItem* theWrappedObject) const;
    QSizeF  minimumSize(QGraphicsLayoutItem* theWrappedObject) const;
    qreal  minimumWidth(QGraphicsLayoutItem* theWrappedObject) const;
    bool  ownedByLayout(QGraphicsLayoutItem* theWrappedObject) const;
    QGraphicsLayoutItem*  parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const;
    qreal  preferredHeight(QGraphicsLayoutItem* theWrappedObject) const;
    QSizeF  preferredSize(QGraphicsLayoutItem* theWrappedObject) const;
    qreal  preferredWidth(QGraphicsLayoutItem* theWrappedObject) const;
    void setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect);
    void setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
    void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
    void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
    void setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
    void setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
    void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
    void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
    void setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
    void setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent);
    void setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
    void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
    void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
    void setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
    void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType = QSizePolicy::DefaultType);
    void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy);
    QSizePolicy  sizePolicy(QGraphicsLayoutItem* theWrappedObject) const;
    void updateGeometry(QGraphicsLayoutItem* theWrappedObject);
};





class PythonQtShell_QGraphicsLineItem : public QGraphicsLineItem
{
public:
    PythonQtShell_QGraphicsLineItem(QGraphicsItem*  parent = 0):QGraphicsLineItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = 0):QGraphicsLineItem(line, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = 0):QGraphicsLineItem(x1, y1, x2, y2, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsLineItem();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual QPainterPath  shape() const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLineItem : public QGraphicsLineItem
{ public:
inline QRectF  promoted_boundingRect() const { return QGraphicsLineItem::boundingRect(); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsLineItem::contains(point); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsLineItem::extension(variant); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsLineItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsLineItem::opaqueArea(); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsLineItem::paint(painter, option, widget); }
inline QPainterPath  promoted_shape() const { return QGraphicsLineItem::shape(); }
inline int  promoted_type() const { return QGraphicsLineItem::type(); }
};

class PythonQtWrapper_QGraphicsLineItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsLineItem::Type};
public slots:
QGraphicsLineItem* new_QGraphicsLineItem(QGraphicsItem*  parent = 0);
QGraphicsLineItem* new_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = 0);
QGraphicsLineItem* new_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = 0);
void delete_QGraphicsLineItem(QGraphicsLineItem* obj) { delete obj; } 
    QRectF  boundingRect(QGraphicsLineItem* theWrappedObject) const;
    bool  contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const;
    QVariant  extension(QGraphicsLineItem* theWrappedObject, const QVariant&  variant) const;
    bool  isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const;
    QLineF  line(QGraphicsLineItem* theWrappedObject) const;
    QPainterPath  opaqueArea(QGraphicsLineItem* theWrappedObject) const;
    void paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
    QPen  pen(QGraphicsLineItem* theWrappedObject) const;
    void setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line);
    void setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
    void setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen);
    QPainterPath  shape(QGraphicsLineItem* theWrappedObject) const;
    int  type(QGraphicsLineItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsLinearLayout : public QGraphicsLinearLayout
{
public:
    PythonQtShell_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsLinearLayout(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = 0):QGraphicsLinearLayout(orientation, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsLinearLayout();

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLinearLayout : public QGraphicsLinearLayout
{ public:
inline int  promoted_count() const { return QGraphicsLinearLayout::count(); }
inline void promoted_invalidate() { QGraphicsLinearLayout::invalidate(); }
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsLinearLayout::itemAt(index); }
inline void promoted_removeAt(int  index) { QGraphicsLinearLayout::removeAt(index); }
};

class PythonQtWrapper_QGraphicsLinearLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLinearLayout* new_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = 0);
QGraphicsLinearLayout* new_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsLinearLayout(QGraphicsLinearLayout* obj) { delete obj; } 
    void addItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item);
    void addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch = 1);
    Qt::Alignment  alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
    int  count(QGraphicsLinearLayout* theWrappedObject) const;
    void dump(QGraphicsLinearLayout* theWrappedObject, int  indent = 0) const;
    void insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, QGraphicsLayoutItem*  item);
    void insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch = 1);
    void invalidate(QGraphicsLinearLayout* theWrappedObject);
    QGraphicsLayoutItem*  itemAt(QGraphicsLinearLayout* theWrappedObject, int  index) const;
    qreal  itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const;
    Qt::Orientation  orientation(QGraphicsLinearLayout* theWrappedObject) const;
    void removeAt(QGraphicsLinearLayout* theWrappedObject, int  index);
    void removeItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item);
    void setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
    void setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect);
    void setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing);
    void setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation);
    void setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing);
    void setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch);
    QSizeF  sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
    qreal  spacing(QGraphicsLinearLayout* theWrappedObject) const;
    int  stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
};





class PythonQtShell_QGraphicsObject : public QGraphicsObject
{
public:
    PythonQtShell_QGraphicsObject(QGraphicsItem*  parent = 0):QGraphicsObject(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsObject();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  ev);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsObject : public QGraphicsObject
{ public:
inline bool  promoted_event(QEvent*  ev) { return QGraphicsObject::event(ev); }
};

class PythonQtWrapper_QGraphicsObject : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsObject* new_QGraphicsObject(QGraphicsItem*  parent = 0);
void delete_QGraphicsObject(QGraphicsObject* obj) { delete obj; } 
    bool  event(QGraphicsObject* theWrappedObject, QEvent*  ev);
    void grabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags = Qt::GestureFlags());
    void ungrabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type);
    QString py_toString(QGraphicsObject*);
};





class PythonQtShell_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{
public:
    PythonQtShell_QGraphicsOpacityEffect(QObject*  parent = 0):QGraphicsOpacityEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsOpacityEffect();

virtual QRectF  boundingRectFor(const QRectF&  sourceRect) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void draw(QPainter*  painter);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{ public:
inline void promoted_draw(QPainter*  painter) { QGraphicsOpacityEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsOpacityEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsOpacityEffect* new_QGraphicsOpacityEffect(QObject*  parent = 0);
void delete_QGraphicsOpacityEffect(QGraphicsOpacityEffect* obj) { delete obj; } 
    void draw(QGraphicsOpacityEffect* theWrappedObject, QPainter*  painter);
    qreal  opacity(QGraphicsOpacityEffect* theWrappedObject) const;
    QBrush  opacityMask(QGraphicsOpacityEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsPathItem : public QGraphicsPathItem
{
public:
    PythonQtShell_QGraphicsPathItem(QGraphicsItem*  parent = 0):QGraphicsPathItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent = 0):QGraphicsPathItem(path, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsPathItem();

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPathItem : public QGraphicsPathItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPathItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPathItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsPathItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPathItem::Type};
public slots:
QGraphicsPathItem* new_QGraphicsPathItem(QGraphicsItem*  parent = 0);
QGraphicsPathItem* new_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent = 0);
void delete_QGraphicsPathItem(QGraphicsPathItem* obj) { delete obj; } 
    QRectF  boundingRect(QGraphicsPathItem* theWrappedObject) const;
    bool  contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const;
    bool  isObscuredBy(QGraphicsPathItem* theWrappedObject, const QGraphicsItem*  item) const;
    QPainterPath  opaqueArea(QGraphicsPathItem* theWrappedObject) const;
    void paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
    QPainterPath  path(QGraphicsPathItem* theWrappedObject) const;
    void setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path);
    QPainterPath  shape(QGraphicsPathItem* theWrappedObject) const;
    int  type(QGraphicsPathItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsPixmapItem : public QGraphicsPixmapItem
{
public:
    PythonQtShell_QGraphicsPixmapItem(QGraphicsItem*  parent = 0):QGraphicsPixmapItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = 0):QGraphicsPixmapItem(pixmap, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsPixmapItem();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual QPainterPath  shape() const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPixmapItem : public QGraphicsPixmapItem
{ public:
inline QRectF  promoted_boundingRect() const { return QGraphicsPixmapItem::boundingRect(); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsPixmapItem::contains(point); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsPixmapItem::extension(variant); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPixmapItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPixmapItem::opaqueArea(); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsPixmapItem::paint(painter, option, widget); }
inline QPainterPath  promoted_shape() const { return QGraphicsPixmapItem::shape(); }
inline int  promoted_type() const { return QGraphicsPixmapItem::type(); }
};

class PythonQtWrapper_QGraphicsPixmapItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 ShapeMode )
enum enum_1{
  Type = QGraphicsPixmapItem::Type};
enum ShapeMode{
  MaskShape = QGraphicsPixmapItem::MaskShape,   BoundingRectShape = QGraphicsPixmapItem::BoundingRectShape,   HeuristicMaskShape = QGraphicsPixmapItem::HeuristicMaskShape};
public slots:
QGraphicsPixmapItem* new_QGraphicsPixmapItem(QGraphicsItem*  parent = 0);
QGraphicsPixmapItem* new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = 0);
void delete_QGraphicsPixmapItem(QGraphicsPixmapItem* obj) { delete obj; } 
    QRectF  boundingRect(QGraphicsPixmapItem* theWrappedObject) const;
    bool  contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const;
    QVariant  extension(QGraphicsPixmapItem* theWrappedObject, const QVariant&  variant) const;
    bool  isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const;
    QPointF  offset(QGraphicsPixmapItem* theWrappedObject) const;
    QPainterPath  opaqueArea(QGraphicsPixmapItem* theWrappedObject) const;
    void paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
    QPixmap  pixmap(QGraphicsPixmapItem* theWrappedObject) const;
    void setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset);
    void setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y);
    void setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap);
    void setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode);
    void setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode);
    QPainterPath  shape(QGraphicsPixmapItem* theWrappedObject) const;
    QGraphicsPixmapItem::ShapeMode  shapeMode(QGraphicsPixmapItem* theWrappedObject) const;
    Qt::TransformationMode  transformationMode(QGraphicsPixmapItem* theWrappedObject) const;
    int  type(QGraphicsPixmapItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsPolygonItem : public QGraphicsPolygonItem
{
public:
    PythonQtShell_QGraphicsPolygonItem(QGraphicsItem*  parent = 0):QGraphicsPolygonItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = 0):QGraphicsPolygonItem(polygon, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsPolygonItem();

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPolygonItem : public QGraphicsPolygonItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPolygonItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPolygonItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsPolygonItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPolygonItem::Type};
public slots:
QGraphicsPolygonItem* new_QGraphicsPolygonItem(QGraphicsItem*  parent = 0);
QGraphicsPolygonItem* new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = 0);
void delete_QGraphicsPolygonItem(QGraphicsPolygonItem* obj) { delete obj; } 
    QRectF  boundingRect(QGraphicsPolygonItem* theWrappedObject) const;
    bool  contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const;
    Qt::FillRule  fillRule(QGraphicsPolygonItem* theWrappedObject) const;
    bool  isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const;
    QPainterPath  opaqueArea(QGraphicsPolygonItem* theWrappedObject) const;
    void paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
    QPolygonF  polygon(QGraphicsPolygonItem* theWrappedObject) const;
    void setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule);
    void setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon);
    QPainterPath  shape(QGraphicsPolygonItem* theWrappedObject) const;
    int  type(QGraphicsPolygonItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsProxyWidget : public QGraphicsProxyWidget
{
public:
    PythonQtShell_QGraphicsProxyWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0):QGraphicsProxyWidget(parent, wFlags),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsProxyWidget();

virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void initStyleOption(QStyleOption*  option) const;
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
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

class PythonQtPublicPromoter_QGraphicsProxyWidget : public QGraphicsProxyWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return QGraphicsProxyWidget::event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QGraphicsProxyWidget::eventFilter(object, event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsProxyWidget::focusNextPrevChild(next); }
inline void promoted_grabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::grabMouseEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QGraphicsProxyWidget::hideEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverMoveEvent(event); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsProxyWidget::resizeEvent(event); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsProxyWidget::setGeometry(rect); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsProxyWidget::showEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsProxyWidget::sizeHint(which, constraint); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::ungrabMouseEvent(event); }
};

class PythonQtWrapper_QGraphicsProxyWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsProxyWidget::Type};
public slots:
QGraphicsProxyWidget* new_QGraphicsProxyWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0);
void delete_QGraphicsProxyWidget(QGraphicsProxyWidget* obj) { delete obj; } 
    QGraphicsProxyWidget*  createProxyForChildWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  child);
    bool  event(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
    bool  eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event);
    bool  focusNextPrevChild(QGraphicsProxyWidget* theWrappedObject, bool  next);
    void grabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
    void hideEvent(QGraphicsProxyWidget* theWrappedObject, QHideEvent*  event);
    void hoverLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
    void hoverMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
    void paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
    void resizeEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
    void setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect);
    void setWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  widget);
    void showEvent(QGraphicsProxyWidget* theWrappedObject, QShowEvent*  event);
    QSizeF  sizeHint(QGraphicsProxyWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
    QRectF  subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const;
    int  type(QGraphicsProxyWidget* theWrappedObject) const;
    void ungrabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
    QWidget*  widget(QGraphicsProxyWidget* theWrappedObject) const;
};





class PythonQtShell_QGraphicsRectItem : public QGraphicsRectItem
{
public:
    PythonQtShell_QGraphicsRectItem(QGraphicsItem*  parent = 0):QGraphicsRectItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = 0):QGraphicsRectItem(rect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0):QGraphicsRectItem(x, y, w, h, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsRectItem();

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsRectItem : public QGraphicsRectItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsRectItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsRectItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsRectItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsRectItem::Type};
public slots:
QGraphicsRectItem* new_QGraphicsRectItem(QGraphicsItem*  parent = 0);
QGraphicsRectItem* new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = 0);
QGraphicsRectItem* new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0);
void delete_QGraphicsRectItem(QGraphicsRectItem* obj) { delete obj; } 
    QRectF  boundingRect(QGraphicsRectItem* theWrappedObject) const;
    bool  contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const;
    bool  isObscuredBy(QGraphicsRectItem* theWrappedObject, const QGraphicsItem*  item) const;
    QPainterPath  opaqueArea(QGraphicsRectItem* theWrappedObject) const;
    void paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
    QRectF  rect(QGraphicsRectItem* theWrappedObject) const;
    void setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect);
    void setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
    QPainterPath  shape(QGraphicsRectItem* theWrappedObject) const;
    int  type(QGraphicsRectItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsRotation : public QGraphicsRotation
{
public:
    PythonQtShell_QGraphicsRotation(QObject*  parent = 0):QGraphicsRotation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsRotation();

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsRotation : public QGraphicsRotation
{ public:
inline void promoted_applyTo(QMatrix4x4*  matrix) const { QGraphicsRotation::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsRotation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsRotation* new_QGraphicsRotation(QObject*  parent = 0);
void delete_QGraphicsRotation(QGraphicsRotation* obj) { delete obj; } 
    qreal  angle(QGraphicsRotation* theWrappedObject) const;
    void applyTo(QGraphicsRotation* theWrappedObject, QMatrix4x4*  matrix) const;
    QVector3D  axis(QGraphicsRotation* theWrappedObject) const;
    QVector3D  origin(QGraphicsRotation* theWrappedObject) const;
    void setAngle(QGraphicsRotation* theWrappedObject, qreal  arg__1);
    void setAxis(QGraphicsRotation* theWrappedObject, Qt::Axis  axis);
    void setAxis(QGraphicsRotation* theWrappedObject, const QVector3D&  axis);
    void setOrigin(QGraphicsRotation* theWrappedObject, const QVector3D&  point);
};





class PythonQtShell_QGraphicsScale : public QGraphicsScale
{
public:
    PythonQtShell_QGraphicsScale(QObject*  parent = 0):QGraphicsScale(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsScale();

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScale : public QGraphicsScale
{ public:
inline void promoted_applyTo(QMatrix4x4*  matrix) const { QGraphicsScale::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsScale : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsScale* new_QGraphicsScale(QObject*  parent = 0);
void delete_QGraphicsScale(QGraphicsScale* obj) { delete obj; } 
    void applyTo(QGraphicsScale* theWrappedObject, QMatrix4x4*  matrix) const;
    QVector3D  origin(QGraphicsScale* theWrappedObject) const;
    void setOrigin(QGraphicsScale* theWrappedObject, const QVector3D&  point);
    void setXScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
    void setYScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
    void setZScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
    qreal  xScale(QGraphicsScale* theWrappedObject) const;
    qreal  yScale(QGraphicsScale* theWrappedObject) const;
    qreal  zScale(QGraphicsScale* theWrappedObject) const;
};





class PythonQtShell_QGraphicsScene : public QGraphicsScene
{
public:
    PythonQtShell_QGraphicsScene(QObject*  parent = 0):QGraphicsScene(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0):QGraphicsScene(sceneRect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0):QGraphicsScene(x, y, width, height, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsScene();

virtual void childEvent(QChildEvent*  arg__1);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void helpEvent(QGraphicsSceneHelpEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScene : public QGraphicsScene
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsScene::contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragMoveEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawBackground(painter, rect); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawForeground(painter, rect); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0) { QGraphicsScene::drawItems(painter, numItems, items, options, widget); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dropEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsScene::event(event); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QGraphicsScene::eventFilter(watched, event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsScene::focusInEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsScene::focusOutEvent(event); }
inline void promoted_helpEvent(QGraphicsSceneHelpEvent*  event) { QGraphicsScene::helpEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsScene::inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsScene::inputMethodQuery(query); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsScene::keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsScene::keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseReleaseEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsScene::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsScene : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SceneLayer ItemIndexMethod )
Q_FLAGS(SceneLayers )
enum SceneLayer{
  ItemLayer = QGraphicsScene::ItemLayer,   BackgroundLayer = QGraphicsScene::BackgroundLayer,   ForegroundLayer = QGraphicsScene::ForegroundLayer,   AllLayers = QGraphicsScene::AllLayers};
enum ItemIndexMethod{
  BspTreeIndex = QGraphicsScene::BspTreeIndex,   NoIndex = QGraphicsScene::NoIndex};
Q_DECLARE_FLAGS(SceneLayers, SceneLayer)
public slots:
QGraphicsScene* new_QGraphicsScene(QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0);
void delete_QGraphicsScene(QGraphicsScene* obj) { delete obj; } 
    QGraphicsItem*  activePanel(QGraphicsScene* theWrappedObject) const;
    QGraphicsWidget*  activeWindow(QGraphicsScene* theWrappedObject) const;
    QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
    QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
    void addItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
    QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen = QPen());
    QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen = QPen());
    QGraphicsPathItem*  addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
    QGraphicsPixmapItem*  addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap);
    QGraphicsPolygonItem*  addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
    QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
    QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
    QGraphicsSimpleTextItem*  addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
    QGraphicsTextItem*  addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
    QGraphicsProxyWidget*  addWidget(QGraphicsScene* theWrappedObject, QWidget*  widget, Qt::WindowFlags  wFlags = 0);
    QBrush  backgroundBrush(QGraphicsScene* theWrappedObject) const;
    int  bspTreeDepth(QGraphicsScene* theWrappedObject) const;
    void clearFocus(QGraphicsScene* theWrappedObject);
    QList<QGraphicsItem* >  collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
    void contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
    QGraphicsItemGroup*  createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items);
    void destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group);
    void dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
    void dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
    void dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
    void drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
    void drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
    void drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
    void dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
    bool  event(QGraphicsScene* theWrappedObject, QEvent*  event);
    bool  eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event);
    void focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
    QGraphicsItem*  focusItem(QGraphicsScene* theWrappedObject) const;
    void focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
    QFont  font(QGraphicsScene* theWrappedObject) const;
    QBrush  foregroundBrush(QGraphicsScene* theWrappedObject) const;
    bool  hasFocus(QGraphicsScene* theWrappedObject) const;
    qreal  height(QGraphicsScene* theWrappedObject) const;
    void helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event);
    void inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event);
    QVariant  inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const;
    void invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers = QGraphicsScene::AllLayers);
    bool  isActive(QGraphicsScene* theWrappedObject) const;
    bool  isSortCacheEnabled(QGraphicsScene* theWrappedObject) const;
    QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos, const QTransform&  deviceTransform) const;
    QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, const QTransform&  deviceTransform) const;
    QGraphicsScene::ItemIndexMethod  itemIndexMethod(QGraphicsScene* theWrappedObject) const;
    QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, Qt::SortOrder  order = Qt::DescendingOrder) const;
    QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
    QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPointF&  pos, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
    QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
    QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
    QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
    QRectF  itemsBoundingRect(QGraphicsScene* theWrappedObject) const;
    void keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
    void keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
    void mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
    QGraphicsItem*  mouseGrabberItem(QGraphicsScene* theWrappedObject) const;
    void mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
    void mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
    void mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
    QPalette  palette(QGraphicsScene* theWrappedObject) const;
    void removeItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
    void render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRectF&  source = QRectF(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
    QRectF  sceneRect(QGraphicsScene* theWrappedObject) const;
    QList<QGraphicsItem* >  selectedItems(QGraphicsScene* theWrappedObject) const;
    QPainterPath  selectionArea(QGraphicsScene* theWrappedObject) const;
    bool  sendEvent(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, QEvent*  event);
    void setActivePanel(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
    void setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget);
    void setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
    void setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth);
    void setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
    void setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
    void setFont(QGraphicsScene* theWrappedObject, const QFont&  font);
    void setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
    void setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method);
    void setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette);
    void setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect);
    void setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
    void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, const QTransform&  deviceTransform = QTransform());
    void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QTransform&  deviceTransform);
    void setSortCacheEnabled(QGraphicsScene* theWrappedObject, bool  enabled);
    void setStickyFocus(QGraphicsScene* theWrappedObject, bool  enabled);
    void setStyle(QGraphicsScene* theWrappedObject, QStyle*  style);
    bool  stickyFocus(QGraphicsScene* theWrappedObject) const;
    QStyle*  style(QGraphicsScene* theWrappedObject) const;
    void update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
    QList<QGraphicsView* >  views(QGraphicsScene* theWrappedObject) const;
    void wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event);
    qreal  width(QGraphicsScene* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QGraphicsSceneContextMenuEvent::Mouse,   Keyboard = QGraphicsSceneContextMenuEvent::Keyboard,   Other = QGraphicsSceneContextMenuEvent::Other};
public slots:
QGraphicsSceneContextMenuEvent* new_QGraphicsSceneContextMenuEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneContextMenuEvent(QGraphicsSceneContextMenuEvent* obj) { delete obj; } 
    Qt::KeyboardModifiers  modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
    QPointF  pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
    QGraphicsSceneContextMenuEvent::Reason  reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
    QPointF  scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
    QPoint  screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
    void setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
    void setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
    void setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason);
    void setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
    void setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtWrapper_QGraphicsSceneDragDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneDragDropEvent* new_QGraphicsSceneDragDropEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneDragDropEvent(QGraphicsSceneDragDropEvent* obj) { delete obj; } 
    void acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject);
    Qt::MouseButtons  buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const;
    Qt::DropAction  dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
    const QMimeData*  mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const;
    Qt::KeyboardModifiers  modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const;
    QPointF  pos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
    Qt::DropActions  possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const;
    Qt::DropAction  proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
    QPointF  scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
    QPoint  screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
    void setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons);
    void setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
    void setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
    void setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
    void setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions);
    void setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
    void setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
    void setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos);
    QWidget*  source(QGraphicsSceneDragDropEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneEvent* new_QGraphicsSceneEvent(QEvent::Type  type);
void delete_QGraphicsSceneEvent(QGraphicsSceneEvent* obj) { delete obj; } 
    QWidget*  widget(QGraphicsSceneEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneHelpEvent* new_QGraphicsSceneHelpEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHelpEvent(QGraphicsSceneHelpEvent* obj) { delete obj; } 
    QPointF  scenePos(QGraphicsSceneHelpEvent* theWrappedObject) const;
    QPoint  screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const;
    void setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos);
    void setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtWrapper_QGraphicsSceneHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneHoverEvent* new_QGraphicsSceneHoverEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHoverEvent(QGraphicsSceneHoverEvent* obj) { delete obj; } 
    QPointF  lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
    QPointF  lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
    QPoint  lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
    Qt::KeyboardModifiers  modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const;
    QPointF  pos(QGraphicsSceneHoverEvent* theWrappedObject) const;
    QPointF  scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
    QPoint  screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
    void setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
    void setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
    void setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
    void setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
    void setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
    void setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
    void setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtWrapper_QGraphicsSceneMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneMouseEvent* new_QGraphicsSceneMouseEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneMouseEvent(QGraphicsSceneMouseEvent* obj) { delete obj; } 
    Qt::MouseButton  button(QGraphicsSceneMouseEvent* theWrappedObject) const;
    QPointF  buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
    QPointF  buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
    QPoint  buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
    Qt::MouseButtons  buttons(QGraphicsSceneMouseEvent* theWrappedObject) const;
    QPointF  lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
    QPointF  lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
    QPoint  lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
    Qt::KeyboardModifiers  modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const;
    QPointF  pos(QGraphicsSceneMouseEvent* theWrappedObject) const;
    QPointF  scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
    QPoint  screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
    void setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button);
    void setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
    void setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
    void setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos);
    void setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons);
    void setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
    void setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
    void setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
    void setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
    void setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
    void setScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
    void setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtWrapper_QGraphicsSceneMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneMoveEvent* new_QGraphicsSceneMoveEvent();
void delete_QGraphicsSceneMoveEvent(QGraphicsSceneMoveEvent* obj) { delete obj; } 
    QPointF  newPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
    QPointF  oldPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
    void setNewPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
    void setOldPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
};





class PythonQtWrapper_QGraphicsSceneResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneResizeEvent* new_QGraphicsSceneResizeEvent();
void delete_QGraphicsSceneResizeEvent(QGraphicsSceneResizeEvent* obj) { delete obj; } 
    QSizeF  newSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
    QSizeF  oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
    void setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
    void setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
};


