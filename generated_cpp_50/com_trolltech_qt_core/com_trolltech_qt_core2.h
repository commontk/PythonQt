#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qeasingcurve.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qreadwritelock.h>
#include <qtextcodec.h>
#include <qtimer.h>
#include <qtranslator.h>
#include <quuid.h>
#include <qvariantanimation.h>
#include <qvector.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>



class PythonQtShell_QTimer : public QTimer
{
public:
    PythonQtShell_QTimer(QObject*  parent = 0):QTimer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTimer();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTimer : public QTimer
{ public:
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QTimer::timerEvent(arg__1); }
};

class PythonQtWrapper_QTimer : public QObject
{ Q_OBJECT
public:
public slots:
QTimer* new_QTimer(QObject*  parent = 0);
void delete_QTimer(QTimer* obj) { delete obj; } 
    int  interval(QTimer* theWrappedObject) const;
    bool  isActive(QTimer* theWrappedObject) const;
    bool  isSingleShot(QTimer* theWrappedObject) const;
    int  remainingTime(QTimer* theWrappedObject) const;
    void setInterval(QTimer* theWrappedObject, int  msec);
    void setSingleShot(QTimer* theWrappedObject, bool  singleShot);
    void setTimerType(QTimer* theWrappedObject, Qt::TimerType  atype);
    void timerEvent(QTimer* theWrappedObject, QTimerEvent*  arg__1);
    int  timerId(QTimer* theWrappedObject) const;
    Qt::TimerType  timerType(QTimer* theWrappedObject) const;
};





class PythonQtShell_QTimerEvent : public QTimerEvent
{
public:
    PythonQtShell_QTimerEvent(int  timerId):QTimerEvent(timerId),_wrapper(NULL) {};

   ~PythonQtShell_QTimerEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTimerEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTimerEvent* new_QTimerEvent(int  timerId);
void delete_QTimerEvent(QTimerEvent* obj) { delete obj; } 
    int  timerId(QTimerEvent* theWrappedObject) const;
};





class PythonQtShell_QTranslator : public QTranslator
{
public:
    PythonQtShell_QTranslator(QObject*  parent = 0):QTranslator(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTranslator();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isEmpty() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QString  translate(const char*  context, const char*  sourceText, const char*  disambiguation = 0, int  n = -1) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTranslator : public QTranslator
{ public:
inline bool  promoted_isEmpty() const { return QTranslator::isEmpty(); }
};

class PythonQtWrapper_QTranslator : public QObject
{ Q_OBJECT
public:
public slots:
QTranslator* new_QTranslator(QObject*  parent = 0);
void delete_QTranslator(QTranslator* obj) { delete obj; } 
    bool  isEmpty(QTranslator* theWrappedObject) const;
    bool  load(QTranslator* theWrappedObject, const QLocale&  locale, const QString&  filename, const QString&  prefix = QString(), const QString&  directory = QString(), const QString&  suffix = QString());
    bool  load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory = QString(), const QString&  search_delimiters = QString(), const QString&  suffix = QString());
    bool  load(QTranslator* theWrappedObject, const uchar*  data, int  len, const QString&  directory = QString());
};





class PythonQtShell_QUuid : public QUuid
{
public:
    PythonQtShell_QUuid():QUuid(),_wrapper(NULL) {};
    PythonQtShell_QUuid(const QByteArray&  arg__1):QUuid(arg__1),_wrapper(NULL) {};
    PythonQtShell_QUuid(const QString&  arg__1):QUuid(arg__1),_wrapper(NULL) {};
    PythonQtShell_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8):QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8),_wrapper(NULL) {};

   ~PythonQtShell_QUuid();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUuid : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Version Variant )
enum Version{
  VerUnknown = QUuid::VerUnknown,   Time = QUuid::Time,   EmbeddedPOSIX = QUuid::EmbeddedPOSIX,   Md5 = QUuid::Md5,   Name = QUuid::Name,   Random = QUuid::Random,   Sha1 = QUuid::Sha1};
enum Variant{
  VarUnknown = QUuid::VarUnknown,   NCS = QUuid::NCS,   DCE = QUuid::DCE,   Microsoft = QUuid::Microsoft,   Reserved = QUuid::Reserved};
