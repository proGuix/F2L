#ifndef F2LLATEX_H
#define F2LLATEX_H

#include "DocumentLatex.h"
#include "Color.h"
#include <vector>
#include "Point2D.h"
#include "Edge2D.h"
#include "Polygon2D.h"
#include "Coordinates.h"

class F2LLatex : public DocumentLatex
{
 public:
  F2LLatex();
  string DocumentClass() const;
  string Packages() const;
  string DefineColors() const;
  string Title() const;
  string BeginTikz() const;
  string EndTikz() const;
  string CoordinatePoints() const;
  string DrawEdges() const;
  string DrawPolygons() const;

  void setPoints(Point2D ** oPoints, size_t nSize);
  void setEdges(Edge2D ** oEdges, size_t nSize);
  void setPolygons(Polygon2D ** oPolygons, size_t nSize);
 protected:
  string m_sBeginTikzCr;
  vector<Color> m_oColors;
  double m_nScale;
  size_t m_nSizePoints;
  size_t m_nSizeEdges;
  size_t m_nSizePolygons;
  Point2D ** m_oPoints;
  Edge2D ** m_oEdges;
  Polygon2D ** m_oPolygons;
};

#endif
