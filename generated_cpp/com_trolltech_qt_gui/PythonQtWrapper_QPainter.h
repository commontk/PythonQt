#ifndef PYTHONQTWRAPPER_QPAINTER_H
#define PYTHONQTWRAPPER_QPAINTER_H

#include <qpainter.h>
#include <QObject>

#include <PythonQt.h>

#include <QPainterPath>
#include <QPixmap>
#include <QVariant>
#include <QWidget>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qimage.h>
#include <qline.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>

class PythonQtWrapper_QPainter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CompositionMode RenderHint )
enum CompositionMode{
  CompositionMode_SourceOver = QPainter::CompositionMode_SourceOver,   CompositionMode_DestinationOver = QPainter::CompositionMode_DestinationOver,   CompositionMode_Clear = QPainter::CompositionMode_Clear,   CompositionMode_Source = QPainter::CompositionMode_Source,   CompositionMode_Destination = QPainter::CompositionMode_Destination,   CompositionMode_SourceIn = QPainter::CompositionMode_SourceIn,   CompositionMode_DestinationIn = QPainter::CompositionMode_DestinationIn,   CompositionMode_SourceOut = QPainter::CompositionMode_SourceOut,   CompositionMode_DestinationOut = QPainter::CompositionMode_DestinationOut,   CompositionMode_SourceAtop = QPainter::CompositionMode_SourceAtop,   CompositionMode_DestinationAtop = QPainter::CompositionMode_DestinationAtop,   CompositionMode_Xor = QPainter::CompositionMode_Xor,   CompositionMode_Plus = QPainter::CompositionMode_Plus,   CompositionMode_Multiply = QPainter::CompositionMode_Multiply,   CompositionMode_Screen = QPainter::CompositionMode_Screen,   CompositionMode_Overlay = QPainter::CompositionMode_Overlay,   CompositionMode_Darken = QPainter::CompositionMode_Darken,   CompositionMode_Lighten = QPainter::CompositionMode_Lighten,   CompositionMode_ColorDodge = QPainter::CompositionMode_ColorDodge,   CompositionMode_ColorBurn = QPainter::CompositionMode_ColorBurn,   CompositionMode_HardLight = QPainter::CompositionMode_HardLight,   CompositionMode_SoftLight = QPainter::CompositionMode_SoftLight,   CompositionMode_Difference = QPainter::CompositionMode_Difference,   CompositionMode_Exclusion = QPainter::CompositionMode_Exclusion};
enum RenderHint{
  Antialiasing = QPainter::Antialiasing,   TextAntialiasing = QPainter::TextAntialiasing,   SmoothPixmapTransform = QPainter::SmoothPixmapTransform,   HighQualityAntialiasing = QPainter::HighQualityAntialiasing,   NonCosmeticDefaultPen = QPainter::NonCosmeticDefaultPen};
