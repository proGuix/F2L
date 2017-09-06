#ifndef POLYGON2D_H
#define POLYGON2D_H

#include "Point2D.h"
#include "Edge2D.h"
#include "Featurable.h"
#include "FeaturePolygon2D.h"
#include "CountableObject.h"

class Polygon2D  : public CountableObject, public Featurable
{
 public:
  Polygon2D();
  ~Polygon2D();
  size_t getSizePoints();
  size_t getSizeEdges();
  Point2D ** getPoints();
  Edge2D ** getEdges();
  FeaturePolygon2D * getFeature() const;
  void setPoints(Point2D ** oPoints, size_t nSize);
  void setEdges(Edge2D ** oEdges, size_t nSize);
  void addPoint(Point2D * oPoint);
  void addEdge(Edge2D * oEdge);
 protected:
  size_t m_nSizePoints;
  size_t m_nSizeEdges;
  Point2D ** m_oPoints;
  Edge2D ** m_oEdges;
  FeaturePolygon2D * m_oFeature;
};

#endif
