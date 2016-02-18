#include <PythonQt.h>
#include <QAbstractTextDocumentLayout>
#include <QIconEngine>
#include <QObject>
#include <QPrinterInfo>
#include <QTextEdit>
#include <QVariant>
#include <qabstractprintdialog.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdialog.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpictureformatplugin.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprintdialog.h>
#include <qprintengine.h>
#include <qprinter.h>
#include <qprintpreviewdialog.h>
#include <qprintpreviewwidget.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qpushbutton.h>
#include <qquaternion.h>
#include <qradiobutton.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qrubberband.h>
#include <qscrollarea.h>
#include <qscrollbar.h>
#include <qsessionmanager.h>
#include <qshortcut.h>
#include <qsize.h>
#include <qsizegrip.h>
#include <qsizepolicy.h>
#include <qslider.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>



class PythonQtShell_QPicture : public QPicture
{
public:
    PythonQtShell_QPicture(const QPicture&  arg__1):QPicture(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPicture(int  formatVersion = -1):QPicture(formatVersion),_wrapper(NULL) {};

   ~PythonQtShell_QPicture();

virtual int  devType() const;
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  m) const;
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void setData(const char*  data, uint  size);
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPicture : public QPicture
{ public:
inline int  promoted_devType() const { return QPicture::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  m) const { return QPicture::metric(m); }
inline QPaintEngine*  promoted_paintEngine() const { return QPicture::paintEngine(); }
};

class PythonQtWrapper_QPicture : public QObject
{ Q_OBJECT
public:
public slots:
QPicture* new_QPicture(const QPicture&  arg__1);
QPicture* new_QPicture(int  formatVersion = -1);
void delete_QPicture(QPicture* obj) { delete obj; } 
    QRect  boundingRect(QPicture* theWrappedObject) const;
    const char*  data(QPicture* theWrappedObject) const;
    int  devType(QPicture* theWrappedObject) const;
    bool  isNull(QPicture* theWrappedObject) const;
    bool  load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
    bool  load(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
    int  metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const;
    QPaintEngine*  paintEngine(QPicture* theWrappedObject) const;
    bool  play(QPicture* theWrappedObject, QPainter*  p);
    bool  save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
    bool  save(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
    void setBoundingRect(QPicture* theWrappedObject, const QRect&  r);
    uint  size(QPicture* theWrappedObject) const;
    void swap(QPicture* theWrappedObject, QPicture&  other);
    bool __nonzero__(QPicture* obj) { return !obj->isNull(); }
};





class PythonQtShell_QPictureFormatPlugin : public QPictureFormatPlugin
{
public:
    PythonQtShell_QPictureFormatPlugin(QObject*  parent = 0):QPictureFormatPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPictureFormatPlugin();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  installIOHandler(const QString&  format);
virtual bool  loadPicture(const QString&  format, const QString&  filename, QPicture*  pic);
virtual bool  savePicture(const QString&  format, const QString&  filename, const QPicture&  pic);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPictureFormatPlugin : public QPictureFormatPlugin
{ public:
inline bool  promoted_loadPicture(const QString&  format, const QString&  filename, QPicture*  pic) { return QPictureFormatPlugin::loadPicture(format, filename, pic); }
inline bool  promoted_savePicture(const QString&  format, const QString&  filename, const QPicture&  pic) { return QPictureFormatPlugin::savePicture(format, filename, pic); }
};

class PythonQtWrapper_QPictureFormatPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QPictureFormatPlugin* new_QPictureFormatPlugin(QObject*  parent = 0);
void delete_QPictureFormatPlugin(QPictureFormatPlugin* obj) { delete obj; } 
    bool  loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic);
    bool  savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic);
};





class PythonQtWrapper_QPictureIO : public QObject
{ Q_OBJECT
public:
public slots:
QPictureIO* new_QPictureIO();
QPictureIO* new_QPictureIO(QIODevice*  ioDevice, const char*  format);
QPictureIO* new_QPictureIO(const QString&  fileName, const char*  format);
void delete_QPictureIO(QPictureIO* obj) { delete obj; } 
    QString  description(QPictureIO* theWrappedObject) const;
    QString  fileName(QPictureIO* theWrappedObject) const;
    const char*  format(QPictureIO* theWrappedObject) const;
    float  gamma(QPictureIO* theWrappedObject) const;
    QList<QByteArray >  static_QPictureIO_inputFormats();
    QIODevice*  ioDevice(QPictureIO* theWrappedObject) const;
    QList<QByteArray >  static_QPictureIO_outputFormats();
    const char*  parameters(QPictureIO* theWrappedObject) const;
    const QPicture*  picture(QPictureIO* theWrappedObject) const;
    QByteArray  static_QPictureIO_pictureFormat(QIODevice*  arg__1);
    QByteArray  static_QPictureIO_pictureFormat(const QString&  fileName);
    int  quality(QPictureIO* theWrappedObject) const;
    bool  read(QPictureIO* theWrappedObject);
    void setDescription(QPictureIO* theWrappedObject, const QString&  arg__1);
    void setFileName(QPictureIO* theWrappedObject, const QString&  arg__1);
    void setFormat(QPictureIO* theWrappedObject, const char*  arg__1);
    void setGamma(QPictureIO* theWrappedObject, float  arg__1);
    void setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1);
    void setParameters(QPictureIO* theWrappedObject, const char*  arg__1);
    void setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1);
    void setQuality(QPictureIO* theWrappedObject, int  arg__1);
    void setStatus(QPictureIO* theWrappedObject, int  arg__1);
    int  status(QPictureIO* theWrappedObject) const;
    bool  write(QPictureIO* theWrappedObject);
};





class PythonQtShell_QPixmapCache : public QPixmapCache
{
public:
    PythonQtShell_QPixmapCache():QPixmapCache(),_wrapper(NULL) {};

   ~PythonQtShell_QPixmapCache();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPixmapCache : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache* new_QPixmapCache();
void delete_QPixmapCache(QPixmapCache* obj) { delete obj; } 
    int  static_QPixmapCache_cacheLimit();
    void static_QPixmapCache_clear();
    bool  static_QPixmapCache_find(const QPixmapCache::Key&  key, QPixmap*  pixmap);
    bool  static_QPixmapCache_find(const QString&  key, QPixmap&  pixmap);
    QPixmapCache::Key  static_QPixmapCache_insert(const QPixmap&  pixmap);
    bool  static_QPixmapCache_insert(const QString&  key, const QPixmap&  pixmap);
    void static_QPixmapCache_remove(const QPixmapCache::Key&  key);
    void static_QPixmapCache_remove(const QString&  key);
    bool  static_QPixmapCache_replace(const QPixmapCache::Key&  key, const QPixmap&  pixmap);
    void static_QPixmapCache_setCacheLimit(int  arg__1);
};





class PythonQtWrapper_QPixmapCache_Key : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache::Key* new_QPixmapCache_Key();
QPixmapCache::Key* new_QPixmapCache_Key(const QPixmapCache::Key&  other);
void delete_QPixmapCache_Key(QPixmapCache::Key* obj) { delete obj; } 
    bool  __ne__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
    QPixmapCache::Key*  operator_assign(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  other);
    bool  __eq__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
};





class PythonQtShell_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{
public:
    PythonQtShell_QPlainTextDocumentLayout(QTextDocument*  document):QPlainTextDocumentLayout(document),_wrapper(NULL) {};