public slots:
QPainter* new_QPainter();
void delete_QPainter(QPainter* obj) { delete obj; } 
   void setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction);
   void drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles);
   void drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti);
   void drawPoint(QPainter* theWrappedObject, const QPoint&  p);
   QTransform  combinedTransform(QPainter* theWrappedObject) const;
   void drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QRect  window(QPainter* theWrappedObject) const;
   void drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture);
   void setBackground(QPainter* theWrappedObject, const QBrush&  bg);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br = 0);
   QPainter::CompositionMode  compositionMode(QPainter* theWrappedObject) const;
   void drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs);
   const QBrush&  background(QPainter* theWrappedObject) const;
   void drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset = QPointF());
   void setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op = Qt::ReplaceClip);
   void drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround = 25, int  yround = 25);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o = QTextOption());
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2);
   void drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon);
   QPoint  brushOrigin(QPainter* theWrappedObject) const;
   const QMatrix&  worldMatrix(QPainter* theWrappedObject) const;
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm);
   void setBrush(QPainter* theWrappedObject, Qt::BrushStyle  style);
   void drawPoint(QPainter* theWrappedObject, int  x, int  y);
   void drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void initFrom(QPainter* theWrappedObject, const QWidget*  widget);
   void drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void resetMatrix(QPainter* theWrappedObject);
   void drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s);
   void setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on = true);
   void setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles);
   void drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture);
   void drawPoints(QPainter* theWrappedObject, const QPolygon&  points);
   QRect  boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text);
   void setViewport(QPainter* theWrappedObject, const QRect&  viewport);
   void drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3 = QPoint());
   void rotate(QPainter* theWrappedObject, qreal  a);
   void strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen);
   const QMatrix&  deviceMatrix(QPainter* theWrappedObject) const;
   void setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled);
   void drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   qreal  opacity(QPainter* theWrappedObject) const;
   void drawEllipse(QPainter* theWrappedObject, const QRectF&  r);
   void setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1);
   const QPen&  pen(QPainter* theWrappedObject) const;
   void drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti);
   void drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br = 0);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text);
   void setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   const QTransform&  transform(QPainter* theWrappedObject) const;
   void setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void translate(QPainter* theWrappedObject, qreal  dx, qreal  dy);
   void drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void setBrushOrigin(QPainter* theWrappedObject, int  x, int  y);
   void eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   bool  worldMatrixEnabled(QPainter* theWrappedObject) const;
   void drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   void setPen(QPainter* theWrappedObject, const QPen&  pen);
   void setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op = Qt::ReplaceClip);
   void drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline);
   void resetTransform(QPainter* theWrappedObject);
   QPaintDevice*  device(QPainter* theWrappedObject) const;
   void drawEllipse(QPainter* theWrappedObject, const QRect&  r);
   void drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h);
   void setFont(QPainter* theWrappedObject, const QFont&  f);
   void drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image);
   void drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry);
   void drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect);
   void restore(QPainter* theWrappedObject);
   void drawPoint(QPainter* theWrappedObject, const QPointF&  pt);
   void drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx = 0, int  sy = 0);
   void setWindow(QPainter* theWrappedObject, const QRect&  window);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5);
   void setViewTransformEnabled(QPainter* theWrappedObject, bool  enable);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o = QTextOption());
   const QTransform&  deviceTransform(QPainter* theWrappedObject) const;
   QPainter::RenderHints  renderHints(QPainter* theWrappedObject) const;
   void setOpacity(QPainter* theWrappedObject, qreal  opacity);
   bool  viewTransformEnabled(QPainter* theWrappedObject) const;
   const QFont&  font(QPainter* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPainter* theWrappedObject) const;
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm);
   void drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset = QPoint());
   void drawPoints(QPainter* theWrappedObject, const QPolygonF&  points);
   void translate(QPainter* theWrappedObject, const QPointF&  offset);
   void drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   bool  end(QPainter* theWrappedObject);
   QPaintDevice*  static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset = 0);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon);
   void shear(QPainter* theWrappedObject, qreal  sh, qreal  sv);
   void setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine = false);
   void setPen(QPainter* theWrappedObject, Qt::PenStyle  style);
   void drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image);
   void drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr);
   void drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines);
   void drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawRect(QPainter* theWrappedObject, const QRectF&  rect);
   void drawRect(QPainter* theWrappedObject, const QRect&  rect);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect);
   bool  begin(QPainter* theWrappedObject, QPaintDevice*  arg__1);
   void translate(QPainter* theWrappedObject, const QPoint&  offset);
   void drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines);
   void setClipping(QPainter* theWrappedObject, bool  enable);
   QMatrix  combinedMatrix(QPainter* theWrappedObject) const;
   bool  hasClipping(QPainter* theWrappedObject) const;
   void setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode);
   void drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround = 25, int  yround = 25);
   void drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti);
   void drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s);
   QRect  boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text);
   QRect  viewport(QPainter* theWrappedObject) const;
   void setBrush(QPainter* theWrappedObject, const QBrush&  brush);
   void drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5 = 25, int  arg__6 = 25);
   QPainterPath  clipPath(QPainter* theWrappedObject) const;
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm);
   QRegion  clipRegion(QPainter* theWrappedObject) const;
   void setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on = true);
   QPaintEngine*  paintEngine(QPainter* theWrappedObject) const;
   void scale(QPainter* theWrappedObject, qreal  sx, qreal  sy);
   void drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br = 0);
   void static_QPainter_restoreRedirected(const QPaintDevice*  device);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx = 0, int  sy = 0, int  sw = -1, int  sh = -1, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   bool  testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const;
   void drawLine(QPainter* theWrappedObject, const QLine&  line);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm);
   const QBrush&  brush(QPainter* theWrappedObject) const;
   void drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawPath(QPainter* theWrappedObject, const QPainterPath&  path);
   void fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2);
   void drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture);
   void setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   const QTransform&  worldTransform(QPainter* theWrappedObject) const;
   void setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1);
   void setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image);
   Qt::LayoutDirection  layoutDirection(QPainter* theWrappedObject) const;
   bool  isActive(QPainter* theWrappedObject) const;
   void setPen(QPainter* theWrappedObject, const QColor&  color);
   void save(QPainter* theWrappedObject);
   void drawLine(QPainter* theWrappedObject, const QLineF&  line);
   void setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode);
   void eraseRect(QPainter* theWrappedObject, const QRect&  arg__1);
};

#endif // PYTHONQTWRAPPER_QPAINTER_H
