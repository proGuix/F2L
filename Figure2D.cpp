#include "Figure2D.h"

Figure2D::Figure2D()
{
  m_nSizePoints = 0;
  m_nSizeEdges = 0;
  m_nSizePolygons = 0;
  m_oPoints = NULL;
  m_oEdges = NULL;
  m_oPolygons = NULL;
}

Figure2D::~Figure2D()
{
}

size_t Figure2D::getSizePoints()
{
  return m_nSizePoints;
}

size_t Figure2D::getSizeEdges()
{
  return m_nSizeEdges;
}

size_t Figure2D::getSizePolygons()
{
  return m_nSizePolygons;
}

Point2D ** Figure2D::getPoints()
{
  return m_oPoints;
}

Edge2D ** Figure2D::getEdges()
{
  return m_oEdges;
}

Polygon2D ** Figure2D::getPolygons()
{
  return m_oPolygons;
}

void Figure2D::setPoints(Point2D ** oPoints, size_t nSize)
{
  m_nSizePoints = nSize;
  m_oPoints = oPoints;
}

void Figure2D::setEdges(Edge2D ** oEdges, size_t nSize)
{
  m_nSizeEdges = nSize;
  m_oEdges = oEdges;

}

void Figure2D::setPolygons(Polygon2D ** oPolygons, size_t nSize)
{
  m_nSizePolygons = nSize;
  m_oPolygons = oPolygons;
}
