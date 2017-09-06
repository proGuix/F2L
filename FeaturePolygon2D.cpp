#include "FeaturePolygon2D.h"

FeaturePolygon2D::FeaturePolygon2D()
  : Feature()
{
  m_nLineWidth = 2;
}

double FeaturePolygon2D::getLineWidth() const
{
  return m_nLineWidth;
}

void FeaturePolygon2D::setLineWidth(double nLineWidth)
{
  m_nLineWidth = nLineWidth;
}
