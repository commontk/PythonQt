#include "PythonQtWrapper_QPalette.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpalette.h>

QPalette* PythonQtWrapper_QPalette::new_QPalette()
{ 
return new QPalette(); }

QPalette* PythonQtWrapper_QPalette::new_QPalette(Qt::GlobalColor  button)
{ 
return new QPalette(button); }

QPalette* PythonQtWrapper_QPalette::new_QPalette(const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window)
{ 
return new QPalette(windowText, button, light, dark, mid, text, bright_text, base, window); }

QPalette* PythonQtWrapper_QPalette::new_QPalette(const QColor&  button)
{ 
return new QPalette(button); }

QPalette* PythonQtWrapper_QPalette::new_QPalette(const QColor&  button, const QColor&  window)
{ 
return new QPalette(button, window); }

QPalette* PythonQtWrapper_QPalette::new_QPalette(const QPalette&  palette)
{ 
return new QPalette(palette); }

uint  PythonQtWrapper_QPalette::resolve(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).resolve();
}

const QBrush&  PythonQtWrapper_QPalette::brightText(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).brightText();
}

const QBrush&  PythonQtWrapper_QPalette::alternateBase(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).alternateBase();
}

const QBrush&  PythonQtWrapper_QPalette::window(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).window();
}

qint64  PythonQtWrapper_QPalette::cacheKey(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).cacheKey();
}

const QBrush&  PythonQtWrapper_QPalette::linkVisited(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).linkVisited();
}

const QBrush&  PythonQtWrapper_QPalette::link(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).link();
}

const QBrush&  PythonQtWrapper_QPalette::windowText(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).windowText();
}

const QBrush&  PythonQtWrapper_QPalette::buttonText(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).buttonText();
}

bool  PythonQtWrapper_QPalette::isBrushSet(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const
{
return  (*theWrappedObject).isBrushSet(cg, cr);
}

void PythonQtWrapper_QPalette::setColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cr, const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window)
{
 (*theWrappedObject).setColorGroup(cr, windowText, button, light, dark, mid, text, bright_text, base, window);
}

bool  PythonQtWrapper_QPalette::isEqual(QPalette* theWrappedObject, QPalette::ColorGroup  cr1, QPalette::ColorGroup  cr2) const
{
return  (*theWrappedObject).isEqual(cr1, cr2);
}

const QBrush&  PythonQtWrapper_QPalette::dark(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).dark();
}

void PythonQtWrapper_QPalette::setColor(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QColor&  color)
{
 (*theWrappedObject).setColor(cr, color);
}

const QBrush&  PythonQtWrapper_QPalette::toolTipBase(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).toolTipBase();
}

const QBrush&  PythonQtWrapper_QPalette::button(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).button();
}

void PythonQtWrapper_QPalette::setBrush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QBrush&  brush)
{
 (*theWrappedObject).setBrush(cg, cr, brush);
}

const QBrush&  PythonQtWrapper_QPalette::mid(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).mid();
}

const QBrush&  PythonQtWrapper_QPalette::toolTipText(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).toolTipText();
}

const QBrush&  PythonQtWrapper_QPalette::light(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).light();
}

void PythonQtWrapper_QPalette::writeTo(QPalette* theWrappedObject, QDataStream&  ds)
{
ds <<  (*theWrappedObject);
}

const QColor&  PythonQtWrapper_QPalette::color(QPalette* theWrappedObject, QPalette::ColorRole  cr) const
{
return  (*theWrappedObject).color(cr);
}

void PythonQtWrapper_QPalette::readFrom(QPalette* theWrappedObject, QDataStream&  ds)
{
ds >>  (*theWrappedObject);
}

void PythonQtWrapper_QPalette::resolve(QPalette* theWrappedObject, uint  mask)
{
 (*theWrappedObject).resolve(mask);
}

const QColor&  PythonQtWrapper_QPalette::color(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const
{
return  (*theWrappedObject).color(cg, cr);
}

const QBrush&  PythonQtWrapper_QPalette::base(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).base();
}

QPalette  PythonQtWrapper_QPalette::resolve(QPalette* theWrappedObject, const QPalette&  arg__1) const
{
return  (*theWrappedObject).resolve(arg__1);
}

const QBrush&  PythonQtWrapper_QPalette::brush(QPalette* theWrappedObject, QPalette::ColorRole  cr) const
{
return  (*theWrappedObject).brush(cr);
}

QPalette::ColorGroup  PythonQtWrapper_QPalette::currentColorGroup(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).currentColorGroup();
}

const QBrush&  PythonQtWrapper_QPalette::brush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const
{
return  (*theWrappedObject).brush(cg, cr);
}

bool  PythonQtWrapper_QPalette::operator_equal(QPalette* theWrappedObject, const QPalette&  p) const
{
return  (*theWrappedObject)== p;
}

void PythonQtWrapper_QPalette::setColor(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QColor&  color)
{
 (*theWrappedObject).setColor(cg, cr, color);
}

void PythonQtWrapper_QPalette::setCurrentColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cg)
{
 (*theWrappedObject).setCurrentColorGroup(cg);
}

void PythonQtWrapper_QPalette::setBrush(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QBrush&  brush)
{
 (*theWrappedObject).setBrush(cr, brush);
}

const QBrush&  PythonQtWrapper_QPalette::highlight(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).highlight();
}

const QBrush&  PythonQtWrapper_QPalette::highlightedText(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).highlightedText();
}

const QBrush&  PythonQtWrapper_QPalette::shadow(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).shadow();
}

const QBrush&  PythonQtWrapper_QPalette::text(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).text();
}

bool  PythonQtWrapper_QPalette::isCopyOf(QPalette* theWrappedObject, const QPalette&  p) const
{
return  (*theWrappedObject).isCopyOf(p);
}

const QBrush&  PythonQtWrapper_QPalette::midlight(QPalette* theWrappedObject) const
{
return  (*theWrappedObject).midlight();
}

