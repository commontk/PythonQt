/*
 *
 *  Copyright (C) 2010 MeVis Medical Solutions AG All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  Further, this software is distributed without any warranty that it is
 *  free of the rightful claim of any third person regarding infringement
 *  or the like.  Any license provided herein, whether implied or
 *  otherwise, applies only to this software file.  Patent licenses, if
 *  any, provided herein do not apply to combinations of this program with
 *  other software, or any other product whatsoever.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact information: MeVis Medical Solutions AG, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PythonQtMethodInfo.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtMethodInfo.h"
#include "PythonQtClassInfo.h"
#include <iostream>

PythonQtMethodInfo::PythonQtMethodInfo(const QMetaMethod& meta, PythonQtClassInfo* classInfo)
{
#ifdef PYTHONQT_DEBUG
  QByteArray sig = PythonQtUtils::signature(meta));
  sig = sig.mid(sig.indexOf('('));
  QByteArray fullSig = QByteArray(meta.typeName()) + " " + sig;
  std::cout << "caching " << fullSig.data() << std::endl;
#endif

  ParameterInfo type;
  fillParameterInfo(type, QByteArray(meta.typeName()), classInfo);
  _parameters.append(type);
  QList<QByteArray> names = meta.parameterTypes();
  Q_FOREACH (const QByteArray& name, names) {
    fillParameterInfo(type, name, classInfo);
    _parameters.append(type);
  }
}

PythonQtMethodInfo::PythonQtMethodInfo(const QByteArray& typeName, const QList<QByteArray>& args)
{
  ParameterInfo type;
  fillParameterInfo(type, typeName, NULL);
  _parameters.append(type);
  Q_FOREACH (const QByteArray& name, args) {
    fillParameterInfo(type, name, NULL);
    _parameters.append(type);
  }
}

const PythonQtMethodInfo* PythonQtMethodInfo::getCachedMethodInfo(const QMetaMethod& signal, PythonQtClassInfo* classInfo)
{
  QByteArray sig(PythonQtUtils::signature(signal));
  sig = sig.mid(sig.indexOf('('));
  QByteArray fullSig = QByteArray(signal.typeName()) + " " + sig;
  PythonQtMethodInfo* result = getCachedSignatures()->value(fullSig);
  if (!result) {
    result = new PythonQtMethodInfo(signal, classInfo);
    getCachedSignatures()->insert(fullSig, result);
  }
  return result;
}

const PythonQtMethodInfo* PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(int numArgs, const char** args)
{
  QByteArray typeName = args[0];
  QList<QByteArray> arguments;
  QByteArray fullSig = typeName;
  fullSig += "(";
  for (int i =1;i<numArgs; i++) {
    if (i>1) {
      fullSig += ",";
    }
    QByteArray arg(args[i]);
    fullSig += arg;
    arguments << arg;
  }
  fullSig += ")";
  PythonQtMethodInfo* result = getCachedSignatures()->value(fullSig);
  if (!result) {
    result = new PythonQtMethodInfo(typeName, arguments);
    getCachedSignatures()->insert(fullSig, result);
  }
  return result;
}

void PythonQtMethodInfo::fillParameterInfo(ParameterInfo& type, const QByteArray& orgName, PythonQtClassInfo* classInfo)
{
  QByteArray name = orgName;

  type.enumWrapper = NULL;
  type.innerNamePointerCount = 0;
  type.isQList = false;
  type.passOwnershipToCPP = false;
  type.passOwnershipToPython = false;
  type.newOwnerOfThis = false;

  int len = name.length();
  if (len>0) {
    if (name.startsWith("PythonQtPassOwnershipToCPP<")) {
      type.passOwnershipToCPP = true;
      name = name.mid(27, len-28);
      len -= 28;
    } else
    if (name.startsWith("PythonQtPassOwnershipToPython<")) {
      type.passOwnershipToPython = true;
      name = name.mid(30, len-31);
      len -= 31;
    } else
    if (name.startsWith("PythonQtNewOwnerOfThis<")) {
      type.newOwnerOfThis = true;
      name = name.mid(23, len-24);
      len -= 24;
    }

    if (strncmp(name.constData(), "const ", 6)==0) {
      name = name.mid(6);
      len -= 6;
      type.isConst = true;
    } else {
      type.isConst = false;
    }
    char pointerCount = 0;
    bool hadReference = false;
    // remove * and & from the end of the string
    while (name.at(len-1) == '*') {
      len--;
      pointerCount++;
    }
    while (name.at(len-1) == '&') {
      len--;
      hadReference = true;
    }
    if (len!=name.length()) {
      name = name.left(len);
    }
    type.pointerCount = pointerCount;
    type.isReference = hadReference;

    QByteArray alias = getParameterNameAliases()->value(name);
    if (!alias.isEmpty()) {
      name = alias;
    }

    type.typeId = nameToType(name);
    if (type.typeId == Unknown) {
      type.typeId = QMetaType::type(name.constData());
#if( QT_VERSION >= QT_VERSION_CHECK(5,0,0) )
      if (type.typeId == QMetaType::UnknownType) {
#else
      if (type.typeId == QMetaType::Void) {
#endif
        type.typeId = Unknown;
      }
    }
    type.name = name;

    if (name.startsWith("QList<")) {
      type.isQList = true;
    }
    if (name.contains("<")) {
      QByteArray innerName = getInnerTemplateTypeName(name);
      if (innerName.endsWith("*")) {
        type.innerNamePointerCount = 1;
        innerName.truncate(innerName.length() - 1);
      }
      type.innerName = innerName;
    }

    if (type.typeId == PythonQtMethodInfo::Unknown || type.typeId >= QMetaType::User) {
      bool isLocalEnum;
      // TODOXXX: make use of this flag!
      type.enumWrapper = PythonQtClassInfo::findEnumWrapper(type.name, classInfo, &isLocalEnum);
    }
  } else {
    type.typeId = QMetaType::Void;
    type.pointerCount = 0;
    type.isConst = false;
    type.isReference = false;
  }
}

int PythonQtMethodInfo::getInnerTemplateMetaType(const QByteArray& typeName)
{
  int idx = typeName.indexOf("<");
  if (idx > 0) {
    int idx2 = typeName.lastIndexOf(">");
    if (idx2 > 0) {
      QByteArray innerType = typeName.mid(idx + 1, idx2 - idx - 1).trimmed();
      return QMetaType::type(innerType.constData());
    }
  }
  return QMetaType::Void;
}

QByteArray PythonQtMethodInfo::getInnerTemplateTypeName(const QByteArray& typeName)
{
  int idx = typeName.indexOf("<");
  if (idx > 0) {
    int idx2 = typeName.lastIndexOf(">");
    if (idx2 > 0) {
      return typeName.mid(idx + 1, idx2 - idx - 1).trimmed();
    }
  }
  return QByteArray();
}

int PythonQtMethodInfo::nameToType(const char* name)
{
  if (getParameterTypeDict()->isEmpty()) {
    // we could also use QMetaType::nameToType, but that does a string compare search
    // and does not support QVariant

    // QMetaType names
    getParameterTypeDict()->insert("long", QMetaType::Long);
    getParameterTypeDict()->insert("int", QMetaType::Int);
    getParameterTypeDict()->insert("short", QMetaType::Short);
    getParameterTypeDict()->insert("char", QMetaType::Char);
    getParameterTypeDict()->insert("ulong", QMetaType::ULong);
    getParameterTypeDict()->insert("unsigned long", QMetaType::ULong);
    getParameterTypeDict()->insert("uint", QMetaType::UInt);
    getParameterTypeDict()->insert("unsigned int", QMetaType::UInt);
    getParameterTypeDict()->insert("ushort", QMetaType::UShort);
    getParameterTypeDict()->insert("unsigned short", QMetaType::UShort);
    getParameterTypeDict()->insert("uchar", QMetaType::UChar);
    getParameterTypeDict()->insert("unsigned char", QMetaType::UChar);
    getParameterTypeDict()->insert("bool", QMetaType::Bool);
    getParameterTypeDict()->insert("float", QMetaType::Float);
    getParameterTypeDict()->insert("double", QMetaType::Double);
    getParameterTypeDict()->insert("qreal", QMetaType::Double);
    getParameterTypeDict()->insert("QChar", QMetaType::QChar);
    getParameterTypeDict()->insert("QByteArray", QMetaType::QByteArray);
    getParameterTypeDict()->insert("QString", QMetaType::QString);
    getParameterTypeDict()->insert("", QMetaType::Void);
    getParameterTypeDict()->insert("void", QMetaType::Void);
    getParameterTypeDict()->insert("QtMsgType", QMetaType::Int);

    // GL types
    getParameterTypeDict()->insert("GLenum", QMetaType::UInt);
    getParameterTypeDict()->insert("GLboolean", QMetaType::UChar);
    getParameterTypeDict()->insert("GLbitfield", QMetaType::UInt);
    getParameterTypeDict()->insert("GLbyte", QMetaType::Char);
    getParameterTypeDict()->insert("GLubyte", QMetaType::UChar);
    getParameterTypeDict()->insert("GLshort", QMetaType::Short);
    getParameterTypeDict()->insert("GLushort", QMetaType::UShort);
    getParameterTypeDict()->insert("GLint", QMetaType::Int);
    getParameterTypeDict()->insert("GLuint", QMetaType::UInt);
    getParameterTypeDict()->insert("GLsizei", QMetaType::UInt);
    getParameterTypeDict()->insert("GLclampf", QMetaType::Float);
    getParameterTypeDict()->insert("GLfloat", QMetaType::Float);
    getParameterTypeDict()->insert("GLclampd", QMetaType::Double);
    getParameterTypeDict()->insert("GLdouble", QMetaType::Double);
    getParameterTypeDict()->insert("GLvoid", QMetaType::Void);
    if (QT_POINTER_SIZE == 8) {
      getParameterTypeDict()->insert("qgl_GLintptr", QMetaType::LongLong);
      getParameterTypeDict()->insert("qgl_GLsizeiptr", QMetaType::LongLong);
      getParameterTypeDict()->insert("size_t", QMetaType::ULongLong);
    } else {
      getParameterTypeDict()->insert("qgl_GLintptr", QMetaType::Int);
      getParameterTypeDict()->insert("qgl_GLsizeiptr", QMetaType::Int);
      getParameterTypeDict()->insert("size_t", QMetaType::UInt);
    }

    // QVariant names
    getParameterTypeDict()->insert("Q_LLONG", QMetaType::LongLong);
    getParameterTypeDict()->insert("Q_ULLONG", QMetaType::ULongLong);
    getParameterTypeDict()->insert("qlonglong", QMetaType::LongLong);
    getParameterTypeDict()->insert("qulonglong", QMetaType::ULongLong);
    getParameterTypeDict()->insert("qint64", QMetaType::LongLong);
    getParameterTypeDict()->insert("quint64", QMetaType::ULongLong);
    getParameterTypeDict()->insert("QVariantHash", QMetaType::QVariantHash);
    getParameterTypeDict()->insert("QVariantMap", QMetaType::QVariantMap);
    getParameterTypeDict()->insert("QVariantList", QMetaType::QVariantList);
    getParameterTypeDict()->insert("QHash<QString,QVariant>", QMetaType::QVariantHash);
    getParameterTypeDict()->insert("QMap<QString,QVariant>", QMetaType::QVariantMap);
    getParameterTypeDict()->insert("QList<QVariant>", QMetaType::QVariantList);
    getParameterTypeDict()->insert("QStringList", QMetaType::QStringList);
    getParameterTypeDict()->insert("QBitArray", QMetaType::QBitArray);
    getParameterTypeDict()->insert("QDate", QMetaType::QDate);
    getParameterTypeDict()->insert("QTime", QMetaType::QTime);
    getParameterTypeDict()->insert("QDateTime", QMetaType::QDateTime);
    getParameterTypeDict()->insert("QUrl", QMetaType::QUrl);
    getParameterTypeDict()->insert("QLocale", QMetaType::QLocale);
    getParameterTypeDict()->insert("QRect", QMetaType::QRect);
    getParameterTypeDict()->insert("QRectF", QMetaType::QRectF);
    getParameterTypeDict()->insert("QSize", QMetaType::QSize);
    getParameterTypeDict()->insert("QSizeF", QMetaType::QSizeF);
    getParameterTypeDict()->insert("QLine", QMetaType::QLine);
    getParameterTypeDict()->insert("QLineF", QMetaType::QLineF);
    getParameterTypeDict()->insert("QPoint", QMetaType::QPoint);
    getParameterTypeDict()->insert("QPointF", QMetaType::QPointF);
    getParameterTypeDict()->insert("QRegExp", QMetaType::QRegExp);
    getParameterTypeDict()->insert("QFont", QMetaType::QFont);
    getParameterTypeDict()->insert("QPixmap", QMetaType::QPixmap);
    getParameterTypeDict()->insert("QBrush", QMetaType::QBrush);
    getParameterTypeDict()->insert("QColor", QMetaType::QColor);
    getParameterTypeDict()->insert("QCursor", QMetaType::QCursor);
    getParameterTypeDict()->insert("QPalette", QMetaType::QPalette);
    getParameterTypeDict()->insert("QIcon", QMetaType::QIcon);
    getParameterTypeDict()->insert("QImage", QMetaType::QImage);
    getParameterTypeDict()->insert("QRegion", QMetaType::QRegion);
    getParameterTypeDict()->insert("QBitmap", QMetaType::QBitmap);
    getParameterTypeDict()->insert("QSizePolicy", QMetaType::QSizePolicy);
    getParameterTypeDict()->insert("QKeySequence", QMetaType::QKeySequence);
    getParameterTypeDict()->insert("QPen", QMetaType::QPen);
    getParameterTypeDict()->insert("QTextLength", QMetaType::QTextLength);
    getParameterTypeDict()->insert("QTextFormat", QMetaType::QTextFormat);
    getParameterTypeDict()->insert("QMatrix", QMetaType::QMatrix);
    getParameterTypeDict()->insert("QVariant", PythonQtMethodInfo::Variant);
    // own special types... (none so far, could be e.g. ObjectList
  }
  QHash<QByteArray, int>::const_iterator it = getParameterTypeDict()->find(name);
  if (it!=getParameterTypeDict()->end()) {
    return it.value();
  } else {
    return PythonQtMethodInfo::Unknown;
  }
}

void PythonQtMethodInfo::cleanupCachedMethodInfos()
{
  QHashIterator<QByteArray, PythonQtMethodInfo *> i(*getCachedSignatures());
  while (i.hasNext()) {
    delete i.next().value();
  }
  getCachedSignatures()->clear();
  getCachedParameterInfos()->clear();
}

void PythonQtMethodInfo::addParameterTypeAlias(const QByteArray& alias, const QByteArray& name)
{
  getParameterNameAliases()->insert(alias, name);
}

const PythonQtMethodInfo::ParameterInfo& PythonQtMethodInfo::getParameterInfoForMetaType(int type)
{
  QHash<int, ParameterInfo>::ConstIterator it = getCachedParameterInfos()->find(type);
  if (it != getCachedParameterInfos()->constEnd()) {
    return it.value();
  }
  ParameterInfo info;
  fillParameterInfo(info, QMetaType::typeName(type));
  getCachedParameterInfos()->insert(type, info);
  return getCachedParameterInfos()->value(type);
}

//-------------------------------------------------------------------------------------------------

void PythonQtSlotInfo::deleteOverloadsAndThis()
{
  PythonQtSlotInfo* cur = this;
  while(cur->nextInfo()) {
    PythonQtSlotInfo* next = cur->nextInfo();
    delete cur;
    cur = next;
  }
}


QString PythonQtSlotInfo::fullSignature(bool skipReturnValue, int optionalArgsIndex) const
{ 
  int firstArgOffset = isInstanceDecorator()?2:1;
  QString result;
  QByteArray sig = slotName();
  QList<QByteArray> names = _meta.parameterNames();

  bool isStatic = false;
  bool isConstructor = false;
  bool isDestructor = false;

  if (_type == ClassDecorator) {
    if (sig.startsWith("new_")) {
      sig = sig.mid(4);
      isConstructor = true;
    }
    else if (sig.startsWith("py_q_")) {
      sig = sig.mid(5);
    }
    else if (sig.startsWith("delete_")) {
      sig = sig.mid(7);
      isDestructor = true;
    } else if(sig.startsWith("static_")) {
      isStatic = true;
      sig = sig.mid(7);
      int idx = sig.indexOf("_");
      if (idx>=0) {
        sig = sig.mid(idx+1);
      }
    }
  }

  result += sig;
  result += "(";

  for (int i = firstArgOffset; i<_parameters.count(); i++) {
    if ((optionalArgsIndex + firstArgOffset) == i) {
      result += " [";
    }
    if (i!=firstArgOffset) {
      result += ", ";
    }
    //if (_parameters.at(i).isConst) {
    //  result += "const ";
    //}
    if (_parameters.at(i).name == "bool" && _parameters.at(i).pointerCount == 1) {
      result += "PythonQt.BoolResult";
    } else {
      result += _parameters.at(i).name;
    }
    //if (_parameters.at(i).pointerCount) {
    //  QByteArray stars;
    //  stars.fill('*', _parameters.at(i).pointerCount);
    //  result += stars;
    //}
    if (!names.at(i-1).isEmpty()) {
      result += " ";
      result += names.at(i-1);
    }
  }
  if (optionalArgsIndex != -1) {
    result += "]";
  }
  result += ")";

  if (isStatic) {
    result = QString("static ") + result;
  } 
  if (isConstructor) {
//    result = QString("constructor ") + result;
  } 
  if (isDestructor) {
    result = QString("~") + result;
  } 

  if (!skipReturnValue) {
    if (!_parameters.at(0).name.isEmpty()) {
      result += " -> ";
      result += _parameters.at(0).name;
    }
  }
  return result;
}


QByteArray PythonQtSlotInfo::slotName(bool removeDecorators) const
{
  QByteArray name = PythonQtUtils::methodName(_meta);
  if (removeDecorators) {
    if (name.startsWith("py_q_")) {
      name = name.mid(5);
    } else 
    if (name.startsWith("static_")) {
      name = name.mid(7);
      int idx = name.indexOf("_");
      if (idx>=0) {
        name = name.mid(idx+1);
      }
    }
  }
  return name;
}

QByteArray PythonQtSlotInfo::signature() const
{
  return PythonQtUtils::signature(_meta);
}

QStringList PythonQtSlotInfo::overloads(bool skipReturnValue) const
{
  const PythonQtSlotInfo* info = this;
  QList<const PythonQtSlotInfo*> list;
  do {
    list << info;
    info = info->nextInfo();
  } while (info);

  QList<const PythonQtSlotInfo*> all = list;

  QStringList results;
  while (!list.isEmpty()) {
    const PythonQtSlotInfo* current = list.takeFirst();
    int minSameArgs = 1000;
    QList<PythonQtMethodInfo::ParameterInfo> currentArguments = current->arguments();
    int maxArgs = currentArguments.size();
    const PythonQtSlotInfo* maxArgSlot = current;
    QList<const PythonQtSlotInfo*> slotsWithSameArgs;
    slotsWithSameArgs << current;
    QMutableListIterator<const PythonQtSlotInfo*> it(all);
    while (it.hasNext()) {
      const PythonQtSlotInfo* other = it.next();
      // same slot...
      if (other == current) {
        continue;
      }
      // different return types...
      if (other->parameters().at(0).name != current->parameters().at(0).name) {
        continue;
      }
      QList<PythonQtMethodInfo::ParameterInfo> otherArguments = other->arguments();
      int paramCount = qMin(currentArguments.size(), otherArguments.size());
      int sameArgs = 0;
      for (int i = 0; i<paramCount; i++) {
        if (currentArguments.at(i).name == otherArguments.at(i).name) {
          sameArgs++;
        } else {
          break;
        }
      }
      if (sameArgs > 0 && sameArgs == paramCount) {
        slotsWithSameArgs << other;
        minSameArgs = qMin(sameArgs, minSameArgs);
        if (otherArguments.size() > maxArgs) {
          maxArgs = otherArguments.size();
          maxArgSlot = other;
          current = other;
          currentArguments = otherArguments;
        }
      }
    }
    if (slotsWithSameArgs.size() > 1) {
      results << maxArgSlot->fullSignature(skipReturnValue, minSameArgs);
      foreach(const PythonQtSlotInfo* o, slotsWithSameArgs) {
        list.removeOne(o);
      }
    } else {
      results << current->fullSignature(skipReturnValue);
    }
  }
  return results;
}

QList<PythonQtMethodInfo::ParameterInfo> PythonQtSlotInfo::arguments() const
{
  QList<PythonQtMethodInfo::ParameterInfo> result;
  for (int i = isInstanceDecorator()?2:1; i<_parameters.size(); i++) {
    result << _parameters[i];
  }
  return result;
}

QByteArray PythonQtSlotInfo::getImplementingClassName() const
{
  if (isInstanceDecorator()) {
    return _parameters.at(1).name;
  } else if (isClassDecorator()) {
    QByteArray name = PythonQtUtils::methodName(_meta);
    if (name.startsWith("static_")) {
      name = name.mid(7);
      int idx = name.indexOf("_");
      name = name.mid(0, idx);
      return name;
    } else {
      return name;
    }
  } else {
    return _meta.enclosingMetaObject()->className();
  }
}

QHash<QByteArray, int>* PythonQtMethodInfo::getParameterTypeDict()
{
  static QHash<QByteArray, int>* parameterTypeDict = NULL;
  if (parameterTypeDict == NULL) {
    parameterTypeDict = new QHash<QByteArray, int>();
  }
  return parameterTypeDict;
}

QHash<QByteArray, QByteArray>* PythonQtMethodInfo::getParameterNameAliases()
{
  static QHash<QByteArray, QByteArray>* parameterNameAliases = NULL;
  if (parameterNameAliases == NULL) {
    parameterNameAliases = new QHash<QByteArray, QByteArray>();
  }
  return parameterNameAliases;
}

QHash<QByteArray, PythonQtMethodInfo*>* PythonQtMethodInfo::getCachedSignatures()
{
  static QHash<QByteArray, PythonQtMethodInfo*>* cachedSignatures = NULL;
  if (cachedSignatures == NULL) {
    cachedSignatures = new QHash<QByteArray, PythonQtMethodInfo*>();
  }
  return cachedSignatures;
}

QHash<int, PythonQtMethodInfo::ParameterInfo>* PythonQtMethodInfo::getCachedParameterInfos()
{
  static QHash<int, PythonQtMethodInfo::ParameterInfo>* cachedParameterInfos = NULL;
  if (cachedParameterInfos == NULL) {
    cachedParameterInfos = new QHash<int, PythonQtMethodInfo::ParameterInfo>();
  }
  return cachedParameterInfos;
}