   ~PythonQtShell_QPlainTextDocumentLayout();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPlainTextDocumentLayout : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextDocumentLayout* new_QPlainTextDocumentLayout(QTextDocument*  document);
void delete_QPlainTextDocumentLayout(QPlainTextDocumentLayout* obj) { delete obj; } 
    QRectF  blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
    int  cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const;
    QSizeF  documentSize(QPlainTextDocumentLayout* theWrappedObject) const;
    void draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2);
    void ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
    QRectF  frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const;
    int  hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const;
    int  pageCount(QPlainTextDocumentLayout* theWrappedObject) const;
    void requestUpdate(QPlainTextDocumentLayout* theWrappedObject);
    void setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width);
};





class PythonQtShell_QPlainTextEdit : public QPlainTextEdit
{
public:
    PythonQtShell_QPlainTextEdit(QWidget*  parent = 0):QPlainTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QPlainTextEdit(const QString&  text, QWidget*  parent = 0):QPlainTextEdit(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPlainTextEdit();

virtual void actionEvent(QActionEvent*  arg__1);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void doSetTextCursor(const QTextCursor&  cursor);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlainTextEdit : public QPlainTextEdit
{ public:
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QPlainTextEdit::canInsertFromMimeData(source); }
inline void promoted_changeEvent(QEvent*  e) { QPlainTextEdit::changeEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QPlainTextEdit::contextMenuEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QPlainTextEdit::createMimeDataFromSelection(); }
inline void promoted_doSetTextCursor(const QTextCursor&  cursor) { QPlainTextEdit::doSetTextCursor(cursor); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QPlainTextEdit::dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QPlainTextEdit::dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QPlainTextEdit::dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QPlainTextEdit::dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QPlainTextEdit::event(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QPlainTextEdit::focusInEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QPlainTextEdit::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QPlainTextEdit::focusOutEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QPlainTextEdit::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QPlainTextEdit::inputMethodQuery(property); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { QPlainTextEdit::insertFromMimeData(source); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QPlainTextEdit::keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QPlainTextEdit::keyReleaseEvent(e); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QPlainTextEdit::loadResource(type, name); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QPlainTextEdit::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QPlainTextEdit::mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QPlainTextEdit::mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QPlainTextEdit::mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QPlainTextEdit::paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QPlainTextEdit::resizeEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QPlainTextEdit::scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QPlainTextEdit::showEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  e) { QPlainTextEdit::timerEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QPlainTextEdit::wheelEvent(e); }
};

class PythonQtWrapper_QPlainTextEdit : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextEdit* new_QPlainTextEdit(QWidget*  parent = 0);
QPlainTextEdit* new_QPlainTextEdit(const QString&  text, QWidget*  parent = 0);
void delete_QPlainTextEdit(QPlainTextEdit* obj) { delete obj; } 
    QString  anchorAt(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
    bool  backgroundVisible(QPlainTextEdit* theWrappedObject) const;
    int  blockCount(QPlainTextEdit* theWrappedObject) const;
    bool  canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const;
    bool  canPaste(QPlainTextEdit* theWrappedObject) const;
    bool  centerOnScroll(QPlainTextEdit* theWrappedObject) const;
    void changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e);
    void contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e);
    QMimeData*  createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const;
    QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject);
    QTextCharFormat  currentCharFormat(QPlainTextEdit* theWrappedObject) const;
    QTextCursor  cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
    QRect  cursorRect(QPlainTextEdit* theWrappedObject) const;
    QRect  cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
    int  cursorWidth(QPlainTextEdit* theWrappedObject) const;
    void doSetTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
    QTextDocument*  document(QPlainTextEdit* theWrappedObject) const;
    QString  documentTitle(QPlainTextEdit* theWrappedObject) const;
    void dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e);
    void dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e);
    void dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e);
    void dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e);
    void ensureCursorVisible(QPlainTextEdit* theWrappedObject);
    bool  event(QPlainTextEdit* theWrappedObject, QEvent*  e);
    QList<QTextEdit::ExtraSelection >  extraSelections(QPlainTextEdit* theWrappedObject) const;
    bool  find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
    void focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
    bool  focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next);
    void focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
    void inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
    QVariant  inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
    void insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source);
    bool  isReadOnly(QPlainTextEdit* theWrappedObject) const;
    bool  isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const;
    void keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
    void keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
    QPlainTextEdit::LineWrapMode  lineWrapMode(QPlainTextEdit* theWrappedObject) const;
    QVariant  loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name);
    int  maximumBlockCount(QPlainTextEdit* theWrappedObject) const;
    void mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
    void mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
    void mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
    void mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
    void mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
    void moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
    bool  overwriteMode(QPlainTextEdit* theWrappedObject) const;
    void paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e);
    void resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e);
    void scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy);
    void setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible);
    void setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled);
    void setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format);
    void setCursorWidth(QPlainTextEdit* theWrappedObject, int  width);
    void setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document);
    void setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title);
    void setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
    void setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode);
    void setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum);
    void setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite);
    void setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro);
    void setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b);
    void setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width);
    void setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
    void setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
    void setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable);
    void setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
    void showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1);
    bool  tabChangesFocus(QPlainTextEdit* theWrappedObject) const;
    int  tabStopWidth(QPlainTextEdit* theWrappedObject) const;
    QTextCursor  textCursor(QPlainTextEdit* theWrappedObject) const;
    Qt::TextInteractionFlags  textInteractionFlags(QPlainTextEdit* theWrappedObject) const;
    void timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e);
    QString  toPlainText(QPlainTextEdit* theWrappedObject) const;
    void wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e);
    QTextOption::WrapMode  wordWrapMode(QPlainTextEdit* theWrappedObject) const;
};





class PythonQtWrapper_QPolygonF : public QObject
{ Q_OBJECT
public:
public slots:
QPolygonF* new_QPolygonF();
QPolygonF* new_QPolygonF(const QPolygon&  a);
QPolygonF* new_QPolygonF(const QPolygonF&  a);
QPolygonF* new_QPolygonF(const QRectF&  r);
QPolygonF* new_QPolygonF(const QVector<QPointF >&  v);
QPolygonF* new_QPolygonF(int  size);
void delete_QPolygonF(QPolygonF* obj) { delete obj; } 
    void append(QPolygonF* theWrappedObject, const QPointF&  t);
    const QPointF*  at(QPolygonF* theWrappedObject, int  i) const;
    QRectF  boundingRect(QPolygonF* theWrappedObject) const;
    int  capacity(QPolygonF* theWrappedObject) const;
    void clear(QPolygonF* theWrappedObject);
    bool  contains(QPolygonF* theWrappedObject, const QPointF&  t) const;
    bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
    int  count(QPolygonF* theWrappedObject) const;
    int  count(QPolygonF* theWrappedObject, const QPointF&  t) const;
    bool  empty(QPolygonF* theWrappedObject) const;
    bool  endsWith(QPolygonF* theWrappedObject, const QPointF&  t) const;
    QVector<QPointF >*  fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size);
    const QPointF*  first(QPolygonF* theWrappedObject) const;
    QVector<QPointF >  static_QPolygonF_fromList(const QList<QPointF >&  list);
    int  indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
    QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
    bool  isClosed(QPolygonF* theWrappedObject) const;
    bool  isEmpty(QPolygonF* theWrappedObject) const;
    bool  isSharedWith(QPolygonF* theWrappedObject, const QVector<QPointF >&  other) const;
    const QPointF*  last(QPolygonF* theWrappedObject) const;
    int  lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
    QVector<QPointF >  mid(QPolygonF* theWrappedObject, int  pos, int  length) const;
    bool  __ne__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
    QPolygonF  __mul__(QPolygonF* theWrappedObject, const QMatrix&  m);
    QPolygonF  __mul__(QPolygonF* theWrappedObject, const QTransform&  m);
    bool  __eq__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
    void pop_back(QPolygonF* theWrappedObject);
    void pop_front(QPolygonF* theWrappedObject);
    void prepend(QPolygonF* theWrappedObject, const QPointF&  t);
    void push_back(QPolygonF* theWrappedObject, const QPointF&  t);
    void push_front(QPolygonF* theWrappedObject, const QPointF&  t);
    void remove(QPolygonF* theWrappedObject, int  i);
    void remove(QPolygonF* theWrappedObject, int  i, int  n);
    void replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t);
    void reserve(QPolygonF* theWrappedObject, int  size);
    void resize(QPolygonF* theWrappedObject, int  size);
    void setSharable(QPolygonF* theWrappedObject, bool  sharable);
    int  size(QPolygonF* theWrappedObject) const;
    void squeeze(QPolygonF* theWrappedObject);
    bool  startsWith(QPolygonF* theWrappedObject, const QPointF&  t) const;
    QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
    void swap(QPolygonF* theWrappedObject, QPolygonF&  other);
    QList<QPointF >  toList(QPolygonF* theWrappedObject) const;
    QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
    void translate(QPolygonF* theWrappedObject, const QPointF&  offset);
    void translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy);
    QPolygonF  translated(QPolygonF* theWrappedObject, const QPointF&  offset) const;
    QPolygonF  translated(QPolygonF* theWrappedObject, qreal  dx, qreal  dy) const;
    QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
    QPointF  value(QPolygonF* theWrappedObject, int  i) const;
    QPointF  value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const;
    QString py_toString(QPolygonF*);
};





