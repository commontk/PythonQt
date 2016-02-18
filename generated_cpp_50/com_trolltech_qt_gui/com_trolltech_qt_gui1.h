#include <PythonQt.h>
#include <QAbstractProxyModel>
#include <QIconEngine>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QUrl>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdesktopwidget.h>
#include <qdial.h>
#include <qdialog.h>
#include <qdialogbuttonbox.h>
#include <qdir.h>
#include <qdockwidget.h>
#include <qdrag.h>
#include <qerrormessage.h>
#include <qevent.h>
#include <qfiledialog.h>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qfocusframe.h>
#include <qfont.h>
#include <qfontcombobox.h>
#include <qfontdialog.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qformlayout.h>
#include <qframe.h>
#include <qgesture.h>
#include <qgraphicsanchorlayout.h>
#include <qgraphicseffect.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsproxywidget.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qspinbox.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtShell_QDesktopWidget : public QDesktopWidget
{
public:
    PythonQtShell_QDesktopWidget():QDesktopWidget(),_wrapper(NULL) {};

   ~PythonQtShell_QDesktopWidget();

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
virtual void resizeEvent(QResizeEvent*  e);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDesktopWidget : public QDesktopWidget
{ public:
inline void promoted_resizeEvent(QResizeEvent*  e) { QDesktopWidget::resizeEvent(e); }
};

class PythonQtWrapper_QDesktopWidget : public QObject
{ Q_OBJECT
public:
public slots:
QDesktopWidget* new_QDesktopWidget();
void delete_QDesktopWidget(QDesktopWidget* obj) { delete obj; } 
    const QRect  availableGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const;
    const QRect  availableGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const;
    const QRect  availableGeometry(QDesktopWidget* theWrappedObject, int  screen = -1) const;
    bool  isVirtualDesktop(QDesktopWidget* theWrappedObject) const;
    int  numScreens(QDesktopWidget* theWrappedObject) const;
    int  primaryScreen(QDesktopWidget* theWrappedObject) const;
    void resizeEvent(QDesktopWidget* theWrappedObject, QResizeEvent*  e);
    QWidget*  screen(QDesktopWidget* theWrappedObject, int  screen = -1);
    int  screenCount(QDesktopWidget* theWrappedObject) const;
    const QRect  screenGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const;
    const QRect  screenGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const;
    const QRect  screenGeometry(QDesktopWidget* theWrappedObject, int  screen = -1) const;
    int  screenNumber(QDesktopWidget* theWrappedObject, const QPoint&  arg__1) const;
    int  screenNumber(QDesktopWidget* theWrappedObject, const QWidget*  widget = 0) const;
};





class PythonQtShell_QDial : public QDial
{
public:
    PythonQtShell_QDial(QWidget*  parent = 0):QDial(parent),_wrapper(NULL) {};

   ~PythonQtShell_QDial();

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
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  me);
virtual void mousePressEvent(QMouseEvent*  me);
virtual void mouseReleaseEvent(QMouseEvent*  me);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  pe);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  re);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDial : public QDial
{ public:
inline bool  promoted_event(QEvent*  e) { return QDial::event(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  me) { QDial::mouseMoveEvent(me); }
inline void promoted_mousePressEvent(QMouseEvent*  me) { QDial::mousePressEvent(me); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  me) { QDial::mouseReleaseEvent(me); }
inline void promoted_paintEvent(QPaintEvent*  pe) { QDial::paintEvent(pe); }
inline void promoted_resizeEvent(QResizeEvent*  re) { QDial::resizeEvent(re); }
};

class PythonQtWrapper_QDial : public QObject
{ Q_OBJECT
public:
public slots:
QDial* new_QDial(QWidget*  parent = 0);
void delete_QDial(QDial* obj) { delete obj; } 
    bool  event(QDial* theWrappedObject, QEvent*  e);
    QSize  minimumSizeHint(QDial* theWrappedObject) const;
    void mouseMoveEvent(QDial* theWrappedObject, QMouseEvent*  me);
    void mousePressEvent(QDial* theWrappedObject, QMouseEvent*  me);
    void mouseReleaseEvent(QDial* theWrappedObject, QMouseEvent*  me);
    int  notchSize(QDial* theWrappedObject) const;
    qreal  notchTarget(QDial* theWrappedObject) const;
    bool  notchesVisible(QDial* theWrappedObject) const;
    void paintEvent(QDial* theWrappedObject, QPaintEvent*  pe);
    void resizeEvent(QDial* theWrappedObject, QResizeEvent*  re);
    void setNotchTarget(QDial* theWrappedObject, double  target);
    QSize  sizeHint(QDial* theWrappedObject) const;
    bool  wrapping(QDial* theWrappedObject) const;
};





class PythonQtShell_QDialog : public QDialog
{
public:
    PythonQtShell_QDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QDialog(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
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
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDialog : public QDialog
{ public:
inline void promoted_accept() { QDialog::accept(); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QDialog::closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QDialog::contextMenuEvent(arg__1); }
inline void promoted_done(int  arg__1) { QDialog::done(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QDialog::eventFilter(arg__1, arg__2); }
inline int  promoted_exec() { return QDialog::exec(); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QDialog::keyPressEvent(arg__1); }
inline void promoted_open() { QDialog::open(); }
inline void promoted_reject() { QDialog::reject(); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QDialog::resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QDialog::showEvent(arg__1); }
};

class PythonQtWrapper_QDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DialogCode )
enum DialogCode{
  Rejected = QDialog::Rejected,   Accepted = QDialog::Accepted};
public slots:
QDialog* new_QDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QDialog(QDialog* obj) { delete obj; } 
    void accept(QDialog* theWrappedObject);
    void closeEvent(QDialog* theWrappedObject, QCloseEvent*  arg__1);
    void contextMenuEvent(QDialog* theWrappedObject, QContextMenuEvent*  arg__1);
    void done(QDialog* theWrappedObject, int  arg__1);
    bool  eventFilter(QDialog* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
    int  exec(QDialog* theWrappedObject);
    bool  isSizeGripEnabled(QDialog* theWrappedObject) const;
    void keyPressEvent(QDialog* theWrappedObject, QKeyEvent*  arg__1);
    QSize  minimumSizeHint(QDialog* theWrappedObject) const;
    void open(QDialog* theWrappedObject);
    void reject(QDialog* theWrappedObject);
    void resizeEvent(QDialog* theWrappedObject, QResizeEvent*  arg__1);
    int  result(QDialog* theWrappedObject) const;
    void setModal(QDialog* theWrappedObject, bool  modal);
    void setResult(QDialog* theWrappedObject, int  r);
    void setSizeGripEnabled(QDialog* theWrappedObject, bool  arg__1);
    void setVisible(QDialog* theWrappedObject, bool  visible);
    void showEvent(QDialog* theWrappedObject, QShowEvent*  arg__1);
    QSize  sizeHint(QDialog* theWrappedObject) const;
};





class PythonQtShell_QDialogButtonBox : public QDialogButtonBox
{
public:
    PythonQtShell_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, Qt::Orientation  orientation = Qt::Horizontal, QWidget*  parent = 0):QDialogButtonBox(buttons, orientation, parent),_wrapper(NULL) {};
    PythonQtShell_QDialogButtonBox(QWidget*  parent = 0):QDialogButtonBox(parent),_wrapper(NULL) {};
    PythonQtShell_QDialogButtonBox(Qt::Orientation  orientation, QWidget*  parent = 0):QDialogButtonBox(orientation, parent),_wrapper(NULL) {};

   ~PythonQtShell_QDialogButtonBox();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
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

class PythonQtPublicPromoter_QDialogButtonBox : public QDialogButtonBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { QDialogButtonBox::changeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QDialogButtonBox::event(event); }
};

class PythonQtWrapper_QDialogButtonBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StandardButton ButtonRole ButtonLayout )
Q_FLAGS(StandardButtons )
enum StandardButton{
  NoButton = QDialogButtonBox::NoButton,   Ok = QDialogButtonBox::Ok,   Save = QDialogButtonBox::Save,   SaveAll = QDialogButtonBox::SaveAll,   Open = QDialogButtonBox::Open,   Yes = QDialogButtonBox::Yes,   YesToAll = QDialogButtonBox::YesToAll,   No = QDialogButtonBox::No,   NoToAll = QDialogButtonBox::NoToAll,   Abort = QDialogButtonBox::Abort,   Retry = QDialogButtonBox::Retry,   Ignore = QDialogButtonBox::Ignore,   Close = QDialogButtonBox::Close,   Cancel = QDialogButtonBox::Cancel,   Discard = QDialogButtonBox::Discard,   Help = QDialogButtonBox::Help,   Apply = QDialogButtonBox::Apply,   Reset = QDialogButtonBox::Reset,   RestoreDefaults = QDialogButtonBox::RestoreDefaults,   FirstButton = QDialogButtonBox::FirstButton,   LastButton = QDialogButtonBox::LastButton};
enum ButtonRole{
  InvalidRole = QDialogButtonBox::InvalidRole,   AcceptRole = QDialogButtonBox::AcceptRole,   RejectRole = QDialogButtonBox::RejectRole,   DestructiveRole = QDialogButtonBox::DestructiveRole,   ActionRole = QDialogButtonBox::ActionRole,   HelpRole = QDialogButtonBox::HelpRole,   YesRole = QDialogButtonBox::YesRole,   NoRole = QDialogButtonBox::NoRole,   ResetRole = QDialogButtonBox::ResetRole,   ApplyRole = QDialogButtonBox::ApplyRole,   NRoles = QDialogButtonBox::NRoles};
enum ButtonLayout{
  WinLayout = QDialogButtonBox::WinLayout,   MacLayout = QDialogButtonBox::MacLayout,   KdeLayout = QDialogButtonBox::KdeLayout,   GnomeLayout = QDialogButtonBox::GnomeLayout};
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public slots:
QDialogButtonBox* new_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, Qt::Orientation  orientation = Qt::Horizontal, QWidget*  parent = 0);
QDialogButtonBox* new_QDialogButtonBox(QWidget*  parent = 0);
QDialogButtonBox* new_QDialogButtonBox(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QDialogButtonBox(QDialogButtonBox* obj) { delete obj; } 
    void addButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button, QDialogButtonBox::ButtonRole  role);
    QPushButton*  addButton(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  button);
    QPushButton*  addButton(QDialogButtonBox* theWrappedObject, const QString&  text, QDialogButtonBox::ButtonRole  role);
    QPushButton*  button(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  which) const;
    QDialogButtonBox::ButtonRole  buttonRole(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const;
    QList<QAbstractButton* >  buttons(QDialogButtonBox* theWrappedObject) const;
    bool  centerButtons(QDialogButtonBox* theWrappedObject) const;
    void changeEvent(QDialogButtonBox* theWrappedObject, QEvent*  event);
    void clear(QDialogButtonBox* theWrappedObject);
    bool  event(QDialogButtonBox* theWrappedObject, QEvent*  event);
    Qt::Orientation  orientation(QDialogButtonBox* theWrappedObject) const;
    void removeButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button);
    void setCenterButtons(QDialogButtonBox* theWrappedObject, bool  center);
    void setOrientation(QDialogButtonBox* theWrappedObject, Qt::Orientation  orientation);
    void setStandardButtons(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButtons  buttons);
    QDialogButtonBox::StandardButton  standardButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const;
    QDialogButtonBox::StandardButtons  standardButtons(QDialogButtonBox* theWrappedObject) const;
};





