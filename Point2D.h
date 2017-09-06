#ifndef POINT2D_H
#define POINT2D_H

#include "CountableObject.h"
#include "FeaturePoint2D.h"
#include "Coordinates.h"
#include "Featurable.h"

class Point2D : public CountableObject, public Featurable
{
 public:
  Point2D();
  Point2D(double nCoordX, double nCoordY);
  Point2D(const CoordCart & oCoordCart);
  ~Point2D();
  CoordCart getCoordCart() const;
  double getCoordX() const;
  double getCoordY() const;
  FeaturePoint2D * getFeature() const;
  void setCoordCart(const CoordCart& oCoordCart);
  void setCoordX(double nCoordX);
  void setCoordY(double nCoordY);
 protected:
  CoordCart m_oCoordCart;
  FeaturePoint2D * m_oFeature;
};

#endif