class PythonQtShell_QPrintDialog : public QPrintDialog
{
public:
    PythonQtShell_QPrintDialog(QPrinter*  printer, QWidget*  parent = 0):QPrintDialog(printer, parent),_wrapper(NULL) {};
    PythonQtShell_QPrintDialog(QWidget*  parent = 0):QPrintDialog(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPrintDialog();

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

class PythonQtPublicPromoter_QPrintDialog : public QPrintDialog
{ public:
inline void promoted_accept() { QPrintDialog::accept(); }
inline void promoted_accepted() { QPrintDialog::accepted(); }
inline void promoted_done(int  result) { QPrintDialog::done(result); }
inline int  promoted_exec() { return QPrintDialog::exec(); }
inline void promoted_open() { QPrintDialog::open(); }
};

class PythonQtWrapper_QPrintDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPrintDialog* new_QPrintDialog(QPrinter*  printer, QWidget*  parent = 0);
QPrintDialog* new_QPrintDialog(QWidget*  parent = 0);
void delete_QPrintDialog(QPrintDialog* obj) { delete obj; } 
    void accept(QPrintDialog* theWrappedObject);
    void accepted(QPrintDialog* theWrappedObject);
    void done(QPrintDialog* theWrappedObject, int  result);
    int  exec(QPrintDialog* theWrappedObject);
    void open(QPrintDialog* theWrappedObject);
    void open(QPrintDialog* theWrappedObject, QObject*  receiver, const char*  member);
    QAbstractPrintDialog::PrintDialogOptions  options(QPrintDialog* theWrappedObject) const;
    void setOption(QPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option, bool  on = true);
    void setOptions(QPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOptions  options);
    void setVisible(QPrintDialog* theWrappedObject, bool  visible);
    bool  testOption(QPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option) const;
};





class PythonQtShell_QPrintEngine : public QPrintEngine
{
public:
    PythonQtShell_QPrintEngine():QPrintEngine(),_wrapper(NULL) {};