class PythonQtShell_QDockWidget : public QDockWidget
{
public:
    PythonQtShell_QDockWidget(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QDockWidget(parent, flags),_wrapper(NULL) {};
    PythonQtShell_QDockWidget(const QString&  title, QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QDockWidget(title, parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QDockWidget();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
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
virtual void paintEvent(QPaintEvent*  event);
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

class PythonQtPublicPromoter_QDockWidget : public QDockWidget
{ public:
inline void promoted_changeEvent(QEvent*  event) { QDockWidget::changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QDockWidget::closeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QDockWidget::event(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QDockWidget::paintEvent(event); }
};

class PythonQtWrapper_QDockWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DockWidgetFeature )
Q_FLAGS(DockWidgetFeatures )
enum DockWidgetFeature{
  DockWidgetClosable = QDockWidget::DockWidgetClosable,   DockWidgetMovable = QDockWidget::DockWidgetMovable,   DockWidgetFloatable = QDockWidget::DockWidgetFloatable,   DockWidgetVerticalTitleBar = QDockWidget::DockWidgetVerticalTitleBar,   DockWidgetFeatureMask = QDockWidget::DockWidgetFeatureMask,   AllDockWidgetFeatures = QDockWidget::AllDockWidgetFeatures,   NoDockWidgetFeatures = QDockWidget::NoDockWidgetFeatures,   Reserved = QDockWidget::Reserved};
Q_DECLARE_FLAGS(DockWidgetFeatures, DockWidgetFeature)
public slots:
QDockWidget* new_QDockWidget(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QDockWidget* new_QDockWidget(const QString&  title, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QDockWidget(QDockWidget* obj) { delete obj; } 
    Qt::DockWidgetAreas  allowedAreas(QDockWidget* theWrappedObject) const;
    void changeEvent(QDockWidget* theWrappedObject, QEvent*  event);
    void closeEvent(QDockWidget* theWrappedObject, QCloseEvent*  event);
    bool  event(QDockWidget* theWrappedObject, QEvent*  event);
    QDockWidget::DockWidgetFeatures  features(QDockWidget* theWrappedObject) const;
    bool  isAreaAllowed(QDockWidget* theWrappedObject, Qt::DockWidgetArea  area) const;
    bool  isFloating(QDockWidget* theWrappedObject) const;
    void paintEvent(QDockWidget* theWrappedObject, QPaintEvent*  event);
    void setAllowedAreas(QDockWidget* theWrappedObject, Qt::DockWidgetAreas  areas);
    void setFeatures(QDockWidget* theWrappedObject, QDockWidget::DockWidgetFeatures  features);
    void setFloating(QDockWidget* theWrappedObject, bool  floating);
    void setTitleBarWidget(QDockWidget* theWrappedObject, QWidget*  widget);
    void setWidget(QDockWidget* theWrappedObject, QWidget*  widget);
    QWidget*  titleBarWidget(QDockWidget* theWrappedObject) const;
    QAction*  toggleViewAction(QDockWidget* theWrappedObject) const;
    QWidget*  widget(QDockWidget* theWrappedObject) const;
};





class PythonQtShell_QDoubleSpinBox : public QDoubleSpinBox
{
public:
    PythonQtShell_QDoubleSpinBox(QWidget*  parent = 0):QDoubleSpinBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QDoubleSpinBox();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  str) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
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
virtual void showEvent(QShowEvent*  event);
virtual void stepBy(int  steps);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual QString  textFromValue(double  val) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual double  valueFromText(const QString&  text) const;
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDoubleSpinBox : public QDoubleSpinBox
{ public:
inline void promoted_fixup(QString&  str) const { QDoubleSpinBox::fixup(str); }
inline QString  promoted_textFromValue(double  val) const { return QDoubleSpinBox::textFromValue(val); }
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QDoubleSpinBox::validate(input, pos); }
inline double  promoted_valueFromText(const QString&  text) const { return QDoubleSpinBox::valueFromText(text); }
};

class PythonQtWrapper_QDoubleSpinBox : public QObject
{ Q_OBJECT
public:
public slots:
QDoubleSpinBox* new_QDoubleSpinBox(QWidget*  parent = 0);
void delete_QDoubleSpinBox(QDoubleSpinBox* obj) { delete obj; } 
    QString  cleanText(QDoubleSpinBox* theWrappedObject) const;
    int  decimals(QDoubleSpinBox* theWrappedObject) const;
    void fixup(QDoubleSpinBox* theWrappedObject, QString&  str) const;
    double  maximum(QDoubleSpinBox* theWrappedObject) const;
    double  minimum(QDoubleSpinBox* theWrappedObject) const;
    QString  prefix(QDoubleSpinBox* theWrappedObject) const;
    void setDecimals(QDoubleSpinBox* theWrappedObject, int  prec);
    void setMaximum(QDoubleSpinBox* theWrappedObject, double  max);
    void setMinimum(QDoubleSpinBox* theWrappedObject, double  min);
    void setPrefix(QDoubleSpinBox* theWrappedObject, const QString&  prefix);
    void setRange(QDoubleSpinBox* theWrappedObject, double  min, double  max);
    void setSingleStep(QDoubleSpinBox* theWrappedObject, double  val);
    void setSuffix(QDoubleSpinBox* theWrappedObject, const QString&  suffix);
    double  singleStep(QDoubleSpinBox* theWrappedObject) const;
    QString  suffix(QDoubleSpinBox* theWrappedObject) const;
    QString  textFromValue(QDoubleSpinBox* theWrappedObject, double  val) const;
    QValidator::State  validate(QDoubleSpinBox* theWrappedObject, QString&  input, int&  pos) const;
    double  value(QDoubleSpinBox* theWrappedObject) const;
    double  valueFromText(QDoubleSpinBox* theWrappedObject, const QString&  text) const;
};





class PythonQtShell_QDoubleValidator : public QDoubleValidator
{
public:
    PythonQtShell_QDoubleValidator(QObject*  parent = 0):QDoubleValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent = 0):QDoubleValidator(bottom, top, decimals, parent),_wrapper(NULL) {};

   ~PythonQtShell_QDoubleValidator();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  arg__1) const;
virtual void setRange(double  bottom, double  top, int  decimals = 0);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDoubleValidator : public QDoubleValidator
{ public:
inline void promoted_setRange(double  bottom, double  top, int  decimals = 0) { QDoubleValidator::setRange(bottom, top, decimals); }
inline QValidator::State  promoted_validate(QString&  arg__1, int&  arg__2) const { return QDoubleValidator::validate(arg__1, arg__2); }
};

class PythonQtWrapper_QDoubleValidator : public QObject
{ Q_OBJECT
public:
public slots:
QDoubleValidator* new_QDoubleValidator(QObject*  parent = 0);
QDoubleValidator* new_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent = 0);
void delete_QDoubleValidator(QDoubleValidator* obj) { delete obj; } 
    double  bottom(QDoubleValidator* theWrappedObject) const;
    int  decimals(QDoubleValidator* theWrappedObject) const;
    QDoubleValidator::Notation  notation(QDoubleValidator* theWrappedObject) const;
    void setBottom(QDoubleValidator* theWrappedObject, double  arg__1);
    void setDecimals(QDoubleValidator* theWrappedObject, int  arg__1);
    void setNotation(QDoubleValidator* theWrappedObject, QDoubleValidator::Notation  arg__1);
    void setRange(QDoubleValidator* theWrappedObject, double  bottom, double  top, int  decimals = 0);
    void setTop(QDoubleValidator* theWrappedObject, double  arg__1);
    double  top(QDoubleValidator* theWrappedObject) const;
    QValidator::State  validate(QDoubleValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
};





class PythonQtShell_QDrag : public QDrag
{
public:
    PythonQtShell_QDrag(QObject*  dragSource):QDrag(dragSource),_wrapper(NULL) {};

   ~PythonQtShell_QDrag();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDrag : public QObject
{ Q_OBJECT
public:
public slots:
QDrag* new_QDrag(QObject*  dragSource);
void delete_QDrag(QDrag* obj) { delete obj; } 
    Qt::DropAction  defaultAction(QDrag* theWrappedObject) const;
    QPixmap  dragCursor(QDrag* theWrappedObject, Qt::DropAction  action) const;
    Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions = Qt::MoveAction);
    Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions, Qt::DropAction  defaultAction);
    QPoint  hotSpot(QDrag* theWrappedObject) const;
    QMimeData*  mimeData(QDrag* theWrappedObject) const;
    QPixmap  pixmap(QDrag* theWrappedObject) const;
    void setDragCursor(QDrag* theWrappedObject, const QPixmap&  cursor, Qt::DropAction  action);
    void setHotSpot(QDrag* theWrappedObject, const QPoint&  hotspot);
    void setMimeData(QDrag* theWrappedObject, QMimeData*  data);
    void setPixmap(QDrag* theWrappedObject, const QPixmap&  arg__1);
    QObject*  source(QDrag* theWrappedObject) const;
    Qt::DropActions  supportedActions(QDrag* theWrappedObject) const;
    QObject*  target(QDrag* theWrappedObject) const;
};





class PythonQtWrapper_QDragEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragEnterEvent* new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QDragEnterEvent(QDragEnterEvent* obj) { delete obj; } 
};





class PythonQtWrapper_QDragLeaveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragLeaveEvent* new_QDragLeaveEvent();
void delete_QDragLeaveEvent(QDragLeaveEvent* obj) { delete obj; } 
};