public slots:
QUuid* new_QUuid();
QUuid* new_QUuid(const QByteArray&  arg__1);
QUuid* new_QUuid(const QString&  arg__1);
QUuid* new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8);
QUuid* new_QUuid(const QUuid& other) {
PythonQtShell_QUuid* a = new PythonQtShell_QUuid();
*((QUuid*)a) = other;
return a; }
void delete_QUuid(QUuid* obj) { delete obj; } 
    QUuid  static_QUuid_createUuid();
    QUuid  static_QUuid_createUuidV3(const QUuid&  ns, const QByteArray&  baseData);
    QUuid  static_QUuid_createUuidV3(const QUuid&  ns, const QString&  baseData);
    QUuid  static_QUuid_createUuidV5(const QUuid&  ns, const QByteArray&  baseData);
    QUuid  static_QUuid_createUuidV5(const QUuid&  ns, const QString&  baseData);
    QUuid  static_QUuid_fromRfc4122(const QByteArray&  arg__1);
    bool  isNull(QUuid* theWrappedObject) const;
    bool  __ne__(QUuid* theWrappedObject, const QUuid&  orig) const;
    bool  __lt__(QUuid* theWrappedObject, const QUuid&  other) const;
    bool  __eq__(QUuid* theWrappedObject, const QUuid&  orig) const;
    bool  __gt__(QUuid* theWrappedObject, const QUuid&  other) const;
    QByteArray  toByteArray(QUuid* theWrappedObject) const;
    QByteArray  toRfc4122(QUuid* theWrappedObject) const;
    QString  toString(QUuid* theWrappedObject) const;
    QUuid::Variant  variant(QUuid* theWrappedObject) const;
    QUuid::Version  version(QUuid* theWrappedObject) const;
    QString py_toString(QUuid*);
    bool __nonzero__(QUuid* obj) { return !obj->isNull(); }
void py_set_data3(QUuid* theWrappedObject, ushort  data3){ theWrappedObject->data3 = data3; }
ushort  py_get_data3(QUuid* theWrappedObject){ return theWrappedObject->data3; }
void py_set_data1(QUuid* theWrappedObject, uint  data1){ theWrappedObject->data1 = data1; }
uint  py_get_data1(QUuid* theWrappedObject){ return theWrappedObject->data1; }
void py_set_data2(QUuid* theWrappedObject, ushort  data2){ theWrappedObject->data2 = data2; }
ushort  py_get_data2(QUuid* theWrappedObject){ return theWrappedObject->data2; }
};





class PythonQtShell_QVariantAnimation : public QVariantAnimation
{
public:
    PythonQtShell_QVariantAnimation(QObject*  parent = 0):QVariantAnimation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVariantAnimation();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  arg__1);
virtual void updateCurrentValue(const QVariant&  value);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVariantAnimation : public QVariantAnimation
{ public:
inline int  promoted_duration() const { return QVariantAnimation::duration(); }
inline bool  promoted_event(QEvent*  event) { return QVariantAnimation::event(event); }
inline QVariant  promoted_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return QVariantAnimation::interpolated(from, to, progress); }
inline void promoted_updateCurrentTime(int  arg__1) { QVariantAnimation::updateCurrentTime(arg__1); }
inline void promoted_updateCurrentValue(const QVariant&  value) { QVariantAnimation::updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QVariantAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QVariantAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QVariantAnimation* new_QVariantAnimation(QObject*  parent = 0);
void delete_QVariantAnimation(QVariantAnimation* obj) { delete obj; } 
    QVariant  currentValue(QVariantAnimation* theWrappedObject) const;
    int  duration(QVariantAnimation* theWrappedObject) const;
    QEasingCurve  easingCurve(QVariantAnimation* theWrappedObject) const;
    QVariant  endValue(QVariantAnimation* theWrappedObject) const;
    bool  event(QVariantAnimation* theWrappedObject, QEvent*  event);
    QVariant  interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const;
    QVariant  keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const;
    QVector<QPair<qreal , QVariant >  >  keyValues(QVariantAnimation* theWrappedObject) const;
    void setDuration(QVariantAnimation* theWrappedObject, int  msecs);
    void setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing);
    void setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
    void setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value);
    void setKeyValues(QVariantAnimation* theWrappedObject, const QVector<QPair<qreal , QVariant >  >&  values);
    void setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
    QVariant  startValue(QVariantAnimation* theWrappedObject) const;
    void updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1);
    void updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
    void updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
};