   ~PythonQtShell_QPrintEngine();

virtual bool  abort();
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual bool  newPage();
virtual QPrinter::PrinterState  printerState() const;
virtual QVariant  property(QPrintEngine::PrintEnginePropertyKey  key) const;
virtual void setProperty(QPrintEngine::PrintEnginePropertyKey  key, const QVariant&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPrintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PrintEnginePropertyKey )
enum PrintEnginePropertyKey{
  PPK_CollateCopies = QPrintEngine::PPK_CollateCopies,   PPK_ColorMode = QPrintEngine::PPK_ColorMode,   PPK_Creator = QPrintEngine::PPK_Creator,   PPK_DocumentName = QPrintEngine::PPK_DocumentName,   PPK_FullPage = QPrintEngine::PPK_FullPage,   PPK_NumberOfCopies = QPrintEngine::PPK_NumberOfCopies,   PPK_Orientation = QPrintEngine::PPK_Orientation,   PPK_OutputFileName = QPrintEngine::PPK_OutputFileName,   PPK_PageOrder = QPrintEngine::PPK_PageOrder,   PPK_PageRect = QPrintEngine::PPK_PageRect,   PPK_PageSize = QPrintEngine::PPK_PageSize,   PPK_PaperRect = QPrintEngine::PPK_PaperRect,   PPK_PaperSource = QPrintEngine::PPK_PaperSource,   PPK_PrinterName = QPrintEngine::PPK_PrinterName,   PPK_PrinterProgram = QPrintEngine::PPK_PrinterProgram,   PPK_Resolution = QPrintEngine::PPK_Resolution,   PPK_SelectionOption = QPrintEngine::PPK_SelectionOption,   PPK_SupportedResolutions = QPrintEngine::PPK_SupportedResolutions,   PPK_WindowsPageSize = QPrintEngine::PPK_WindowsPageSize,   PPK_FontEmbedding = QPrintEngine::PPK_FontEmbedding,   PPK_Duplex = QPrintEngine::PPK_Duplex,   PPK_PaperSources = QPrintEngine::PPK_PaperSources,   PPK_CustomPaperSize = QPrintEngine::PPK_CustomPaperSize,   PPK_PageMargins = QPrintEngine::PPK_PageMargins,   PPK_CopyCount = QPrintEngine::PPK_CopyCount,   PPK_SupportsMultipleCopies = QPrintEngine::PPK_SupportsMultipleCopies,   PPK_PaperSize = QPrintEngine::PPK_PaperSize,   PPK_CustomBase = QPrintEngine::PPK_CustomBase};
public slots:
QPrintEngine* new_QPrintEngine();
void delete_QPrintEngine(QPrintEngine* obj) { delete obj; } 
};





class PythonQtShell_QPrintPreviewDialog : public QPrintPreviewDialog
{
public:
    PythonQtShell_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewDialog(printer, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QPrintPreviewDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewDialog(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QPrintPreviewDialog();

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

class PythonQtPublicPromoter_QPrintPreviewDialog : public QPrintPreviewDialog
{ public:
inline void promoted_done(int  result) { QPrintPreviewDialog::done(result); }
inline void promoted_open() { QPrintPreviewDialog::open(); }
};

class PythonQtWrapper_QPrintPreviewDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPrintPreviewDialog* new_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QPrintPreviewDialog* new_QPrintPreviewDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QPrintPreviewDialog(QPrintPreviewDialog* obj) { delete obj; } 
    void done(QPrintPreviewDialog* theWrappedObject, int  result);
    void open(QPrintPreviewDialog* theWrappedObject);
    void open(QPrintPreviewDialog* theWrappedObject, QObject*  receiver, const char*  member);
    QPrinter*  printer(QPrintPreviewDialog* theWrappedObject);
    void setVisible(QPrintPreviewDialog* theWrappedObject, bool  visible);
};





class PythonQtShell_QPrintPreviewWidget : public QPrintPreviewWidget
{
public:
    PythonQtShell_QPrintPreviewWidget(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewWidget(printer, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QPrintPreviewWidget(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewWidget(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QPrintPreviewWidget();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPrintPreviewWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ViewMode ZoomMode )
enum ViewMode{
  SinglePageView = QPrintPreviewWidget::SinglePageView,   FacingPagesView = QPrintPreviewWidget::FacingPagesView,   AllPagesView = QPrintPreviewWidget::AllPagesView};
enum ZoomMode{
  CustomZoom = QPrintPreviewWidget::CustomZoom,   FitToWidth = QPrintPreviewWidget::FitToWidth,   FitInView = QPrintPreviewWidget::FitInView};
public slots:
QPrintPreviewWidget* new_QPrintPreviewWidget(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QPrintPreviewWidget* new_QPrintPreviewWidget(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QPrintPreviewWidget(QPrintPreviewWidget* obj) { delete obj; } 
    int  currentPage(QPrintPreviewWidget* theWrappedObject) const;
    QPrinter::Orientation  orientation(QPrintPreviewWidget* theWrappedObject) const;
    int  pageCount(QPrintPreviewWidget* theWrappedObject) const;
    void setVisible(QPrintPreviewWidget* theWrappedObject, bool  visible);
    QPrintPreviewWidget::ViewMode  viewMode(QPrintPreviewWidget* theWrappedObject) const;
    qreal  zoomFactor(QPrintPreviewWidget* theWrappedObject) const;
    QPrintPreviewWidget::ZoomMode  zoomMode(QPrintPreviewWidget* theWrappedObject) const;
};





class PythonQtShell_QPrinter : public QPrinter
{
public:
    PythonQtShell_QPrinter(QPrinter::PrinterMode  mode = QPrinter::ScreenResolution):QPrinter(mode),_wrapper(NULL) {};
    PythonQtShell_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode = QPrinter::ScreenResolution):QPrinter(printer, mode),_wrapper(NULL) {};

   ~PythonQtShell_QPrinter();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPrinter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PrintRange PrinterMode OutputFormat Orientation PrinterState PageOrder DuplexMode PaperSource Unit ColorMode )
enum PrintRange{
  AllPages = QPrinter::AllPages,   Selection = QPrinter::Selection,   PageRange = QPrinter::PageRange,   CurrentPage = QPrinter::CurrentPage};
enum PrinterMode{
  ScreenResolution = QPrinter::ScreenResolution,   PrinterResolution = QPrinter::PrinterResolution,   HighResolution = QPrinter::HighResolution};
enum OutputFormat{
  NativeFormat = QPrinter::NativeFormat,   PdfFormat = QPrinter::PdfFormat};
enum Orientation{
  Portrait = QPrinter::Portrait,   Landscape = QPrinter::Landscape};
enum PrinterState{
  Idle = QPrinter::Idle,   Active = QPrinter::Active,   Aborted = QPrinter::Aborted,   Error = QPrinter::Error};
enum PageOrder{
  FirstPageFirst = QPrinter::FirstPageFirst,   LastPageFirst = QPrinter::LastPageFirst};
enum DuplexMode{
  DuplexNone = QPrinter::DuplexNone,   DuplexAuto = QPrinter::DuplexAuto,   DuplexLongSide = QPrinter::DuplexLongSide,   DuplexShortSide = QPrinter::DuplexShortSide};
enum PaperSource{
  OnlyOne = QPrinter::OnlyOne,   Lower = QPrinter::Lower,   Middle = QPrinter::Middle,   Manual = QPrinter::Manual,   Envelope = QPrinter::Envelope,   EnvelopeManual = QPrinter::EnvelopeManual,   Auto = QPrinter::Auto,   Tractor = QPrinter::Tractor,   SmallFormat = QPrinter::SmallFormat,   LargeFormat = QPrinter::LargeFormat,   LargeCapacity = QPrinter::LargeCapacity,   Cassette = QPrinter::Cassette,   FormSource = QPrinter::FormSource,   MaxPageSource = QPrinter::MaxPageSource};
enum Unit{
  Millimeter = QPrinter::Millimeter,   Point = QPrinter::Point,   Inch = QPrinter::Inch,   Pica = QPrinter::Pica,   Didot = QPrinter::Didot,   Cicero = QPrinter::Cicero,   DevicePixel = QPrinter::DevicePixel};
enum ColorMode{
  GrayScale = QPrinter::GrayScale,   Color = QPrinter::Color};
public slots:
QPrinter* new_QPrinter(QPrinter::PrinterMode  mode = QPrinter::ScreenResolution);
QPrinter* new_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode = QPrinter::ScreenResolution);
void delete_QPrinter(QPrinter* obj) { delete obj; } 
    bool  abort(QPrinter* theWrappedObject);
    int  actualNumCopies(QPrinter* theWrappedObject) const;
    bool  collateCopies(QPrinter* theWrappedObject) const;
    QPrinter::ColorMode  colorMode(QPrinter* theWrappedObject) const;
    int  copyCount(QPrinter* theWrappedObject) const;
    QString  creator(QPrinter* theWrappedObject) const;
    int  devType(QPrinter* theWrappedObject) const;
    QString  docName(QPrinter* theWrappedObject) const;
    bool  doubleSidedPrinting(QPrinter* theWrappedObject) const;
    QPrinter::DuplexMode  duplex(QPrinter* theWrappedObject) const;
    bool  fontEmbeddingEnabled(QPrinter* theWrappedObject) const;
    int  fromPage(QPrinter* theWrappedObject) const;
    bool  fullPage(QPrinter* theWrappedObject) const;
    void getPageMargins(QPrinter* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom, QPrinter::Unit  unit) const;
    bool  isValid(QPrinter* theWrappedObject) const;
    bool  newPage(QPrinter* theWrappedObject);
    int  numCopies(QPrinter* theWrappedObject) const;
    QPrinter::Orientation  orientation(QPrinter* theWrappedObject) const;
    QString  outputFileName(QPrinter* theWrappedObject) const;
    QPrinter::OutputFormat  outputFormat(QPrinter* theWrappedObject) const;
    QPrinter::PageOrder  pageOrder(QPrinter* theWrappedObject) const;
    QRect  pageRect(QPrinter* theWrappedObject) const;
    QRectF  pageRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const;
    QPaintEngine*  paintEngine(QPrinter* theWrappedObject) const;
    QRect  paperRect(QPrinter* theWrappedObject) const;
    QRectF  paperRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const;
    QSizeF  paperSize(QPrinter* theWrappedObject, QPrinter::Unit  unit) const;
    QPrinter::PaperSource  paperSource(QPrinter* theWrappedObject) const;
    QPrintEngine*  printEngine(QPrinter* theWrappedObject) const;
    QString  printProgram(QPrinter* theWrappedObject) const;
    QPrinter::PrintRange  printRange(QPrinter* theWrappedObject) const;
    QString  printerName(QPrinter* theWrappedObject) const;
    QPrinter::PrinterState  printerState(QPrinter* theWrappedObject) const;
    int  resolution(QPrinter* theWrappedObject) const;
    void setCollateCopies(QPrinter* theWrappedObject, bool  collate);
    void setColorMode(QPrinter* theWrappedObject, QPrinter::ColorMode  arg__1);
    void setCopyCount(QPrinter* theWrappedObject, int  arg__1);
    void setCreator(QPrinter* theWrappedObject, const QString&  arg__1);
    void setDocName(QPrinter* theWrappedObject, const QString&  arg__1);
    void setDoubleSidedPrinting(QPrinter* theWrappedObject, bool  enable);
    void setDuplex(QPrinter* theWrappedObject, QPrinter::DuplexMode  duplex);
    void setFontEmbeddingEnabled(QPrinter* theWrappedObject, bool  enable);
    void setFromTo(QPrinter* theWrappedObject, int  fromPage, int  toPage);
    void setFullPage(QPrinter* theWrappedObject, bool  arg__1);
    void setNumCopies(QPrinter* theWrappedObject, int  arg__1);
    void setOrientation(QPrinter* theWrappedObject, QPrinter::Orientation  arg__1);
    void setOutputFileName(QPrinter* theWrappedObject, const QString&  arg__1);
    void setOutputFormat(QPrinter* theWrappedObject, QPrinter::OutputFormat  format);
    void setPageMargins(QPrinter* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom, QPrinter::Unit  unit);
    void setPageOrder(QPrinter* theWrappedObject, QPrinter::PageOrder  arg__1);
    void setPageSizeMM(QPrinter* theWrappedObject, const QSizeF&  size);
    void setPaperSize(QPrinter* theWrappedObject, const QSizeF&  paperSize, QPrinter::Unit  unit);
    void setPaperSource(QPrinter* theWrappedObject, QPrinter::PaperSource  arg__1);
    void setPrintProgram(QPrinter* theWrappedObject, const QString&  arg__1);
    void setPrintRange(QPrinter* theWrappedObject, QPrinter::PrintRange  range);
    void setPrinterName(QPrinter* theWrappedObject, const QString&  arg__1);
    void setResolution(QPrinter* theWrappedObject, int  arg__1);
    QList<int >  supportedResolutions(QPrinter* theWrappedObject) const;
    bool  supportsMultipleCopies(QPrinter* theWrappedObject) const;
    int  toPage(QPrinter* theWrappedObject) const;
};





class PythonQtShell_QProgressBar : public QProgressBar
{
public:
    PythonQtShell_QProgressBar(QWidget*  parent = 0):QProgressBar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QProgressBar();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual QString  text() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProgressBar : public QProgressBar
{ public:
inline bool  promoted_event(QEvent*  e) { return QProgressBar::event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QProgressBar::paintEvent(arg__1); }
inline QString  promoted_text() const { return QProgressBar::text(); }
};

class PythonQtWrapper_QProgressBar : public QObject
{ Q_OBJECT
public:
public slots:
QProgressBar* new_QProgressBar(QWidget*  parent = 0);
void delete_QProgressBar(QProgressBar* obj) { delete obj; } 
    Qt::Alignment  alignment(QProgressBar* theWrappedObject) const;
    bool  event(QProgressBar* theWrappedObject, QEvent*  e);
    QString  format(QProgressBar* theWrappedObject) const;
    bool  invertedAppearance(QProgressBar* theWrappedObject) const;
    bool  isTextVisible(QProgressBar* theWrappedObject) const;
    int  maximum(QProgressBar* theWrappedObject) const;
    int  minimum(QProgressBar* theWrappedObject) const;
    QSize  minimumSizeHint(QProgressBar* theWrappedObject) const;
    Qt::Orientation  orientation(QProgressBar* theWrappedObject) const;
    void paintEvent(QProgressBar* theWrappedObject, QPaintEvent*  arg__1);
    void setAlignment(QProgressBar* theWrappedObject, Qt::Alignment  alignment);
    void setFormat(QProgressBar* theWrappedObject, const QString&  format);
    void setInvertedAppearance(QProgressBar* theWrappedObject, bool  invert);
    void setTextDirection(QProgressBar* theWrappedObject, QProgressBar::Direction  textDirection);
    void setTextVisible(QProgressBar* theWrappedObject, bool  visible);
    QSize  sizeHint(QProgressBar* theWrappedObject) const;
    QString  text(QProgressBar* theWrappedObject) const;
    QProgressBar::Direction  textDirection(QProgressBar* theWrappedObject) const;
    int  value(QProgressBar* theWrappedObject) const;
};





class PythonQtShell_QProgressDialog : public QProgressDialog
{
public:
    PythonQtShell_QProgressDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QProgressDialog(parent, flags),_wrapper(NULL) {};
    PythonQtShell_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QProgressDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  arg__1);
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
virtual void resizeEvent(QResizeEvent*  event);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProgressDialog : public QProgressDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { QProgressDialog::changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QProgressDialog::closeEvent(event); }
inline void promoted_open() { QProgressDialog::open(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QProgressDialog::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QProgressDialog::showEvent(event); }
};

class PythonQtWrapper_QProgressDialog : public QObject
{ Q_OBJECT
public:
public slots:
QProgressDialog* new_QProgressDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QProgressDialog* new_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QProgressDialog(QProgressDialog* obj) { delete obj; } 
    bool  autoClose(QProgressDialog* theWrappedObject) const;
    bool  autoReset(QProgressDialog* theWrappedObject) const;
    void changeEvent(QProgressDialog* theWrappedObject, QEvent*  event);
    void closeEvent(QProgressDialog* theWrappedObject, QCloseEvent*  event);
    QString  labelText(QProgressDialog* theWrappedObject) const;
    int  maximum(QProgressDialog* theWrappedObject) const;
    int  minimum(QProgressDialog* theWrappedObject) const;
    int  minimumDuration(QProgressDialog* theWrappedObject) const;
    void open(QProgressDialog* theWrappedObject);
    void open(QProgressDialog* theWrappedObject, QObject*  receiver, const char*  member);
    void resizeEvent(QProgressDialog* theWrappedObject, QResizeEvent*  event);
    void setAutoClose(QProgressDialog* theWrappedObject, bool  close);
    void setAutoReset(QProgressDialog* theWrappedObject, bool  reset);
    void setBar(QProgressDialog* theWrappedObject, QProgressBar*  bar);
    void setCancelButton(QProgressDialog* theWrappedObject, QPushButton*  button);
    void setLabel(QProgressDialog* theWrappedObject, QLabel*  label);
    void showEvent(QProgressDialog* theWrappedObject, QShowEvent*  event);
    QSize  sizeHint(QProgressDialog* theWrappedObject) const;
    int  value(QProgressDialog* theWrappedObject) const;
    bool  wasCanceled(QProgressDialog* theWrappedObject) const;
};





class PythonQtShell_QPushButton : public QPushButton
{
public:
    PythonQtShell_QPushButton(QWidget*  parent = 0):QPushButton(parent),_wrapper(NULL) {};
    PythonQtShell_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = 0):QPushButton(icon, text, parent),_wrapper(NULL) {};
    PythonQtShell_QPushButton(const QString&  text, QWidget*  parent = 0):QPushButton(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPushButton();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPushButton : public QPushButton
{ public:
inline bool  promoted_event(QEvent*  e) { return QPushButton::event(e); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QPushButton::focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QPushButton::focusOutEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QPushButton::keyPressEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QPushButton::paintEvent(arg__1); }
};

class PythonQtWrapper_QPushButton : public QObject
{ Q_OBJECT
public:
public slots:
QPushButton* new_QPushButton(QWidget*  parent = 0);
QPushButton* new_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = 0);
QPushButton* new_QPushButton(const QString&  text, QWidget*  parent = 0);
void delete_QPushButton(QPushButton* obj) { delete obj; } 
    bool  autoDefault(QPushButton* theWrappedObject) const;
    bool  event(QPushButton* theWrappedObject, QEvent*  e);
    void focusInEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1);
    void focusOutEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1);
    bool  isDefault(QPushButton* theWrappedObject) const;
    bool  isFlat(QPushButton* theWrappedObject) const;
    void keyPressEvent(QPushButton* theWrappedObject, QKeyEvent*  arg__1);
    QMenu*  menu(QPushButton* theWrappedObject) const;
    QSize  minimumSizeHint(QPushButton* theWrappedObject) const;
    void paintEvent(QPushButton* theWrappedObject, QPaintEvent*  arg__1);
    void setAutoDefault(QPushButton* theWrappedObject, bool  arg__1);
    void setDefault(QPushButton* theWrappedObject, bool  arg__1);
    void setFlat(QPushButton* theWrappedObject, bool  arg__1);
    void setMenu(QPushButton* theWrappedObject, QMenu*  menu);
    QSize  sizeHint(QPushButton* theWrappedObject) const;
};





class PythonQtWrapper_QQuaternion : public QObject
{ Q_OBJECT
public:
public slots:
QQuaternion* new_QQuaternion();
QQuaternion* new_QQuaternion(const QVector4D&  vector);
QQuaternion* new_QQuaternion(float  scalar, const QVector3D&  vector);
QQuaternion* new_QQuaternion(float  scalar, float  xpos, float  ypos, float  zpos);
QQuaternion* new_QQuaternion(const QQuaternion& other) {
QQuaternion* a = new QQuaternion();
*((QQuaternion*)a) = other;
return a; }
void delete_QQuaternion(QQuaternion* obj) { delete obj; } 
    QQuaternion  conjugate(QQuaternion* theWrappedObject) const;
    QQuaternion  static_QQuaternion_fromAxisAndAngle(const QVector3D&  axis, float  angle);
    QQuaternion  static_QQuaternion_fromAxisAndAngle(float  x, float  y, float  z, float  angle);
    bool  isIdentity(QQuaternion* theWrappedObject) const;
    bool  isNull(QQuaternion* theWrappedObject) const;
    float  length(QQuaternion* theWrappedObject) const;
    float  lengthSquared(QQuaternion* theWrappedObject) const;
    QQuaternion  static_QQuaternion_nlerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t);
    void normalize(QQuaternion* theWrappedObject);
    QQuaternion  normalized(QQuaternion* theWrappedObject) const;
    const QQuaternion  __mul__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
    const QQuaternion  __mul__(QQuaternion* theWrappedObject, float  factor);
    QQuaternion*  __imul__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
    QQuaternion*  __imul__(QQuaternion* theWrappedObject, float  factor);
    const QQuaternion  __add__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
    QQuaternion*  __iadd__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
    const QQuaternion  __sub__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
    QQuaternion*  __isub__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
    const QQuaternion  __div__(QQuaternion* theWrappedObject, float  divisor);
    QQuaternion*  __idiv__(QQuaternion* theWrappedObject, float  divisor);
    bool  __eq__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
    QVector3D  rotatedVector(QQuaternion* theWrappedObject, const QVector3D&  vector) const;
    float  scalar(QQuaternion* theWrappedObject) const;
    void setScalar(QQuaternion* theWrappedObject, float  scalar);
    void setVector(QQuaternion* theWrappedObject, const QVector3D&  vector);
    void setVector(QQuaternion* theWrappedObject, float  x, float  y, float  z);
    void setX(QQuaternion* theWrappedObject, float  x);
    void setY(QQuaternion* theWrappedObject, float  y);
    void setZ(QQuaternion* theWrappedObject, float  z);
    QQuaternion  static_QQuaternion_slerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t);
    QVector4D  toVector4D(QQuaternion* theWrappedObject) const;
    QVector3D  vector(QQuaternion* theWrappedObject) const;
    float  x(QQuaternion* theWrappedObject) const;
    float  y(QQuaternion* theWrappedObject) const;
    float  z(QQuaternion* theWrappedObject) const;
    QString py_toString(QQuaternion*);
    bool __nonzero__(QQuaternion* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QRadialGradient : public QObject
{ Q_OBJECT
public:
public slots:
QRadialGradient* new_QRadialGradient();
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  centerRadius, const QPointF&  focalPoint, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  centerRadius, qreal  fx, qreal  fy, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy);
QRadialGradient* new_QRadialGradient(const QRadialGradient& other) {
QRadialGradient* a = new QRadialGradient();
*((QRadialGradient*)a) = other;
return a; }
void delete_QRadialGradient(QRadialGradient* obj) { delete obj; } 
    QPointF  center(QRadialGradient* theWrappedObject) const;
    qreal  centerRadius(QRadialGradient* theWrappedObject) const;
    QPointF  focalPoint(QRadialGradient* theWrappedObject) const;
    qreal  focalRadius(QRadialGradient* theWrappedObject) const;
    qreal  radius(QRadialGradient* theWrappedObject) const;
    void setCenter(QRadialGradient* theWrappedObject, const QPointF&  center);
    void setCenter(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
    void setCenterRadius(QRadialGradient* theWrappedObject, qreal  radius);
    void setFocalPoint(QRadialGradient* theWrappedObject, const QPointF&  focalPoint);
    void setFocalPoint(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
    void setFocalRadius(QRadialGradient* theWrappedObject, qreal  radius);
    void setRadius(QRadialGradient* theWrappedObject, qreal  radius);
};





class PythonQtShell_QRadioButton : public QRadioButton
{
public:
    PythonQtShell_QRadioButton(QWidget*  parent = 0):QRadioButton(parent),_wrapper(NULL) {};
    PythonQtShell_QRadioButton(const QString&  text, QWidget*  parent = 0):QRadioButton(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRadioButton();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  hitButton(const QPoint&  arg__1) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRadioButton : public QRadioButton
{ public:
inline bool  promoted_event(QEvent*  e) { return QRadioButton::event(e); }
inline bool  promoted_hitButton(const QPoint&  arg__1) const { return QRadioButton::hitButton(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QRadioButton::mouseMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QRadioButton::paintEvent(arg__1); }
};

class PythonQtWrapper_QRadioButton : public QObject
{ Q_OBJECT
public:
public slots:
QRadioButton* new_QRadioButton(QWidget*  parent = 0);
QRadioButton* new_QRadioButton(const QString&  text, QWidget*  parent = 0);
void delete_QRadioButton(QRadioButton* obj) { delete obj; } 
    bool  event(QRadioButton* theWrappedObject, QEvent*  e);
    bool  hitButton(QRadioButton* theWrappedObject, const QPoint&  arg__1) const;
    QSize  minimumSizeHint(QRadioButton* theWrappedObject) const;
    void mouseMoveEvent(QRadioButton* theWrappedObject, QMouseEvent*  arg__1);
    void paintEvent(QRadioButton* theWrappedObject, QPaintEvent*  arg__1);
    QSize  sizeHint(QRadioButton* theWrappedObject) const;
};





class PythonQtShell_QRegExpValidator : public QRegExpValidator
{
public:
    PythonQtShell_QRegExpValidator(QObject*  parent = 0):QRegExpValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QRegExpValidator(const QRegExp&  rx, QObject*  parent = 0):QRegExpValidator(rx, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRegExpValidator();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  input, int&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRegExpValidator : public QRegExpValidator
{ public:
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QRegExpValidator::validate(input, pos); }
};

class PythonQtWrapper_QRegExpValidator : public QObject
{ Q_OBJECT
public:
public slots:
QRegExpValidator* new_QRegExpValidator(QObject*  parent = 0);
QRegExpValidator* new_QRegExpValidator(const QRegExp&  rx, QObject*  parent = 0);
void delete_QRegExpValidator(QRegExpValidator* obj) { delete obj; } 
    const QRegExp*  regExp(QRegExpValidator* theWrappedObject) const;
    void setRegExp(QRegExpValidator* theWrappedObject, const QRegExp&  rx);
    QValidator::State  validate(QRegExpValidator* theWrappedObject, QString&  input, int&  pos) const;
};





class PythonQtShell_QResizeEvent : public QResizeEvent
{
public:
    PythonQtShell_QResizeEvent(const QSize&  size, const QSize&  oldSize):QResizeEvent(size, oldSize),_wrapper(NULL) {};

   ~PythonQtShell_QResizeEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QResizeEvent* new_QResizeEvent(const QSize&  size, const QSize&  oldSize);
void delete_QResizeEvent(QResizeEvent* obj) { delete obj; } 
    const QSize*  oldSize(QResizeEvent* theWrappedObject) const;
    const QSize*  size(QResizeEvent* theWrappedObject) const;
};





class PythonQtShell_QRubberBand : public QRubberBand
{
public:
    PythonQtShell_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2 = 0):QRubberBand(arg__1, arg__2),_wrapper(NULL) {};

   ~PythonQtShell_QRubberBand();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRubberBand : public QRubberBand
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QRubberBand::changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QRubberBand::event(e); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QRubberBand::moveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QRubberBand::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QRubberBand::resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QRubberBand::showEvent(arg__1); }
};

class PythonQtWrapper_QRubberBand : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Shape )
enum Shape{
  Line = QRubberBand::Line,   Rectangle = QRubberBand::Rectangle};
public slots:
QRubberBand* new_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2 = 0);
void delete_QRubberBand(QRubberBand* obj) { delete obj; } 
    void changeEvent(QRubberBand* theWrappedObject, QEvent*  arg__1);
    bool  event(QRubberBand* theWrappedObject, QEvent*  e);
    void move(QRubberBand* theWrappedObject, const QPoint&  p);
    void move(QRubberBand* theWrappedObject, int  x, int  y);
    void moveEvent(QRubberBand* theWrappedObject, QMoveEvent*  arg__1);
    void paintEvent(QRubberBand* theWrappedObject, QPaintEvent*  arg__1);
    void resize(QRubberBand* theWrappedObject, const QSize&  s);
    void resize(QRubberBand* theWrappedObject, int  w, int  h);
    void resizeEvent(QRubberBand* theWrappedObject, QResizeEvent*  arg__1);
    void setGeometry(QRubberBand* theWrappedObject, const QRect&  r);
    void setGeometry(QRubberBand* theWrappedObject, int  x, int  y, int  w, int  h);
    QRubberBand::Shape  shape(QRubberBand* theWrappedObject) const;
    void showEvent(QRubberBand* theWrappedObject, QShowEvent*  arg__1);
};





class PythonQtShell_QScrollArea : public QScrollArea
{
public:
    PythonQtShell_QScrollArea(QWidget*  parent = 0):QScrollArea(parent),_wrapper(NULL) {};

   ~PythonQtShell_QScrollArea();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QScrollArea : public QScrollArea
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QScrollArea::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QScrollArea::eventFilter(arg__1, arg__2); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QScrollArea::focusNextPrevChild(next); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QScrollArea::resizeEvent(arg__1); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QScrollArea::scrollContentsBy(dx, dy); }
};

class PythonQtWrapper_QScrollArea : public QObject
{ Q_OBJECT
public:
public slots:
QScrollArea* new_QScrollArea(QWidget*  parent = 0);
void delete_QScrollArea(QScrollArea* obj) { delete obj; } 
    Qt::Alignment  alignment(QScrollArea* theWrappedObject) const;
    void ensureVisible(QScrollArea* theWrappedObject, int  x, int  y, int  xmargin = 50, int  ymargin = 50);
    void ensureWidgetVisible(QScrollArea* theWrappedObject, QWidget*  childWidget, int  xmargin = 50, int  ymargin = 50);
    bool  event(QScrollArea* theWrappedObject, QEvent*  arg__1);
    bool  eventFilter(QScrollArea* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
    bool  focusNextPrevChild(QScrollArea* theWrappedObject, bool  next);
    void resizeEvent(QScrollArea* theWrappedObject, QResizeEvent*  arg__1);
    void scrollContentsBy(QScrollArea* theWrappedObject, int  dx, int  dy);
    void setAlignment(QScrollArea* theWrappedObject, Qt::Alignment  arg__1);
    void setWidget(QScrollArea* theWrappedObject, QWidget*  widget);
    void setWidgetResizable(QScrollArea* theWrappedObject, bool  resizable);
    QSize  sizeHint(QScrollArea* theWrappedObject) const;
    QWidget*  takeWidget(QScrollArea* theWrappedObject);
    QWidget*  widget(QScrollArea* theWrappedObject) const;
    bool  widgetResizable(QScrollArea* theWrappedObject) const;
};





class PythonQtShell_QScrollBar : public QScrollBar
{
public:
    PythonQtShell_QScrollBar(QWidget*  parent = 0):QScrollBar(parent),_wrapper(NULL) {};
    PythonQtShell_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = 0):QScrollBar(arg__1, parent),_wrapper(NULL) {};

   ~PythonQtShell_QScrollBar();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
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
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QScrollBar : public QScrollBar
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QScrollBar::contextMenuEvent(arg__1); }
inline bool  promoted_event(QEvent*  event) { return QScrollBar::event(event); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QScrollBar::hideEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QScrollBar::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QScrollBar::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QScrollBar::mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QScrollBar::paintEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QScrollBar::wheelEvent(arg__1); }
};

class PythonQtWrapper_QScrollBar : public QObject
{ Q_OBJECT
public:
public slots:
QScrollBar* new_QScrollBar(QWidget*  parent = 0);
QScrollBar* new_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = 0);
void delete_QScrollBar(QScrollBar* obj) { delete obj; } 
    void contextMenuEvent(QScrollBar* theWrappedObject, QContextMenuEvent*  arg__1);
    bool  event(QScrollBar* theWrappedObject, QEvent*  event);
    void hideEvent(QScrollBar* theWrappedObject, QHideEvent*  arg__1);
    void mouseMoveEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1);
    void mousePressEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1);
    void mouseReleaseEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1);
    void paintEvent(QScrollBar* theWrappedObject, QPaintEvent*  arg__1);
    QSize  sizeHint(QScrollBar* theWrappedObject) const;
    void wheelEvent(QScrollBar* theWrappedObject, QWheelEvent*  arg__1);
};