class PythonQtShell_QDragMoveEvent : public QDragMoveEvent
{
public:
    PythonQtShell_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove):QDragMoveEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDragMoveEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDragMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragMoveEvent* new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove);
void delete_QDragMoveEvent(QDragMoveEvent* obj) { delete obj; } 
    void accept(QDragMoveEvent* theWrappedObject, const QRect&  r);
    QRect  answerRect(QDragMoveEvent* theWrappedObject) const;
    void ignore(QDragMoveEvent* theWrappedObject, const QRect&  r);
};





class PythonQtShell_QDropEvent : public QDropEvent
{
public:
    PythonQtShell_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop):QDropEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDropEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDropEvent* new_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop);
void delete_QDropEvent(QDropEvent* obj) { delete obj; } 
    void acceptProposedAction(QDropEvent* theWrappedObject);
    Qt::DropAction  dropAction(QDropEvent* theWrappedObject) const;
    Qt::KeyboardModifiers  keyboardModifiers(QDropEvent* theWrappedObject) const;
    const QMimeData*  mimeData(QDropEvent* theWrappedObject) const;
    Qt::MouseButtons  mouseButtons(QDropEvent* theWrappedObject) const;
    QPoint  pos(QDropEvent* theWrappedObject) const;
    const QPointF*  posF(QDropEvent* theWrappedObject) const;
    Qt::DropActions  possibleActions(QDropEvent* theWrappedObject) const;
    Qt::DropAction  proposedAction(QDropEvent* theWrappedObject) const;
    void setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action);
    QObject*  source(QDropEvent* theWrappedObject) const;
};