class PythonQtWrapper_QWaitCondition : public QObject
{ Q_OBJECT
public:
public slots:
QWaitCondition* new_QWaitCondition();
void delete_QWaitCondition(QWaitCondition* obj) { delete obj; } 
    bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time = ULONG_MAX);
    bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time = ULONG_MAX);
    void wakeAll(QWaitCondition* theWrappedObject);
    void wakeOne(QWaitCondition* theWrappedObject);
};





class PythonQtWrapper_QXmlStreamAttribute : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttribute* new_QXmlStreamAttribute();
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  namespaceUri, const QString&  name, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  qualifiedName, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QXmlStreamAttribute&  arg__1);
void delete_QXmlStreamAttribute(QXmlStreamAttribute* obj) { delete obj; } 
    bool  isDefault(QXmlStreamAttribute* theWrappedObject) const;
    QStringRef  name(QXmlStreamAttribute* theWrappedObject) const;
    QStringRef  namespaceUri(QXmlStreamAttribute* theWrappedObject) const;
    bool  __ne__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const;
    bool  __eq__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const;
    QStringRef  prefix(QXmlStreamAttribute* theWrappedObject) const;
    QStringRef  qualifiedName(QXmlStreamAttribute* theWrappedObject) const;
    QStringRef  value(QXmlStreamAttribute* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttributes* new_QXmlStreamAttributes();
QXmlStreamAttributes* new_QXmlStreamAttributes(const QXmlStreamAttributes& other) {
QXmlStreamAttributes* a = new QXmlStreamAttributes();
*((QXmlStreamAttributes*)a) = other;
return a; }
void delete_QXmlStreamAttributes(QXmlStreamAttributes* obj) { delete obj; } 
    void append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
    void append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value);
    void append(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  attribute);
    const QXmlStreamAttribute*  at(QXmlStreamAttributes* theWrappedObject, int  i) const;
    int  capacity(QXmlStreamAttributes* theWrappedObject) const;
    void clear(QXmlStreamAttributes* theWrappedObject);
    bool  contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
    int  count(QXmlStreamAttributes* theWrappedObject) const;
    int  count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
    bool  empty(QXmlStreamAttributes* theWrappedObject) const;
    bool  endsWith(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
    QVector<QXmlStreamAttribute >*  fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size);
    const QXmlStreamAttribute*  first(QXmlStreamAttributes* theWrappedObject) const;
    QVector<QXmlStreamAttribute >  static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list);
    bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
    bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
    int  indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
    bool  isEmpty(QXmlStreamAttributes* theWrappedObject) const;
    bool  isSharedWith(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  other) const;
    const QXmlStreamAttribute*  last(QXmlStreamAttributes* theWrappedObject) const;
    int  lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
    QVector<QXmlStreamAttribute >  mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  length) const;
    bool  __ne__(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const;
    bool  __eq__(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const;
    void prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t);
    void remove(QXmlStreamAttributes* theWrappedObject, int  i);
    void remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n);
    void replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t);
    void reserve(QXmlStreamAttributes* theWrappedObject, int  size);
    void resize(QXmlStreamAttributes* theWrappedObject, int  size);
    void setSharable(QXmlStreamAttributes* theWrappedObject, bool  sharable);
    int  size(QXmlStreamAttributes* theWrappedObject) const;
    void squeeze(QXmlStreamAttributes* theWrappedObject);
    bool  startsWith(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
    void swap(QXmlStreamAttributes* theWrappedObject, QVector<QXmlStreamAttribute >&  other);
    QList<QXmlStreamAttribute >  toList(QXmlStreamAttributes* theWrappedObject) const;
    QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
    QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
};





class PythonQtWrapper_QXmlStreamEntityDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration();
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration&  arg__1);
void delete_QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration* obj) { delete obj; } 
    QStringRef  name(QXmlStreamEntityDeclaration* theWrappedObject) const;
    QStringRef  notationName(QXmlStreamEntityDeclaration* theWrappedObject) const;
    bool  __ne__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const;
    bool  __eq__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const;
    QStringRef  publicId(QXmlStreamEntityDeclaration* theWrappedObject) const;
    QStringRef  systemId(QXmlStreamEntityDeclaration* theWrappedObject) const;
    QStringRef  value(QXmlStreamEntityDeclaration* theWrappedObject) const;
};