class PythonQtWrapper_QSessionManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RestartHint )
enum RestartHint{
  RestartIfRunning = QSessionManager::RestartIfRunning,   RestartAnyway = QSessionManager::RestartAnyway,   RestartImmediately = QSessionManager::RestartImmediately,   RestartNever = QSessionManager::RestartNever};
public slots:
    bool  allowsErrorInteraction(QSessionManager* theWrappedObject);
    bool  allowsInteraction(QSessionManager* theWrappedObject);
    void cancel(QSessionManager* theWrappedObject);
    QStringList  discardCommand(QSessionManager* theWrappedObject) const;
    bool  isPhase2(QSessionManager* theWrappedObject) const;
    void release(QSessionManager* theWrappedObject);
    void requestPhase2(QSessionManager* theWrappedObject);
    QStringList  restartCommand(QSessionManager* theWrappedObject) const;
    QSessionManager::RestartHint  restartHint(QSessionManager* theWrappedObject) const;
    QString  sessionId(QSessionManager* theWrappedObject) const;
    QString  sessionKey(QSessionManager* theWrappedObject) const;
    void setDiscardCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
    void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QString&  value);
    void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QStringList&  value);
    void setRestartCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
    void setRestartHint(QSessionManager* theWrappedObject, QSessionManager::RestartHint  arg__1);
};