class PythonQtShell_QErrorMessage : public QErrorMessage
{
public:
    PythonQtShell_QErrorMessage(QWidget*  parent = 0):QErrorMessage(parent),_wrapper(NULL) {};

   ~PythonQtShell_QErrorMessage();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
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
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QErrorMessage : public QErrorMessage
{ public:
inline void promoted_changeEvent(QEvent*  e) { QErrorMessage::changeEvent(e); }
inline void promoted_done(int  arg__1) { QErrorMessage::done(arg__1); }
};

class PythonQtWrapper_QErrorMessage : public QObject
{ Q_OBJECT
public:
public slots:
QErrorMessage* new_QErrorMessage(QWidget*  parent = 0);
void delete_QErrorMessage(QErrorMessage* obj) { delete obj; } 
    void changeEvent(QErrorMessage* theWrappedObject, QEvent*  e);
    void done(QErrorMessage* theWrappedObject, int  arg__1);
    QErrorMessage*  static_QErrorMessage_qtHandler();
};





class PythonQtShell_QFileDialog : public QFileDialog
{
public:
    PythonQtShell_QFileDialog(QWidget*  parent, Qt::WindowFlags  f):QFileDialog(parent, f),_wrapper(NULL) {};
    PythonQtShell_QFileDialog(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString()):QFileDialog(parent, caption, directory, filter),_wrapper(NULL) {};

   ~PythonQtShell_QFileDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
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

class PythonQtPublicPromoter_QFileDialog : public QFileDialog
{ public:
inline void promoted_accept() { QFileDialog::accept(); }
inline void promoted_changeEvent(QEvent*  e) { QFileDialog::changeEvent(e); }
inline void promoted_done(int  result) { QFileDialog::done(result); }
inline void promoted_open() { QFileDialog::open(); }
};

class PythonQtWrapper_QFileDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DialogLabel )
enum DialogLabel{
  LookIn = QFileDialog::LookIn,   FileName = QFileDialog::FileName,   FileType = QFileDialog::FileType,   Accept = QFileDialog::Accept,   Reject = QFileDialog::Reject};
public slots:
QFileDialog* new_QFileDialog(QWidget*  parent, Qt::WindowFlags  f);
QFileDialog* new_QFileDialog(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString());
void delete_QFileDialog(QFileDialog* obj) { delete obj; } 
    void accept(QFileDialog* theWrappedObject);
    QFileDialog::AcceptMode  acceptMode(QFileDialog* theWrappedObject) const;
    void changeEvent(QFileDialog* theWrappedObject, QEvent*  e);
    bool  confirmOverwrite(QFileDialog* theWrappedObject) const;
    QString  defaultSuffix(QFileDialog* theWrappedObject) const;
    QDir  directory(QFileDialog* theWrappedObject) const;
    void done(QFileDialog* theWrappedObject, int  result);
    QFileDialog::FileMode  fileMode(QFileDialog* theWrappedObject) const;
    QDir::Filters  filter(QFileDialog* theWrappedObject) const;
    QString  static_QFileDialog_getExistingDirectory(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), QFileDialog::Options  options = QFileDialog::ShowDirsOnly);
    QString  static_QFileDialog_getOpenFileName(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
    QStringList  static_QFileDialog_getOpenFileNames(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
    QString  static_QFileDialog_getSaveFileName(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
    QStringList  history(QFileDialog* theWrappedObject) const;
    QFileIconProvider*  iconProvider(QFileDialog* theWrappedObject) const;
    bool  isNameFilterDetailsVisible(QFileDialog* theWrappedObject) const;
    bool  isReadOnly(QFileDialog* theWrappedObject) const;
    QAbstractItemDelegate*  itemDelegate(QFileDialog* theWrappedObject) const;
    QString  labelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label) const;
    QStringList  nameFilters(QFileDialog* theWrappedObject) const;
    void open(QFileDialog* theWrappedObject);
    void open(QFileDialog* theWrappedObject, QObject*  receiver, const char*  member);
    QFileDialog::Options  options(QFileDialog* theWrappedObject) const;
    QAbstractProxyModel*  proxyModel(QFileDialog* theWrappedObject) const;
    bool  resolveSymlinks(QFileDialog* theWrappedObject) const;
    bool  restoreState(QFileDialog* theWrappedObject, const QByteArray&  state);
    QByteArray  saveState(QFileDialog* theWrappedObject) const;
    void selectFile(QFileDialog* theWrappedObject, const QString&  filename);
    void selectNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
    QStringList  selectedFiles(QFileDialog* theWrappedObject) const;
    QString  selectedNameFilter(QFileDialog* theWrappedObject) const;
    void setAcceptMode(QFileDialog* theWrappedObject, QFileDialog::AcceptMode  mode);
    void setConfirmOverwrite(QFileDialog* theWrappedObject, bool  enabled);
    void setDefaultSuffix(QFileDialog* theWrappedObject, const QString&  suffix);
    void setDirectory(QFileDialog* theWrappedObject, const QDir&  directory);
    void setDirectory(QFileDialog* theWrappedObject, const QString&  directory);
    void setFileMode(QFileDialog* theWrappedObject, QFileDialog::FileMode  mode);
    void setFilter(QFileDialog* theWrappedObject, QDir::Filters  filters);
    void setHistory(QFileDialog* theWrappedObject, const QStringList&  paths);
    void setIconProvider(QFileDialog* theWrappedObject, QFileIconProvider*  provider);
    void setItemDelegate(QFileDialog* theWrappedObject, QAbstractItemDelegate*  delegate);
    void setLabelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label, const QString&  text);
    void setNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
    void setNameFilterDetailsVisible(QFileDialog* theWrappedObject, bool  enabled);
    void setNameFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
    void setOption(QFileDialog* theWrappedObject, QFileDialog::Option  option, bool  on = true);
    void setOptions(QFileDialog* theWrappedObject, QFileDialog::Options  options);
    void setProxyModel(QFileDialog* theWrappedObject, QAbstractProxyModel*  model);
    void setReadOnly(QFileDialog* theWrappedObject, bool  enabled);
    void setResolveSymlinks(QFileDialog* theWrappedObject, bool  enabled);
    void setSidebarUrls(QFileDialog* theWrappedObject, const QList<QUrl >&  urls);
    void setViewMode(QFileDialog* theWrappedObject, QFileDialog::ViewMode  mode);
    void setVisible(QFileDialog* theWrappedObject, bool  visible);
    QList<QUrl >  sidebarUrls(QFileDialog* theWrappedObject) const;
    bool  testOption(QFileDialog* theWrappedObject, QFileDialog::Option  option) const;
    QFileDialog::ViewMode  viewMode(QFileDialog* theWrappedObject) const;
};