class PythonQtShell_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{
public:
    PythonQtShell_QXmlStreamEntityResolver():QXmlStreamEntityResolver(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlStreamEntityResolver();

virtual QString  resolveEntity(const QString&  publicId, const QString&  systemId);
virtual QString  resolveUndeclaredEntity(const QString&  name);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{ public:
inline QString  promoted_resolveEntity(const QString&  publicId, const QString&  systemId) { return QXmlStreamEntityResolver::resolveEntity(publicId, systemId); }
inline QString  promoted_resolveUndeclaredEntity(const QString&  name) { return QXmlStreamEntityResolver::resolveUndeclaredEntity(name); }
};

class PythonQtWrapper_QXmlStreamEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityResolver* new_QXmlStreamEntityResolver();
void delete_QXmlStreamEntityResolver(QXmlStreamEntityResolver* obj) { delete obj; } 
    QString  resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId);
    QString  resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name);
};





class PythonQtWrapper_QXmlStreamNamespaceDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration();
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QString&  prefix, const QString&  namespaceUri);
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration&  arg__1);
void delete_QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration* obj) { delete obj; } 
    QStringRef  namespaceUri(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
    bool  __ne__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const;
    bool  __eq__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const;
    QStringRef  prefix(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamNotationDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration();
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration&  arg__1);
void delete_QXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration* obj) { delete obj; } 
    QStringRef  name(QXmlStreamNotationDeclaration* theWrappedObject) const;
    bool  __ne__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const;
    bool  __eq__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const;
    QStringRef  publicId(QXmlStreamNotationDeclaration* theWrappedObject) const;
    QStringRef  systemId(QXmlStreamNotationDeclaration* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ReadElementTextBehaviour TokenType Error )
enum ReadElementTextBehaviour{
  ErrorOnUnexpectedElement = QXmlStreamReader::ErrorOnUnexpectedElement,   IncludeChildElements = QXmlStreamReader::IncludeChildElements,   SkipChildElements = QXmlStreamReader::SkipChildElements};
enum TokenType{
  NoToken = QXmlStreamReader::NoToken,   Invalid = QXmlStreamReader::Invalid,   StartDocument = QXmlStreamReader::StartDocument,   EndDocument = QXmlStreamReader::EndDocument,   StartElement = QXmlStreamReader::StartElement,   EndElement = QXmlStreamReader::EndElement,   Characters = QXmlStreamReader::Characters,   Comment = QXmlStreamReader::Comment,   DTD = QXmlStreamReader::DTD,   EntityReference = QXmlStreamReader::EntityReference,   ProcessingInstruction = QXmlStreamReader::ProcessingInstruction};
enum Error{
  NoError = QXmlStreamReader::NoError,   UnexpectedElementError = QXmlStreamReader::UnexpectedElementError,   CustomError = QXmlStreamReader::CustomError,   NotWellFormedError = QXmlStreamReader::NotWellFormedError,   PrematureEndOfDocumentError = QXmlStreamReader::PrematureEndOfDocumentError};
