#ifndef FIGURE2D_H
#define FIGURE2D_H

#include "Point2D.h"
#include "Edge2D.h"
#include "Polygon2D.h"
#include <cstdio>

#include "CountableObject.h"

class Figure2D : public CountableObject
{
 public:
  Figure2D();
  virtual ~Figure2D();
  Point2D ** getPoints();
  size_t getSizePoints();
  size_t getSizeEdges();
  size_t getSizePolygons();
  Edge2D ** getEdges();
  Polygon2D ** getPolygons();
  void setPoints(Point2D ** oPoints, size_t nSize);
  void setEdges(Edge2D ** oEdges, size_t nSize);
  void setPolygons(Polygon2D ** oPolygons, size_t nSize);
 protected:
  size_t m_nSizePoints;
  size_t m_nSizeEdges;
  size_t m_nSizePolygons;
  Point2D ** m_oPoints;
  Edge2D ** m_oEdges;
  Polygon2D ** m_oPolygons;
};

#endif