class PythonQtShell_QShortcut : public QShortcut
{
public:
    PythonQtShell_QShortcut(QWidget*  parent):QShortcut(parent),_wrapper(NULL) {};
    PythonQtShell_QShortcut(const QKeySequence&  key, QWidget*  parent, const char*  member = 0, const char*  ambiguousMember = 0, Qt::ShortcutContext  context = Qt::WindowShortcut):QShortcut(key, parent, member, ambiguousMember, context),_wrapper(NULL) {};

   ~PythonQtShell_QShortcut();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QShortcut : public QShortcut
{ public:
inline bool  promoted_event(QEvent*  e) { return QShortcut::event(e); }
};

class PythonQtWrapper_QShortcut : public QObject
{ Q_OBJECT
public:
public slots:
QShortcut* new_QShortcut(QWidget*  parent);
QShortcut* new_QShortcut(const QKeySequence&  key, QWidget*  parent, const char*  member = 0, const char*  ambiguousMember = 0, Qt::ShortcutContext  context = Qt::WindowShortcut);
void delete_QShortcut(QShortcut* obj) { delete obj; } 
    bool  autoRepeat(QShortcut* theWrappedObject) const;
    Qt::ShortcutContext  context(QShortcut* theWrappedObject) const;
    bool  event(QShortcut* theWrappedObject, QEvent*  e);
    int  id(QShortcut* theWrappedObject) const;
    bool  isEnabled(QShortcut* theWrappedObject) const;
    QKeySequence  key(QShortcut* theWrappedObject) const;
    QWidget*  parentWidget(QShortcut* theWrappedObject) const;
    void setAutoRepeat(QShortcut* theWrappedObject, bool  on);
    void setContext(QShortcut* theWrappedObject, Qt::ShortcutContext  context);
    void setEnabled(QShortcut* theWrappedObject, bool  enable);
    void setKey(QShortcut* theWrappedObject, const QKeySequence&  key);
    void setWhatsThis(QShortcut* theWrappedObject, const QString&  text);
    QString  whatsThis(QShortcut* theWrappedObject) const;
};





class PythonQtShell_QShortcutEvent : public QShortcutEvent
{
public:
    PythonQtShell_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous = false):QShortcutEvent(key, id, ambiguous),_wrapper(NULL) {};

