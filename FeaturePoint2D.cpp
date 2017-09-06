#include "FeaturePoint2D.h"

FeaturePoint2D::FeaturePoint2D()
  : Feature()
{
  m_nDiameter = 1;
}

size_t FeaturePoint2D::getDiameter() const
{
  return m_nDiameter;
}

void FeaturePoint2D::setDiameter(size_t nDiameter)
{
  m_nDiameter = nDiameter;
}
