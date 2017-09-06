#ifndef FEATURE_POINT2D_H
#define FEATURE_POINT2D_H

#include "Feature.h"

class FeaturePoint2D : public Feature
{
 public:
  FeaturePoint2D();
  size_t getDiameter() const;
  void setDiameter(size_t nDiameter);
 protected:
  size_t m_nDiameter;
};

#endif
