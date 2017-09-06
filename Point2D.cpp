#include "Point2D.h"

Point2D::Point2D()
{
  m_oCoordCart = {0, 0};
  m_oFeature = new FeaturePoint2D();
}

Point2D::Point2D(double nCoordX, double nCoordY)
{
  m_oCoordCart = {nCoordX, nCoordY};
  m_oFeature = new FeaturePoint2D();
}

Point2D::~Point2D()
{
  if(m_oFeature != NULL)
    {
      delete m_oFeature;
      m_oFeature = NULL;
    }
}

Point2D::Point2D(const CoordCart & oCoordCart)
{
  m_oCoordCart = oCoordCart;
}

CoordCart Point2D::getCoordCart() const
{
  return m_oCoordCart;
}

double Point2D::getCoordX() const
{
  return m_oCoordCart.m_nCoordX;
}

double Point2D::getCoordY() const
{
  return m_oCoordCart.m_nCoordY;
}

FeaturePoint2D * Point2D::getFeature() const
{
  return m_oFeature;
}

void Point2D::setCoordCart(const CoordCart& oCoordCart)
{
  m_oCoordCart = oCoordCart;
}

void Point2D::setCoordX(double nCoordX)
{
  m_oCoordCart.m_nCoordX = nCoordX;
}

void Point2D::setCoordY(double nCoordY)
{
  m_oCoordCart.m_nCoordY = nCoordY;
}
