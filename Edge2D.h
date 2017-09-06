#ifndef EDGE2D_H
#define EDGE2D_H

#include "Point2D.h"
#include "Featurable.h"
#include "FeatureEdge2D.h"
#include "CountableObject.h"
#include <cstdio>

class Edge2D : public CountableObject, public Featurable
{
 public:
  Edge2D();
  ~Edge2D();
  Point2D * getPointA();
  Point2D * getPointB();
  Point2D ** getPoints();
  FeatureEdge2D * getFeature() const;
  void setPointA(Point2D * oPointA);
  void setPointB(Point2D * oPointB);
  void setPoints(Point2D * oPoints[2]);
 protected:
  Point2D * m_oPoints[2];
  FeatureEdge2D * m_oFeature;
};

#endif