public slots:
QXmlStreamReader* new_QXmlStreamReader();
QXmlStreamReader* new_QXmlStreamReader(QIODevice*  device);
QXmlStreamReader* new_QXmlStreamReader(const QByteArray&  data);
QXmlStreamReader* new_QXmlStreamReader(const QString&  data);
void delete_QXmlStreamReader(QXmlStreamReader* obj) { delete obj; } 
    void addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data);
    void addData(QXmlStreamReader* theWrappedObject, const QString&  data);
    void addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction);
    void addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions);
    bool  atEnd(QXmlStreamReader* theWrappedObject) const;
    QXmlStreamAttributes  attributes(QXmlStreamReader* theWrappedObject) const;
    qint64  characterOffset(QXmlStreamReader* theWrappedObject) const;
    void clear(QXmlStreamReader* theWrappedObject);
    qint64  columnNumber(QXmlStreamReader* theWrappedObject) const;
    QIODevice*  device(QXmlStreamReader* theWrappedObject) const;
    QStringRef  documentEncoding(QXmlStreamReader* theWrappedObject) const;
    QStringRef  documentVersion(QXmlStreamReader* theWrappedObject) const;
    QStringRef  dtdName(QXmlStreamReader* theWrappedObject) const;
    QStringRef  dtdPublicId(QXmlStreamReader* theWrappedObject) const;
    QStringRef  dtdSystemId(QXmlStreamReader* theWrappedObject) const;
    QVector<QXmlStreamEntityDeclaration >  entityDeclarations(QXmlStreamReader* theWrappedObject) const;
    QXmlStreamEntityResolver*  entityResolver(QXmlStreamReader* theWrappedObject) const;
    QXmlStreamReader::Error  error(QXmlStreamReader* theWrappedObject) const;
    QString  errorString(QXmlStreamReader* theWrappedObject) const;
    bool  hasError(QXmlStreamReader* theWrappedObject) const;
    bool  isCDATA(QXmlStreamReader* theWrappedObject) const;
    bool  isCharacters(QXmlStreamReader* theWrappedObject) const;
    bool  isComment(QXmlStreamReader* theWrappedObject) const;
    bool  isDTD(QXmlStreamReader* theWrappedObject) const;
    bool  isEndDocument(QXmlStreamReader* theWrappedObject) const;
    bool  isEndElement(QXmlStreamReader* theWrappedObject) const;
    bool  isEntityReference(QXmlStreamReader* theWrappedObject) const;
    bool  isProcessingInstruction(QXmlStreamReader* theWrappedObject) const;
    bool  isStandaloneDocument(QXmlStreamReader* theWrappedObject) const;
    bool  isStartDocument(QXmlStreamReader* theWrappedObject) const;
    bool  isStartElement(QXmlStreamReader* theWrappedObject) const;
    bool  isWhitespace(QXmlStreamReader* theWrappedObject) const;
    qint64  lineNumber(QXmlStreamReader* theWrappedObject) const;
    QStringRef  name(QXmlStreamReader* theWrappedObject) const;
    QVector<QXmlStreamNamespaceDeclaration >  namespaceDeclarations(QXmlStreamReader* theWrappedObject) const;
    bool  namespaceProcessing(QXmlStreamReader* theWrappedObject) const;
    QStringRef  namespaceUri(QXmlStreamReader* theWrappedObject) const;
    QVector<QXmlStreamNotationDeclaration >  notationDeclarations(QXmlStreamReader* theWrappedObject) const;
    QStringRef  prefix(QXmlStreamReader* theWrappedObject) const;
    QStringRef  processingInstructionData(QXmlStreamReader* theWrappedObject) const;
    QStringRef  processingInstructionTarget(QXmlStreamReader* theWrappedObject) const;
    QStringRef  qualifiedName(QXmlStreamReader* theWrappedObject) const;
    void raiseError(QXmlStreamReader* theWrappedObject, const QString&  message = QString());
    QString  readElementText(QXmlStreamReader* theWrappedObject, QXmlStreamReader::ReadElementTextBehaviour  behaviour = QXmlStreamReader::ErrorOnUnexpectedElement);
    QXmlStreamReader::TokenType  readNext(QXmlStreamReader* theWrappedObject);
    bool  readNextStartElement(QXmlStreamReader* theWrappedObject);
    void setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device);
    void setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver);
    void setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1);
    void skipCurrentElement(QXmlStreamReader* theWrappedObject);
    QStringRef  text(QXmlStreamReader* theWrappedObject) const;
    QString  tokenString(QXmlStreamReader* theWrappedObject) const;
    QXmlStreamReader::TokenType  tokenType(QXmlStreamReader* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamWriter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamWriter* new_QXmlStreamWriter();
QXmlStreamWriter* new_QXmlStreamWriter(QByteArray*  array);
QXmlStreamWriter* new_QXmlStreamWriter(QIODevice*  device);
void delete_QXmlStreamWriter(QXmlStreamWriter* obj) { delete obj; } 
    bool  autoFormatting(QXmlStreamWriter* theWrappedObject) const;
    int  autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const;
    QTextCodec*  codec(QXmlStreamWriter* theWrappedObject) const;
    QIODevice*  device(QXmlStreamWriter* theWrappedObject) const;
    bool  hasError(QXmlStreamWriter* theWrappedObject) const;
    void setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1);
    void setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spacesOrTabs);
    void setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec);
    void setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName);
    void setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device);
    void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
    void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value);
    void writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute);
    void writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes);
    void writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text);
    void writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text);
    void writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text);
    void writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader);
    void writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd);
    void writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri);
    void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
    void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
    void writeEndDocument(QXmlStreamWriter* theWrappedObject);
    void writeEndElement(QXmlStreamWriter* theWrappedObject);
    void writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name);
    void writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix = QString());
    void writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data = QString());
    void writeStartDocument(QXmlStreamWriter* theWrappedObject);
    void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version);
    void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version, bool  standalone);
    void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
    void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
    void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text);
    void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text);
};