   ~PythonQtShell_QShortcutEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QShortcutEvent : public QObject
{ Q_OBJECT
public:
public slots:
QShortcutEvent* new_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous = false);
void delete_QShortcutEvent(QShortcutEvent* obj) { delete obj; } 
    bool  isAmbiguous(QShortcutEvent* theWrappedObject) const;
    const QKeySequence*  key(QShortcutEvent* theWrappedObject) const;
    int  shortcutId(QShortcutEvent* theWrappedObject) const;
};





class PythonQtWrapper_QShowEvent : public QObject
{ Q_OBJECT
public:
public slots:
QShowEvent* new_QShowEvent();
void delete_QShowEvent(QShowEvent* obj) { delete obj; } 
};





class PythonQtShell_QSizeGrip : public QSizeGrip
{
public:
    PythonQtShell_QSizeGrip(QWidget*  parent):QSizeGrip(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSizeGrip();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  hideEvent);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  mouseEvent);
virtual void moveEvent(QMoveEvent*  moveEvent);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  showEvent);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSizeGrip : public QSizeGrip
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QSizeGrip::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QSizeGrip::eventFilter(arg__1, arg__2); }
inline void promoted_hideEvent(QHideEvent*  hideEvent) { QSizeGrip::hideEvent(hideEvent); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QSizeGrip::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QSizeGrip::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  mouseEvent) { QSizeGrip::mouseReleaseEvent(mouseEvent); }
inline void promoted_moveEvent(QMoveEvent*  moveEvent) { QSizeGrip::moveEvent(moveEvent); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QSizeGrip::paintEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  showEvent) { QSizeGrip::showEvent(showEvent); }
};

