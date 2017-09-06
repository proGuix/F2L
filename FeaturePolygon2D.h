#ifndef FEATURE_POLYGON2D_H
#define FEATURE_POLYGON2D_H

#include "Feature.h"

#define LGMAX_LINE_WIDTH 10

class FeaturePolygon2D : public Feature
{
 public:
  FeaturePolygon2D();
  double getLineWidth() const;
  void setLineWidth(double nLineWidth);
 protected:
  double m_nLineWidth;
};

#endif
