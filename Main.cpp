#include "DocumentLatex.h"
#include "F2LLatex.h"
#include "Point2D.h"
#include "FeaturePoint2D.h"
#include "Figure2DF2L.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
 

ofstream oOutputFile;

int main(int argc, const char* argv[])
{
  F2LLatex oDocLaTex;
  string sDoc;
  sDoc += oDocLaTex.DocumentClass();
  sDoc += oDocLaTex.Packages();
  sDoc += oDocLaTex.DefineColors();
  sDoc += oDocLaTex.Title();
  sDoc += oDocLaTex.BeginDoc();

  Figure2DF2L oFigure;
  oDocLaTex.setPoints(oFigure.getPoints(), oFigure.getSizePoints());
  oDocLaTex.setEdges(oFigure.getEdges(), oFigure.getSizeEdges());
  oDocLaTex.setPolygons(oFigure.getPolygons(), oFigure.getSizePolygons());
  
  sDoc += oDocLaTex.BeginTikz();
  sDoc += oDocLaTex.CoordinatePoints();
  //sDoc += oDocLaTex.DrawEdges();
  sDoc += oDocLaTex.DrawPolygons();
  sDoc += oDocLaTex.EndTikz();
  sDoc += oDocLaTex.EndDoc();
  remove("F2L.tex");
  oOutputFile.open("F2L.tex", ios::out | ios::app);
  oOutputFile << sDoc << endl;
  cout << sDoc << endl;
  oOutputFile.close();
  return 0;
}

