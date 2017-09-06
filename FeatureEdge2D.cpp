#include "FeatureEdge2D.h"

FeatureEdge2D::FeatureEdge2D()
  : Feature()
{
  m_nLineWidth = 2;
}

double FeatureEdge2D::getLineWidth() const
{
  return m_nLineWidth;
}

void FeatureEdge2D::setLineWidth(double nLineWidth)
{
  m_nLineWidth = nLineWidth;
}
