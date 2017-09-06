#ifndef FEATURE_EDGE2D_H
#define FEATURE_EDGE2D_H

#include "Feature.h"

#define LGMAX_LINE_WIDTH 10

class FeatureEdge2D : public Feature
{
 public:
  FeatureEdge2D();
  double getLineWidth() const;
  void setLineWidth(double nLineWidth);
 protected:
  double m_nLineWidth;
};

#endif
