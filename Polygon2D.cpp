#include "Polygon2D.h"

Polygon2D::Polygon2D()
{
  m_nSizePoints = 0;
  m_nSizeEdges = 0;
  m_oPoints = NULL;
  m_oEdges = NULL;
  m_oFeature = new FeaturePolygon2D();
}

Polygon2D::~Polygon2D()
{
  if(m_oFeature != NULL)
    {
      delete m_oFeature;
      m_oFeature = NULL;
    }
}

size_t Polygon2D::getSizePoints()
{
  return m_nSizePoints;
}

size_t Polygon2D::getSizeEdges()
{
  return m_nSizeEdges;
}

Point2D ** Polygon2D::getPoints()
{
  return m_oPoints;
}

Edge2D ** Polygon2D::getEdges()
{
  return m_oEdges;
}

FeaturePolygon2D * Polygon2D::getFeature() const
{
  return m_oFeature;
}

void Polygon2D::setPoints(Point2D ** oPoints, size_t nSize)
{
  m_nSizePoints = nSize;
  m_oPoints = oPoints;
}

void Polygon2D::setEdges(Edge2D ** oEdges, size_t nSize)
{
  m_nSizeEdges = nSize;
  m_oEdges = oEdges;
}

void Polygon2D::addPoint(Point2D * oPoint)
{
  m_nSizePoints++; 
  Point2D ** oPoints = new Point2D*[m_nSizePoints];
  if(m_nSizePoints > 1)
    {
      for(size_t i = 0; i < m_nSizePoints-1; i++)
	{
	  oPoints[i] = m_oPoints[i];
	}
    }
  oPoints[m_nSizePoints-1] = oPoint;
  delete [] m_oPoints;
  m_oPoints = oPoints;
}

void Polygon2D::addEdge(Edge2D * oEdge)
{
  m_nSizeEdges++; 
  Edge2D ** oEdges = new Edge2D*[m_nSizeEdges];
  if(m_nSizeEdges > 1)
    {
      for(size_t i = 0; i < m_nSizeEdges-1; i++)
	{
	  oEdges[i] = m_oEdges[i];
	}
    }
  oEdges[m_nSizeEdges-1] = oEdge;
  delete [] m_oEdges;
  m_oEdges = oEdges;
  //attention il peut y avoir des doublons de points dans le cas où un point relie 2 arêtes
  addPoint(oEdge->getPointA());
  addPoint(oEdge->getPointB());
}
