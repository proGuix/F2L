#include "Edge2D.h"

Edge2D::Edge2D()
{ 
  m_oPoints[0] = NULL;
  m_oPoints[1] = NULL;
  m_oFeature = new FeatureEdge2D();
}

Edge2D::~Edge2D()
{
  if(m_oFeature != NULL)
    {
      delete m_oFeature;
      m_oFeature = NULL;
    }
}

Point2D * Edge2D::getPointA()
{
  return m_oPoints[0];
}

Point2D * Edge2D::getPointB()
{
  return m_oPoints[1];
}

Point2D ** Edge2D::getPoints()
{
  return m_oPoints;
}

FeatureEdge2D * Edge2D::getFeature() const
{
  return m_oFeature;
}

void Edge2D::setPointA(Point2D * oPointA)
{
  m_oPoints[0] = oPointA;
}

void Edge2D::setPointB(Point2D * oPointB)
{
  m_oPoints[1] = oPointB;
}

void Edge2D::setPoints(Point2D * oPoints[2])
{
  m_oPoints[0] = oPoints[0];
  m_oPoints[1] = oPoints[1];
}