class PythonQtShell_QFileIconProvider : public QFileIconProvider
{
public:
    PythonQtShell_QFileIconProvider():QFileIconProvider(),_wrapper(NULL) {};

   ~PythonQtShell_QFileIconProvider();

virtual QIcon  icon(QFileIconProvider::IconType  type) const;
virtual QIcon  icon(const QFileInfo&  info) const;
virtual QString  type(const QFileInfo&  info) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFileIconProvider : public QFileIconProvider
{ public:
inline QIcon  promoted_icon(QFileIconProvider::IconType  type) const { return QFileIconProvider::icon(type); }
inline QIcon  promoted_icon(const QFileInfo&  info) const { return QFileIconProvider::icon(info); }
inline QString  promoted_type(const QFileInfo&  info) const { return QFileIconProvider::type(info); }
};

class PythonQtWrapper_QFileIconProvider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IconType )
enum IconType{
  Computer = QFileIconProvider::Computer,   Desktop = QFileIconProvider::Desktop,   Trashcan = QFileIconProvider::Trashcan,   Network = QFileIconProvider::Network,   Drive = QFileIconProvider::Drive,   Folder = QFileIconProvider::Folder,   File = QFileIconProvider::File};
public slots:
QFileIconProvider* new_QFileIconProvider();
void delete_QFileIconProvider(QFileIconProvider* obj) { delete obj; } 
    QIcon  icon(QFileIconProvider* theWrappedObject, QFileIconProvider::IconType  type) const;
    QIcon  icon(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
    QString  type(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
};





class PythonQtWrapper_QFileOpenEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFileOpenEvent* new_QFileOpenEvent(const QString&  file);
QFileOpenEvent* new_QFileOpenEvent(const QUrl&  url);
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; } 
    QString  file(QFileOpenEvent* theWrappedObject) const;
    QUrl  url(QFileOpenEvent* theWrappedObject) const;
};





class PythonQtWrapper_QFocusEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFocusEvent* new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason);
void delete_QFocusEvent(QFocusEvent* obj) { delete obj; } 
    bool  gotFocus(QFocusEvent* theWrappedObject) const;
    bool  lostFocus(QFocusEvent* theWrappedObject) const;
};





class PythonQtShell_QFocusFrame : public QFocusFrame
{
public:
    PythonQtShell_QFocusFrame(QWidget*  parent = 0):QFocusFrame(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFocusFrame();

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

class PythonQtPublicPromoter_QFocusFrame : public QFocusFrame
{ public:
inline bool  promoted_event(QEvent*  e) { return QFocusFrame::event(e); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QFocusFrame::eventFilter(arg__1, arg__2); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QFocusFrame::paintEvent(arg__1); }
};

class PythonQtWrapper_QFocusFrame : public QObject
{ Q_OBJECT
public:
public slots:
QFocusFrame* new_QFocusFrame(QWidget*  parent = 0);
void delete_QFocusFrame(QFocusFrame* obj) { delete obj; } 
    bool  event(QFocusFrame* theWrappedObject, QEvent*  e);
    bool  eventFilter(QFocusFrame* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
    void paintEvent(QFocusFrame* theWrappedObject, QPaintEvent*  arg__1);
    void setWidget(QFocusFrame* theWrappedObject, QWidget*  widget);
    QWidget*  widget(QFocusFrame* theWrappedObject) const;
};





class PythonQtShell_QFontComboBox : public QFontComboBox
{
public:
    PythonQtShell_QFontComboBox(QWidget*  parent = 0):QFontComboBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFontComboBox();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
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
virtual void hideEvent(QHideEvent*  e);
virtual void hidePopup();
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
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  e);
virtual void showPopup();
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFontComboBox : public QFontComboBox
{ public:
inline bool  promoted_event(QEvent*  e) { return QFontComboBox::event(e); }
};

class PythonQtWrapper_QFontComboBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontFilter )
Q_FLAGS(FontFilters )
enum FontFilter{
  AllFonts = QFontComboBox::AllFonts,   ScalableFonts = QFontComboBox::ScalableFonts,   NonScalableFonts = QFontComboBox::NonScalableFonts,   MonospacedFonts = QFontComboBox::MonospacedFonts,   ProportionalFonts = QFontComboBox::ProportionalFonts};
Q_DECLARE_FLAGS(FontFilters, FontFilter)
public slots:
QFontComboBox* new_QFontComboBox(QWidget*  parent = 0);
void delete_QFontComboBox(QFontComboBox* obj) { delete obj; } 
    QFont  currentFont(QFontComboBox* theWrappedObject) const;
    bool  event(QFontComboBox* theWrappedObject, QEvent*  e);
    QFontComboBox::FontFilters  fontFilters(QFontComboBox* theWrappedObject) const;
    void setFontFilters(QFontComboBox* theWrappedObject, QFontComboBox::FontFilters  filters);
    void setWritingSystem(QFontComboBox* theWrappedObject, QFontDatabase::WritingSystem  arg__1);
    QSize  sizeHint(QFontComboBox* theWrappedObject) const;
    QFontDatabase::WritingSystem  writingSystem(QFontComboBox* theWrappedObject) const;
};





class PythonQtShell_QFontDialog : public QFontDialog
{
public:
    PythonQtShell_QFontDialog(QWidget*  parent = 0):QFontDialog(parent),_wrapper(NULL) {};
    PythonQtShell_QFontDialog(const QFont&  initial, QWidget*  parent = 0):QFontDialog(initial, parent),_wrapper(NULL) {};

