#ifndef FIGURE2DF2L_H
#define FIGURE2DF2L_H

#include "Figure2D.h"
#include "Coordinates.h"
#include <unordered_map>
#include <iostream>
#include <cstdarg>

using namespace std;

class Figure2DF2L : public Figure2D
{
 public:
  Figure2DF2L();
  ~Figure2DF2L();
  void InitPoints();
  void InitEdges();
  void InitPolygons();
  void addNamePoint(const char * cName);
  void addNameEdge(const char * cName);
  void addNamePolygon(const char * cName);	
  void addEdge(const char * cPt1, const char * cPt2);
  void addEdge(Edge2D * oEdge);
  void addPolygon(size_t nSizeEdge, const char * cEdge1, ...);
  void addPolygon(Polygon2D * oPolygon);
 protected:
  unordered_map<const char *,size_t> m_oIndexPts;
  unordered_map<const char *,size_t> m_oIndexEdgs;
  unordered_map<const char *,size_t> m_oIndexPols;
  size_t m_nSizeNamePoints;
  size_t m_nSizeNameEdges;
  size_t m_nSizeNamePolygons;
  char ** m_oNamePoints;
  char ** m_oNameEdges;
  char ** m_oNamePolygons;
};

#endif