class PythonQtWrapper_QSizeGrip : public QObject
{ Q_OBJECT
public:
public slots:
QSizeGrip* new_QSizeGrip(QWidget*  parent);
void delete_QSizeGrip(QSizeGrip* obj) { delete obj; } 
    bool  event(QSizeGrip* theWrappedObject, QEvent*  arg__1);
    bool  eventFilter(QSizeGrip* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
    void hideEvent(QSizeGrip* theWrappedObject, QHideEvent*  hideEvent);
    void mouseMoveEvent(QSizeGrip* theWrappedObject, QMouseEvent*  arg__1);
    void mousePressEvent(QSizeGrip* theWrappedObject, QMouseEvent*  arg__1);
    void mouseReleaseEvent(QSizeGrip* theWrappedObject, QMouseEvent*  mouseEvent);
    void moveEvent(QSizeGrip* theWrappedObject, QMoveEvent*  moveEvent);
    void paintEvent(QSizeGrip* theWrappedObject, QPaintEvent*  arg__1);
    void setVisible(QSizeGrip* theWrappedObject, bool  arg__1);
    void showEvent(QSizeGrip* theWrappedObject, QShowEvent*  showEvent);
    QSize  sizeHint(QSizeGrip* theWrappedObject) const;
};





class PythonQtShell_QSlider : public QSlider
{
public:
    PythonQtShell_QSlider(QWidget*  parent = 0):QSlider(parent),_wrapper(NULL) {};
    PythonQtShell_QSlider(Qt::Orientation  orientation, QWidget*  parent = 0):QSlider(orientation, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSlider();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
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
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  ev);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSlider : public QSlider
{ public:
inline bool  promoted_event(QEvent*  event) { return QSlider::event(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { QSlider::mouseMoveEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { QSlider::mousePressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { QSlider::mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  ev) { QSlider::paintEvent(ev); }
};

class PythonQtWrapper_QSlider : public QObject
{ Q_OBJECT
public:
public slots:
QSlider* new_QSlider(QWidget*  parent = 0);
QSlider* new_QSlider(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QSlider(QSlider* obj) { delete obj; } 
    bool  event(QSlider* theWrappedObject, QEvent*  event);
    QSize  minimumSizeHint(QSlider* theWrappedObject) const;
    void mouseMoveEvent(QSlider* theWrappedObject, QMouseEvent*  ev);
    void mousePressEvent(QSlider* theWrappedObject, QMouseEvent*  ev);
    void mouseReleaseEvent(QSlider* theWrappedObject, QMouseEvent*  ev);
    void paintEvent(QSlider* theWrappedObject, QPaintEvent*  ev);
    void setTickInterval(QSlider* theWrappedObject, int  ti);
    void setTickPosition(QSlider* theWrappedObject, QSlider::TickPosition  position);
    QSize  sizeHint(QSlider* theWrappedObject) const;
    int  tickInterval(QSlider* theWrappedObject) const;
    QSlider::TickPosition  tickPosition(QSlider* theWrappedObject) const;
};