   ~PythonQtShell_QFontDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
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
virtual bool  eventFilter(QObject*  object, QEvent*  event);
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

class PythonQtPublicPromoter_QFontDialog : public QFontDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { QFontDialog::changeEvent(event); }
inline void promoted_done(int  result) { QFontDialog::done(result); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QFontDialog::eventFilter(object, event); }
inline void promoted_open() { QFontDialog::open(); }
};

class PythonQtWrapper_QFontDialog : public QObject
{ Q_OBJECT
public:
public slots:
QFontDialog* new_QFontDialog(QWidget*  parent = 0);
QFontDialog* new_QFontDialog(const QFont&  initial, QWidget*  parent = 0);
void delete_QFontDialog(QFontDialog* obj) { delete obj; } 
    void changeEvent(QFontDialog* theWrappedObject, QEvent*  event);
    QFont  currentFont(QFontDialog* theWrappedObject) const;
    void done(QFontDialog* theWrappedObject, int  result);
    bool  eventFilter(QFontDialog* theWrappedObject, QObject*  object, QEvent*  event);
    QFont  static_QFontDialog_getFont(bool*  ok, QWidget*  parent = 0);
    QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  initial, QWidget*  parent = 0, const QString&  title = QString(), QFontDialog::FontDialogOptions  options = 0);
    void open(QFontDialog* theWrappedObject);
    void open(QFontDialog* theWrappedObject, QObject*  receiver, const char*  member);
    QFontDialog::FontDialogOptions  options(QFontDialog* theWrappedObject) const;
    QFont  selectedFont(QFontDialog* theWrappedObject) const;
    void setCurrentFont(QFontDialog* theWrappedObject, const QFont&  font);
    void setOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option, bool  on = true);
    void setOptions(QFontDialog* theWrappedObject, QFontDialog::FontDialogOptions  options);
    void setVisible(QFontDialog* theWrappedObject, bool  visible);
    bool  testOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option) const;
};





class PythonQtWrapper_QFontInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFontInfo* new_QFontInfo(const QFont&  arg__1);
QFontInfo* new_QFontInfo(const QFontInfo&  arg__1);
void delete_QFontInfo(QFontInfo* obj) { delete obj; } 
    bool  bold(QFontInfo* theWrappedObject) const;
    bool  exactMatch(QFontInfo* theWrappedObject) const;
    QString  family(QFontInfo* theWrappedObject) const;
    bool  fixedPitch(QFontInfo* theWrappedObject) const;
    bool  italic(QFontInfo* theWrappedObject) const;
    bool  overline(QFontInfo* theWrappedObject) const;
    int  pixelSize(QFontInfo* theWrappedObject) const;
    int  pointSize(QFontInfo* theWrappedObject) const;
    qreal  pointSizeF(QFontInfo* theWrappedObject) const;
    bool  rawMode(QFontInfo* theWrappedObject) const;
    bool  strikeOut(QFontInfo* theWrappedObject) const;
    QFont::Style  style(QFontInfo* theWrappedObject) const;
    QFont::StyleHint  styleHint(QFontInfo* theWrappedObject) const;
    QString  styleName(QFontInfo* theWrappedObject) const;
    void swap(QFontInfo* theWrappedObject, QFontInfo&  other);
    bool  underline(QFontInfo* theWrappedObject) const;
    int  weight(QFontInfo* theWrappedObject) const;
};





class PythonQtWrapper_QFontMetrics : public QObject
{ Q_OBJECT
public:
public slots:
QFontMetrics* new_QFontMetrics(const QFont&  arg__1);
QFontMetrics* new_QFontMetrics(const QFont&  arg__1, QPaintDevice*  pd);
void delete_QFontMetrics(QFontMetrics* obj) { delete obj; } 
    int  ascent(QFontMetrics* theWrappedObject) const;
    int  averageCharWidth(QFontMetrics* theWrappedObject) const;
    QRect  boundingRect(QFontMetrics* theWrappedObject, QChar  arg__1) const;
    QRect  boundingRect(QFontMetrics* theWrappedObject, const QRect&  r, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = 0) const;
    QRect  boundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
    QRect  boundingRect(QFontMetrics* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = 0) const;
    int  charWidth(QFontMetrics* theWrappedObject, const QString&  str, int  pos) const;
    int  descent(QFontMetrics* theWrappedObject) const;
    QString  elidedText(QFontMetrics* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, int  width, int  flags = 0) const;
    int  height(QFontMetrics* theWrappedObject) const;
    bool  inFont(QFontMetrics* theWrappedObject, QChar  arg__1) const;
    bool  inFontUcs4(QFontMetrics* theWrappedObject, uint  ucs4) const;
    int  leading(QFontMetrics* theWrappedObject) const;
    int  leftBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const;
    int  lineSpacing(QFontMetrics* theWrappedObject) const;
    int  lineWidth(QFontMetrics* theWrappedObject) const;
    int  maxWidth(QFontMetrics* theWrappedObject) const;
    int  minLeftBearing(QFontMetrics* theWrappedObject) const;
    int  minRightBearing(QFontMetrics* theWrappedObject) const;
    int  overlinePos(QFontMetrics* theWrappedObject) const;
    int  rightBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const;
    QSize  size(QFontMetrics* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = 0) const;
    int  strikeOutPos(QFontMetrics* theWrappedObject) const;
    void swap(QFontMetrics* theWrappedObject, QFontMetrics&  other);
    QRect  tightBoundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
    int  underlinePos(QFontMetrics* theWrappedObject) const;
    int  width(QFontMetrics* theWrappedObject, QChar  arg__1) const;
    int  width(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len = -1) const;
    int  width(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len, int  flags) const;
    int  xHeight(QFontMetrics* theWrappedObject) const;
};





