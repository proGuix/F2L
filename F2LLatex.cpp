#include "F2LLatex.h"
#include <cstdio>
#include <cstring>
#include <iostream>

F2LLatex::F2LLatex()
  : DocumentLatex()
{
  m_sBeginTikzCr = "line join=round";
  //init colors
  Color oColor;
  m_oColors.push_back(oColor);
  oColor.setName("whiteDown");
  oColor.nR = 255;
  oColor.nG = 255;
  oColor.nB = 255;
  m_oColors.push_back(oColor);
  oColor.setName("yellowUp");
  oColor.nR = 238;
  oColor.nG = 255;
  oColor.nB = 1;
  m_oColors.push_back(oColor);
  oColor.setName("blueFront");
  oColor.nR = 0;
  oColor.nG = 132;
  oColor.nB = 227;
  m_oColors.push_back(oColor);
  oColor.setName("greenBack");
  oColor.nR = 1;
  oColor.nG = 221;
  oColor.nB = 37;
  m_oColors.push_back(oColor);
  oColor.setName("redRight");
  oColor.nR = 255;
  oColor.nG = 34;
  oColor.nB = 8;
  m_oColors.push_back(oColor);
  oColor.setName("orangeLeft");
  oColor.nR = 255;
  oColor.nG = 157;
  oColor.nB = 2;
  m_oColors.push_back(oColor);
  //init scales and arrays
  m_nScale = 1;
  m_nSizePoints = 0;
  m_oPoints = NULL;
  m_nSizeEdges = 0;
  m_oEdges = NULL;
  m_nSizePolygons = 0;
  m_oPolygons = NULL;
}

string F2LLatex::DocumentClass() const
{
  return "\\documentclass{article} \n";
}

string F2LLatex::Packages() const
{
  string sChaine;
  sChaine += "\\usepackage{tikz} \n";
  sChaine += "\\usepackage{xcolor} \n";

  return sChaine;
}
string F2LLatex::DefineColors() const
{
  string sChaine;
  sChaine += "%color faces default \n";
  size_t nSizeColors = m_oColors.size();
  for(size_t i = 0; i < nSizeColors; i++)
    {
      char cR[LGMAX_COLOR_R] = {0};
      sprintf(cR, "%d", m_oColors[i].nR);
      char cG[LGMAX_COLOR_G] = {0};
      sprintf(cG, "%d", m_oColors[i].nG);
      char cB[LGMAX_COLOR_B] = {0};
      sprintf(cB, "%d", m_oColors[i].nB);
      sChaine += "\\definecolor{" + string(m_oColors[i].cName) + "}{RGB}{" + string(cR) + "," + string(cG) + "," + string(cB) + "} \n";
    }
  
  return sChaine;
}

string F2LLatex::Title() const
{
  return "\\title{F2L} \n";
}

string F2LLatex::BeginTikz() const
{
  string sChaine;
  sChaine += "\\begin{figure} \n";
  sChaine += "\\centering \n";
  sChaine += "\\begin{tikzpicture}[" + m_sBeginTikzCr + "] \n";

  return sChaine;
}

string F2LLatex::EndTikz() const
{
  string sChaine;
  sChaine += "\\end{tikzpicture} \n";
  sChaine += "\\end{figure} \n";

  return sChaine;
}

string F2LLatex::CoordinatePoints() const
{
  string sChaine;
  sChaine += "%coordinate points \n";
  Point2D ** oPoints = m_oPoints;
  size_t nSize = m_nSizePoints;
  Point2D * oPoint;
  for(size_t i = 0; i < nSize; i++)
    {
      oPoint = (oPoints[i]);
      char cCoordX[LGMAX_COORD_CART + 1] = {0};
      char cCoordY[LGMAX_COORD_CART + 1] = {0};
      sprintf(cCoordX, "%f", m_nScale*oPoint->getCoordX());
      sprintf(cCoordY, "%f", -m_nScale*oPoint->getCoordY());
      sChaine += "\\coordinate (" + string(oPoint->getFeature()->getName()) + ") at (" + string(cCoordX) + "," + string(cCoordY) + "); \n";
    }
  return sChaine;
}

string F2LLatex::DrawEdges() const
{
  string sChaine;
  sChaine += "%draw edges \n";
  Edge2D ** oEdges = m_oEdges;
  size_t nSize = m_nSizeEdges;
  Edge2D * oEdge;
  FeatureEdge2D * oFeature;
  for(size_t i = 0; i < nSize; i++)
    {
      oEdge = oEdges[i];
      oFeature = oEdge->getFeature();
      sChaine += "\\draw[line width=";
      char cLineWidth[LGMAX_LINE_WIDTH + 1] = {0};
      sprintf(cLineWidth, "%f", oFeature->getLineWidth());
      sChaine += string(cLineWidth);
      sChaine += "pt,";
      sChaine += string(oFeature->getColor().cName);
      sChaine += "] (";
      sChaine += string(oEdge->getPointA()->getFeature()->getName());
      sChaine += ") -- (";
      sChaine += string(oEdge->getPointB()->getFeature()->getName());
      sChaine += "); \n";
    }
  return sChaine;
}

string F2LLatex::DrawPolygons() const
{
  string sChaine;
  sChaine += "%draw polygons \n";
  Polygon2D ** oPolygons = m_oPolygons;
  size_t nSizePolygons = m_nSizePolygons;
  Polygon2D * oPolygon;
  FeaturePolygon2D * oFeaturePolygon;
  for(size_t i = 0; i < nSizePolygons; i++)
    {
      oPolygon = oPolygons[i];
      oFeaturePolygon = oPolygon->getFeature();
      sChaine += "\\draw[line width=";
      char cLineWidth[LGMAX_LINE_WIDTH + 1] = {0};
      sprintf(cLineWidth, "%f", oFeaturePolygon->getLineWidth());
      sChaine += string(cLineWidth);
      sChaine += "pt,";
      sChaine += string(oFeaturePolygon->getColor().cName);
      sChaine += "] ";
      Edge2D ** oEdges = oPolygon->getEdges();
      size_t nSizeEdges = oPolygon->getSizeEdges();
      Edge2D * oEdge;
      for(size_t j = 0; j < nSizeEdges; j++)
	{
	  oEdge = oEdges[j];
	  sChaine += "(";
	  sChaine += string(oEdge->getPointA()->getFeature()->getName());
	  sChaine += ") -- ";
	  if(j == nSizeEdges-1)
	    {
	      sChaine += "cycle; \n"; 
	    }
	}
    }
  return sChaine;
}

void F2LLatex::setPoints(Point2D ** oPoints, size_t nSize)
{
  m_nSizePoints = nSize;
  m_oPoints = oPoints;
}

void F2LLatex::setEdges(Edge2D ** oEdges, size_t nSize)
{
  m_nSizeEdges = nSize;
  m_oEdges = oEdges;
}

void F2LLatex::setPolygons(Polygon2D ** oPolygons, size_t nSize)
{
  m_nSizePolygons = nSize;
  m_oPolygons = oPolygons;
}