class PythonQtWrapper_QFontMetricsF : public QObject
{ Q_OBJECT
public:
public slots:
QFontMetricsF* new_QFontMetricsF(const QFont&  arg__1);
QFontMetricsF* new_QFontMetricsF(const QFont&  arg__1, QPaintDevice*  pd);
void delete_QFontMetricsF(QFontMetricsF* obj) { delete obj; } 
    qreal  ascent(QFontMetricsF* theWrappedObject) const;
    qreal  averageCharWidth(QFontMetricsF* theWrappedObject) const;
    QRectF  boundingRect(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
    QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QRectF&  r, int  flags, const QString&  string, int  tabstops = 0, int*  tabarray = 0) const;
    QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QString&  string) const;
    qreal  descent(QFontMetricsF* theWrappedObject) const;
    QString  elidedText(QFontMetricsF* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, qreal  width, int  flags = 0) const;
    qreal  height(QFontMetricsF* theWrappedObject) const;
    bool  inFont(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
    bool  inFontUcs4(QFontMetricsF* theWrappedObject, uint  ucs4) const;
    qreal  leading(QFontMetricsF* theWrappedObject) const;
    qreal  leftBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
    qreal  lineSpacing(QFontMetricsF* theWrappedObject) const;
    qreal  lineWidth(QFontMetricsF* theWrappedObject) const;
    qreal  maxWidth(QFontMetricsF* theWrappedObject) const;
    qreal  minLeftBearing(QFontMetricsF* theWrappedObject) const;
    qreal  minRightBearing(QFontMetricsF* theWrappedObject) const;
    qreal  overlinePos(QFontMetricsF* theWrappedObject) const;
    qreal  rightBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
    QSizeF  size(QFontMetricsF* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = 0) const;
    qreal  strikeOutPos(QFontMetricsF* theWrappedObject) const;
    void swap(QFontMetricsF* theWrappedObject, QFontMetricsF&  other);
    QRectF  tightBoundingRect(QFontMetricsF* theWrappedObject, const QString&  text) const;
    qreal  underlinePos(QFontMetricsF* theWrappedObject) const;
    qreal  width(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
    qreal  width(QFontMetricsF* theWrappedObject, const QString&  string) const;
    qreal  xHeight(QFontMetricsF* theWrappedObject) const;
};





class PythonQtShell_QFormLayout : public QFormLayout
{
public:
    PythonQtShell_QFormLayout(QWidget*  parent = 0):QFormLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFormLayout();

virtual void addItem(QLayoutItem*  item);
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
virtual void setGeometry(const QRect&  rect);
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFormLayout : public QFormLayout
{ public:
inline void promoted_addItem(QLayoutItem*  item) { QFormLayout::addItem(item); }
inline int  promoted_count() const { return QFormLayout::count(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QFormLayout::expandingDirections(); }
inline void promoted_invalidate() { QFormLayout::invalidate(); }
inline QLayoutItem*  promoted_itemAt(int  index) const { return QFormLayout::itemAt(index); }
inline QSize  promoted_minimumSize() const { return QFormLayout::minimumSize(); }
inline void promoted_setGeometry(const QRect&  rect) { QFormLayout::setGeometry(rect); }
inline QLayoutItem*  promoted_takeAt(int  index) { return QFormLayout::takeAt(index); }
};

class PythonQtWrapper_QFormLayout : public QObject
{ Q_OBJECT
public:
public slots:
QFormLayout* new_QFormLayout(QWidget*  parent = 0);
void delete_QFormLayout(QFormLayout* obj) { delete obj; } 
    void addItem(QFormLayout* theWrappedObject, QLayoutItem*  item);
    void addRow(QFormLayout* theWrappedObject, QLayout*  layout);
    void addRow(QFormLayout* theWrappedObject, QWidget*  label, QLayout*  field);
    void addRow(QFormLayout* theWrappedObject, QWidget*  label, QWidget*  field);
    void addRow(QFormLayout* theWrappedObject, QWidget*  widget);
    void addRow(QFormLayout* theWrappedObject, const QString&  labelText, QLayout*  field);
    void addRow(QFormLayout* theWrappedObject, const QString&  labelText, QWidget*  field);
    int  count(QFormLayout* theWrappedObject) const;
    Qt::Orientations  expandingDirections(QFormLayout* theWrappedObject) const;
    QFormLayout::FieldGrowthPolicy  fieldGrowthPolicy(QFormLayout* theWrappedObject) const;
    Qt::Alignment  formAlignment(QFormLayout* theWrappedObject) const;
    void getItemPosition(QFormLayout* theWrappedObject, int  index, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
    void getLayoutPosition(QFormLayout* theWrappedObject, QLayout*  layout, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
    void getWidgetPosition(QFormLayout* theWrappedObject, QWidget*  widget, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
    bool  hasHeightForWidth(QFormLayout* theWrappedObject) const;
    int  heightForWidth(QFormLayout* theWrappedObject, int  width) const;
    int  horizontalSpacing(QFormLayout* theWrappedObject) const;
    void insertRow(QFormLayout* theWrappedObject, int  row, QLayout*  layout);
    void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QLayout*  field);
    void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QWidget*  field);
    void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  widget);
    void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QLayout*  field);
    void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QWidget*  field);
    void invalidate(QFormLayout* theWrappedObject);
    QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  index) const;
    QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role) const;
    Qt::Alignment  labelAlignment(QFormLayout* theWrappedObject) const;
    QWidget*  labelForField(QFormLayout* theWrappedObject, QLayout*  field) const;
    QWidget*  labelForField(QFormLayout* theWrappedObject, QWidget*  field) const;
    QSize  minimumSize(QFormLayout* theWrappedObject) const;
    int  rowCount(QFormLayout* theWrappedObject) const;
    QFormLayout::RowWrapPolicy  rowWrapPolicy(QFormLayout* theWrappedObject) const;
    void setFieldGrowthPolicy(QFormLayout* theWrappedObject, QFormLayout::FieldGrowthPolicy  policy);
    void setFormAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
    void setGeometry(QFormLayout* theWrappedObject, const QRect&  rect);
    void setHorizontalSpacing(QFormLayout* theWrappedObject, int  spacing);
    void setItem(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayoutItem*  item);
    void setLabelAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
    void setLayout(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayout*  layout);
    void setRowWrapPolicy(QFormLayout* theWrappedObject, QFormLayout::RowWrapPolicy  policy);
    void setSpacing(QFormLayout* theWrappedObject, int  arg__1);
    void setVerticalSpacing(QFormLayout* theWrappedObject, int  spacing);
    void setWidget(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QWidget*  widget);
    QSize  sizeHint(QFormLayout* theWrappedObject) const;
    int  spacing(QFormLayout* theWrappedObject) const;
    QLayoutItem*  takeAt(QFormLayout* theWrappedObject, int  index);
    int  verticalSpacing(QFormLayout* theWrappedObject) const;
};





class PythonQtShell_QFrame : public QFrame
{
public:
    PythonQtShell_QFrame(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QFrame(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QFrame();

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
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFrame : public QFrame
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QFrame::changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QFrame::event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QFrame::paintEvent(arg__1); }
};

class PythonQtWrapper_QFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleMask )
enum StyleMask{
  Shadow_Mask = QFrame::Shadow_Mask,   Shape_Mask = QFrame::Shape_Mask};
public slots:
QFrame* new_QFrame(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QFrame(QFrame* obj) { delete obj; } 
    void changeEvent(QFrame* theWrappedObject, QEvent*  arg__1);
    bool  event(QFrame* theWrappedObject, QEvent*  e);
    QRect  frameRect(QFrame* theWrappedObject) const;
    QFrame::Shadow  frameShadow(QFrame* theWrappedObject) const;
    QFrame::Shape  frameShape(QFrame* theWrappedObject) const;
    int  frameStyle(QFrame* theWrappedObject) const;
    int  frameWidth(QFrame* theWrappedObject) const;
    int  lineWidth(QFrame* theWrappedObject) const;
    int  midLineWidth(QFrame* theWrappedObject) const;
    void paintEvent(QFrame* theWrappedObject, QPaintEvent*  arg__1);
    void setFrameRect(QFrame* theWrappedObject, const QRect&  arg__1);
    void setFrameShadow(QFrame* theWrappedObject, QFrame::Shadow  arg__1);
    void setFrameShape(QFrame* theWrappedObject, QFrame::Shape  arg__1);
    void setFrameStyle(QFrame* theWrappedObject, int  arg__1);
    void setLineWidth(QFrame* theWrappedObject, int  arg__1);
    void setMidLineWidth(QFrame* theWrappedObject, int  arg__1);
    QSize  sizeHint(QFrame* theWrappedObject) const;
};





class PythonQtShell_QGesture : public QGesture
{
public:
    PythonQtShell_QGesture(QObject*  parent = 0):QGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGesture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGesture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(GestureCancelPolicy )
enum GestureCancelPolicy{
  CancelNone = QGesture::CancelNone,   CancelAllInContext = QGesture::CancelAllInContext};
public slots:
QGesture* new_QGesture(QObject*  parent = 0);
void delete_QGesture(QGesture* obj) { delete obj; } 
    QGesture::GestureCancelPolicy  gestureCancelPolicy(QGesture* theWrappedObject) const;
    Qt::GestureType  gestureType(QGesture* theWrappedObject) const;
    bool  hasHotSpot(QGesture* theWrappedObject) const;
    QPointF  hotSpot(QGesture* theWrappedObject) const;
    void setGestureCancelPolicy(QGesture* theWrappedObject, QGesture::GestureCancelPolicy  policy);
    void setHotSpot(QGesture* theWrappedObject, const QPointF&  value);
    Qt::GestureState  state(QGesture* theWrappedObject) const;
    void unsetHotSpot(QGesture* theWrappedObject);
};





class PythonQtWrapper_QGradient : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Spread Type CoordinateMode )
enum Spread{
  PadSpread = QGradient::PadSpread,   ReflectSpread = QGradient::ReflectSpread,   RepeatSpread = QGradient::RepeatSpread};
enum Type{
  LinearGradient = QGradient::LinearGradient,   RadialGradient = QGradient::RadialGradient,   ConicalGradient = QGradient::ConicalGradient,   NoGradient = QGradient::NoGradient};
enum CoordinateMode{
  LogicalMode = QGradient::LogicalMode,   StretchToDeviceMode = QGradient::StretchToDeviceMode,   ObjectBoundingMode = QGradient::ObjectBoundingMode};
public slots:
QGradient* new_QGradient();
QGradient* new_QGradient(const QGradient& other) {
QGradient* a = new QGradient();
*((QGradient*)a) = other;
return a; }
void delete_QGradient(QGradient* obj) { delete obj; } 
    QGradient::CoordinateMode  coordinateMode(QGradient* theWrappedObject) const;
    bool  __ne__(QGradient* theWrappedObject, const QGradient&  other) const;
    bool  __eq__(QGradient* theWrappedObject, const QGradient&  gradient) const;
    void setColorAt(QGradient* theWrappedObject, qreal  pos, const QColor&  color);
    void setCoordinateMode(QGradient* theWrappedObject, QGradient::CoordinateMode  mode);
    void setSpread(QGradient* theWrappedObject, QGradient::Spread  spread);
    void setStops(QGradient* theWrappedObject, const QVector<QPair<qreal , QColor >  >&  stops);
    QGradient::Spread  spread(QGradient* theWrappedObject) const;
    QVector<QPair<qreal , QColor >  >  stops(QGradient* theWrappedObject) const;
    QGradient::Type  type(QGradient* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsAnchor : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QGraphicsAnchor(QGraphicsAnchor* obj) { delete obj; } 
    void setSizePolicy(QGraphicsAnchor* theWrappedObject, QSizePolicy::Policy  policy);
    void setSpacing(QGraphicsAnchor* theWrappedObject, qreal  spacing);
    QSizePolicy::Policy  sizePolicy(QGraphicsAnchor* theWrappedObject) const;
    qreal  spacing(QGraphicsAnchor* theWrappedObject) const;
    void unsetSpacing(QGraphicsAnchor* theWrappedObject);
};





class PythonQtShell_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{
public:
    PythonQtShell_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsAnchorLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsAnchorLayout();

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{ public:
inline int  promoted_count() const { return QGraphicsAnchorLayout::count(); }
inline void promoted_invalidate() { QGraphicsAnchorLayout::invalidate(); }
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsAnchorLayout::itemAt(index); }
inline void promoted_removeAt(int  index) { QGraphicsAnchorLayout::removeAt(index); }
};

class PythonQtWrapper_QGraphicsAnchorLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsAnchorLayout* new_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsAnchorLayout(QGraphicsAnchorLayout* obj) { delete obj; } 
    QGraphicsAnchor*  addAnchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
    void addAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, QGraphicsLayoutItem*  secondItem, Qt::Orientations  orientations = Qt::Horizontal | Qt::Vertical);
    void addCornerAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::Corner  firstCorner, QGraphicsLayoutItem*  secondItem, Qt::Corner  secondCorner);
    QGraphicsAnchor*  anchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
    int  count(QGraphicsAnchorLayout* theWrappedObject) const;
    qreal  horizontalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
    void invalidate(QGraphicsAnchorLayout* theWrappedObject);
    QGraphicsLayoutItem*  itemAt(QGraphicsAnchorLayout* theWrappedObject, int  index) const;
    void removeAt(QGraphicsAnchorLayout* theWrappedObject, int  index);
    void setGeometry(QGraphicsAnchorLayout* theWrappedObject, const QRectF&  rect);
    void setHorizontalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
    void setSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
    void setVerticalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
    qreal  verticalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
};





class PythonQtShell_QGraphicsBlurEffect : public QGraphicsBlurEffect
{
public:
    PythonQtShell_QGraphicsBlurEffect(QObject*  parent = 0):QGraphicsBlurEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsBlurEffect();

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

class PythonQtPublicPromoter_QGraphicsBlurEffect : public QGraphicsBlurEffect
{ public:
inline QRectF  promoted_boundingRectFor(const QRectF&  rect) const { return QGraphicsBlurEffect::boundingRectFor(rect); }
inline void promoted_draw(QPainter*  painter) { QGraphicsBlurEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsBlurEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BlurHint )
Q_FLAGS(BlurHints )
enum BlurHint{
  PerformanceHint = QGraphicsBlurEffect::PerformanceHint,   QualityHint = QGraphicsBlurEffect::QualityHint,   AnimationHint = QGraphicsBlurEffect::AnimationHint};
Q_DECLARE_FLAGS(BlurHints, BlurHint)
public slots:
QGraphicsBlurEffect* new_QGraphicsBlurEffect(QObject*  parent = 0);
void delete_QGraphicsBlurEffect(QGraphicsBlurEffect* obj) { delete obj; } 
    QGraphicsBlurEffect::BlurHints  blurHints(QGraphicsBlurEffect* theWrappedObject) const;
    qreal  blurRadius(QGraphicsBlurEffect* theWrappedObject) const;
    QRectF  boundingRectFor(QGraphicsBlurEffect* theWrappedObject, const QRectF&  rect) const;
    void draw(QGraphicsBlurEffect* theWrappedObject, QPainter*  painter);
};


