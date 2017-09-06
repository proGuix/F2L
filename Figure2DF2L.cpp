#include "Figure2DF2L.h"

Figure2DF2L::Figure2DF2L()
  : Figure2D()
{
  m_nSizeNamePoints = 0;
  m_nSizeNameEdges = 0;
  m_nSizeNamePolygons = 0;
  m_oNamePoints = NULL;
  m_oNameEdges = NULL;
  m_oNamePolygons = NULL;  
  InitPoints();
  InitEdges();
  InitPolygons();
}

Figure2DF2L::~Figure2DF2L()
{
  if(m_oNamePoints != NULL)
    {
      for(size_t i = 0; i < m_nSizeNamePoints; i++)
	{
	  if(m_oNamePoints[i] != NULL)
	    {
	      delete m_oNamePoints[i];
	      m_oNamePoints[i] = NULL;
	    }
	}
      delete [] m_oNamePoints;
      m_oNamePoints = NULL;
    }
  if(m_oNameEdges != NULL)
    {
      for(size_t i = 0; i < m_nSizeNameEdges; i++)
	{
	  if(m_oNameEdges[i] != NULL)
	    {
	      delete m_oNameEdges[i];
	      m_oNameEdges[i] = NULL;
	    }
	}
      delete [] m_oNameEdges;
      m_oNameEdges = NULL;
    }
  if(m_oNamePolygons != NULL)
    {
      for(size_t i = 0; i < m_nSizeNamePolygons; i++)
	{
	  if(m_oNamePolygons[i] != NULL)
	    {
	      delete m_oNamePolygons[i];
	      m_oNamePolygons[i] = NULL;
	    }
	}
      delete [] m_oNamePolygons;
      m_oNamePolygons = NULL;
    }
  if(m_oPoints != NULL)
    {
      for(size_t i = 0; i < m_nSizePoints; i++)
	{
	  if(m_oPoints[i] != NULL)
	    {
	      delete m_oPoints[i];
	      m_oPoints[i] = NULL;
	    }
	}
      delete [] m_oPoints;
      m_oPoints = NULL;
    }
  if(m_oEdges != NULL)
    {
      for(size_t i = 0; i < m_nSizeEdges; i++)
	{
	  if(m_oEdges[i] != NULL)
	    {
	      delete m_oEdges[i];
	      m_oEdges[i] = NULL;
	    }
	}
      delete [] m_oEdges;
      m_oEdges = NULL;
    }
  if(m_oPolygons != NULL)
    {
      for(size_t i = 0; i < m_nSizePolygons; i++)
	{
	  if(m_oPolygons[i] != NULL)
	    {
	      delete m_oPolygons[i];
	      m_oPolygons[i] = NULL;
	    }
	}
      delete [] m_oPolygons;
      m_oPolygons = NULL;
    }
}

void Figure2DF2L::InitPoints()
{
  addNamePoint("LDB");
  addNamePoint("DBl");
  addNamePoint("DBr");
  addNamePoint("RDB");
  addNamePoint("LBd");
  addNamePoint("Bld");
  addNamePoint("Brd");
  addNamePoint("RBd");
  addNamePoint("LBu");
  addNamePoint("Blu");
  addNamePoint("Bru");
  addNamePoint("RBu");
  addNamePoint("LUB");
  addNamePoint("UBl");
  addNamePoint("UBr");
  addNamePoint("RUB");
  addNamePoint("LUb");
  addNamePoint("Ulb");
  addNamePoint("Urb");
  addNamePoint("RUb");
  addNamePoint("LUf");
  addNamePoint("Ulf");
  addNamePoint("Urf");
  addNamePoint("RUf");
  addNamePoint("LUF");
  addNamePoint("UFl");
  addNamePoint("UFr");
  addNamePoint("RUF");
  addNamePoint("LFu");
  addNamePoint("Flu");
  addNamePoint("Fru");
  addNamePoint("RFu");
  addNamePoint("LFd");
  addNamePoint("Fld");
  addNamePoint("Frd");
  addNamePoint("RFd");
  addNamePoint("LDF");
  addNamePoint("DFl");
  addNamePoint("DFr");
  addNamePoint("RDF");
  addNamePoint("LDb");
  addNamePoint("Ldb");
  addNamePoint("Lub");
  addNamePoint("LDf");
  addNamePoint("Ldf");
  addNamePoint("Luf");
  addNamePoint("Rub");
  addNamePoint("Rdb");
  addNamePoint("RDb");
  addNamePoint("Ruf");
  addNamePoint("Rdf");
  addNamePoint("RDf");
  addNamePoint("LDB1");
  addNamePoint("LDB2");
  addNamePoint("LDB3");
  addNamePoint("LDB4");
  addNamePoint("LDB5");
  addNamePoint("LDB6");
  addNamePoint("RDB1");
  addNamePoint("RDB2");
  addNamePoint("RDB3");
  addNamePoint("RDB4");
  addNamePoint("RDB5");
  addNamePoint("RDB6");
  addNamePoint("RDF1");
  addNamePoint("RDF2");
  addNamePoint("RDF3");
  addNamePoint("RDF4");
  addNamePoint("RDF5");
  addNamePoint("RDF6");
  addNamePoint("LDF1");
  addNamePoint("LDF2");
  addNamePoint("LDF3");
  addNamePoint("LDF4");
  addNamePoint("LDF5");
  addNamePoint("LDF6");
  
  m_nSizePoints = m_nSizeNamePoints;
  for(size_t i = 0; i < m_nSizeNamePoints; i++)
    {
      m_oIndexPts[m_oNamePoints[i]] = i;
    }
  m_oPoints = new Point2D*[m_nSizePoints];
  for(size_t i = 0; i < m_nSizePoints; i++)
    {
      m_oPoints[i] = new Point2D;
    }
  for(auto oIt = m_oIndexPts.begin(); oIt != m_oIndexPts.end(); ++oIt)
    {
      const char * cKey =  oIt->first;
      size_t oValue = oIt->second;
      m_oPoints[oValue]->getFeature()->setName(cKey);
    }

  size_t i = 0;
  //LDB
  i = m_oIndexPts["LDB"];
  m_oPoints[i]->setCoordCart({0., 0.});
  //DBl
  i = m_oIndexPts["DBl"];
  m_oPoints[i]->setCoordCart({1., 0.});
  //DBr
  i = m_oIndexPts["DBr"];
  m_oPoints[i]->setCoordCart({5., 0.});
  //RDB
  i = m_oIndexPts["RDB"];
  m_oPoints[i]->setCoordCart({6., 0.});
  //LBd
  i = m_oIndexPts["LBd"];
  m_oPoints[i]->setCoordCart({1./2., 1./2.});
  //Bld
  i = m_oIndexPts["Bld"];
  m_oPoints[i]->setCoordCart({3./2., 1./2.});
  //Brd
  i = m_oIndexPts["Brd"];
  m_oPoints[i]->setCoordCart({9./2., 1./2.});
  //RBd
  i = m_oIndexPts["RBd"];
  m_oPoints[i]->setCoordCart({11./2., 1./2.});
  //LBu
  i = m_oIndexPts["LBu"];
  m_oPoints[i]->setCoordCart({1., 1.});
  //Blu
  i = m_oIndexPts["Blu"];
  m_oPoints[i]->setCoordCart({2., 1.});
  //Bru
  i = m_oIndexPts["Bru"];
  m_oPoints[i]->setCoordCart({4., 1.});
  //RBu
  i = m_oIndexPts["RBu"];
  m_oPoints[i]->setCoordCart({5., 1.});
  //LUB
  i = m_oIndexPts["LUB"];
  m_oPoints[i]->setCoordCart({3./2., 3./2.});
  //UBl
  i = m_oIndexPts["UBl"];
  m_oPoints[i]->setCoordCart({5./2., 3./2.});
  //UBr
  i = m_oIndexPts["UBr"];
  m_oPoints[i]->setCoordCart({7./2., 3./2.});
  //RUB
  i = m_oIndexPts["RUB"];
  m_oPoints[i]->setCoordCart({9./2., 3./2.});
  //LUb
  i = m_oIndexPts["LUb"];
  m_oPoints[i]->setCoordCart({3./2., 5./2.});
  //Ulb
  i = m_oIndexPts["Ulb"];
  m_oPoints[i]->setCoordCart({5./2., 5./2.});
  //Urb
  i = m_oIndexPts["Urb"];
  m_oPoints[i]->setCoordCart({7./2., 5./2.});
  //RUb
  i = m_oIndexPts["RUb"];
  m_oPoints[i]->setCoordCart({9./2., 5./2.});
  //LUf
  i = m_oIndexPts["LUf"];
  m_oPoints[i]->setCoordCart({3./2., 7./2});
  //Ulf
  i = m_oIndexPts["Ulf"];
  m_oPoints[i]->setCoordCart({5./2., 7./2.});
  //Urf
  i = m_oIndexPts["Urf"];
  m_oPoints[i]->setCoordCart({7./2., 7./2.});
  //RUf
  i = m_oIndexPts["RUf"];
  m_oPoints[i]->setCoordCart({9./2., 7./2.});
  //LUF
  i = m_oIndexPts["LUF"];
  m_oPoints[i]->setCoordCart({3./2., 9./2.});
  //UFl
  i = m_oIndexPts["UFl"];
  m_oPoints[i]->setCoordCart({5./2., 9./2.});
  //UFr
  i = m_oIndexPts["UFr"];
  m_oPoints[i]->setCoordCart({7./2., 9./2.});
  //RUF
  i = m_oIndexPts["RUF"];
  m_oPoints[i]->setCoordCart({9./2., 9./2.});
  //LFu
  i = m_oIndexPts["LFu"];
  m_oPoints[i]->setCoordCart({1., 5.});
  //Flu
  i = m_oIndexPts["Flu"];
  m_oPoints[i]->setCoordCart({2., 5.});
  //Fru
  i = m_oIndexPts["Fru"];
  m_oPoints[i]->setCoordCart({4., 5.});
  //RFu
  i = m_oIndexPts["RFu"];
  m_oPoints[i]->setCoordCart({5., 5.});
  //LFd
  i = m_oIndexPts["LFd"];
  m_oPoints[i]->setCoordCart({1./2., 11./2.});
  //Fld
  i = m_oIndexPts["Fld"];
  m_oPoints[i]->setCoordCart({3./2., 11./2.});
  //Frd
  i = m_oIndexPts["Frd"];
  m_oPoints[i]->setCoordCart({9./2., 11./2.});
  //RFd
  i = m_oIndexPts["RFd"];
  m_oPoints[i]->setCoordCart({11./2., 11./2.});
  //LDF
  i = m_oIndexPts["LDF"];
  m_oPoints[i]->setCoordCart({0., 6.});
  //DFl
  i = m_oIndexPts["DFl"];
  m_oPoints[i]->setCoordCart({1., 6.});
  //DFr
  i = m_oIndexPts["DFr"];
  m_oPoints[i]->setCoordCart({5., 6.});
  //RDF
  i = m_oIndexPts["RDF"];
  m_oPoints[i]->setCoordCart({6., 6.});
  //LDb
  i = m_oIndexPts["LDb"];
  m_oPoints[i]->setCoordCart({0., 1.});
  //Ldb
  i = m_oIndexPts["Ldb"];
  m_oPoints[i]->setCoordCart({1./2., 3./2.});
  //Lub
  i = m_oIndexPts["Lub"];
  m_oPoints[i]->setCoordCart({1., 2.});
  //LDf
  i = m_oIndexPts["LDf"];
  m_oPoints[i]->setCoordCart({0., 5.});
  //Ldf
  i = m_oIndexPts["Ldf"];
  m_oPoints[i]->setCoordCart({1./2., 9./2.});
  //Luf
  i = m_oIndexPts["Luf"];
  m_oPoints[i]->setCoordCart({1., 4.});
  //Rub
  i = m_oIndexPts["Rub"];
  m_oPoints[i]->setCoordCart({5., 2.});
  //Rdb
  i = m_oIndexPts["Rdb"];
  m_oPoints[i]->setCoordCart({11./2., 3./2.});
  //RDb
  i = m_oIndexPts["RDb"];
  m_oPoints[i]->setCoordCart({6., 1.});
  //Ruf
  i = m_oIndexPts["Ruf"];
  m_oPoints[i]->setCoordCart({5., 4.});
  //Rdf
  i = m_oIndexPts["Rdf"];
  m_oPoints[i]->setCoordCart({11./2., 9./2.});
  //RDf
  i = m_oIndexPts["RDf"];
  m_oPoints[i]->setCoordCart({6., 5.});
  //lDb 
  m_oPoints[m_oIndexPts["LDB1"]]->setCoordCart({-0.1, -0.1});
  m_oPoints[m_oIndexPts["LDB2"]]->setCoordCart({1, -0.1});
  m_oPoints[m_oIndexPts["LDB3"]]->setCoordCart({1, -0.3});
  m_oPoints[m_oIndexPts["LDB4"]]->setCoordCart({-0.3, -0.3});
  m_oPoints[m_oIndexPts["LDB5"]]->setCoordCart({-0.3, 1});
  m_oPoints[m_oIndexPts["LDB6"]]->setCoordCart({-0.1, 1});
  //rDb
  m_oPoints[m_oIndexPts["RDB1"]]->setCoordCart({6.1, -0.1});
  m_oPoints[m_oIndexPts["RDB2"]]->setCoordCart({5, -0.1});
  m_oPoints[m_oIndexPts["RDB3"]]->setCoordCart({5, -0.3});
  m_oPoints[m_oIndexPts["RDB4"]]->setCoordCart({6.3, -0.3});
  m_oPoints[m_oIndexPts["RDB5"]]->setCoordCart({6.3, 1});
  m_oPoints[m_oIndexPts["RDB6"]]->setCoordCart({6.1, 1});
  //rDf
  m_oPoints[m_oIndexPts["RDF1"]]->setCoordCart({6.1, 6.1});
  m_oPoints[m_oIndexPts["RDF2"]]->setCoordCart({5, 6.1});
  m_oPoints[m_oIndexPts["RDF3"]]->setCoordCart({5, 6.3});
  m_oPoints[m_oIndexPts["RDF4"]]->setCoordCart({6.3, 6.3});
  m_oPoints[m_oIndexPts["RDF5"]]->setCoordCart({6.3, 5});
  m_oPoints[m_oIndexPts["RDF6"]]->setCoordCart({6.1, 5});
  //lDf
  m_oPoints[m_oIndexPts["LDF1"]]->setCoordCart({-0.1, 6.1});
  m_oPoints[m_oIndexPts["LDF2"]]->setCoordCart({1, 6.1});
  m_oPoints[m_oIndexPts["LDF3"]]->setCoordCart({1, 6.3});
  m_oPoints[m_oIndexPts["LDF4"]]->setCoordCart({-0.3, 6.3});
  m_oPoints[m_oIndexPts["LDF5"]]->setCoordCart({-0.3, 5});
  m_oPoints[m_oIndexPts["LDF6"]]->setCoordCart({-0.1, 5});
}

void Figure2DF2L::InitEdges()
{
  addEdge("LDB", "DBl");
  addEdge("DBl", "DBr");
  addEdge("DBr", "RDB");
  addEdge("LDB", "LBd");
  addEdge("DBl", "Bld");
  addEdge("DBr", "Brd");
  addEdge("RDB", "RBd");
  addEdge("LBd", "Bld");
  addEdge("Bld", "Brd");
  addEdge("Brd", "RBd");
  addEdge("LBd", "LBu");
  addEdge("Bld", "Blu");
  addEdge("Brd", "Bru");
  addEdge("RBd", "RBu");
  addEdge("LBu", "Blu");
  addEdge("Blu", "Bru");
  addEdge("Bru", "RBu");
  addEdge("LBu", "LUB");
  addEdge("Blu", "UBl");
  addEdge("Bru", "UBr");
  addEdge("RBu", "RUB");
  addEdge("LUB", "UBl");
  addEdge("UBl", "UBr");
  addEdge("UBr", "RUB");
  addEdge("LUB", "LUb");
  addEdge("UBl", "Ulb");
  addEdge("UBr", "Urb");
  addEdge("RUB", "RUb");
  addEdge("LUb", "Ulb");
  addEdge("Ulb", "Urb");
  addEdge("Urb", "RUb");
  addEdge("LUb", "LUf");
  addEdge("Ulb", "Ulf");
  addEdge("Urb", "Urf");
  addEdge("RUb", "RUf");
  addEdge("LUf", "Ulf");
  addEdge("Ulf", "Urf");
  addEdge("Urf", "RUf");
  addEdge("LUf", "LUF");
  addEdge("Ulf", "UFl");
  addEdge("Urf", "UFr");
  addEdge("RUf", "RUF");
  addEdge("LUF", "UFl");
  addEdge("UFl", "UFr");
  addEdge("UFr", "RUF");
  addEdge("LUF", "LFu");
  addEdge("UFl", "Flu");
  addEdge("UFr", "Fru");
  addEdge("RUF", "RFu");
  addEdge("LFu", "Flu");
  addEdge("Flu", "Fru");
  addEdge("Fru", "RFu");
  addEdge("LFu", "LFd");
  addEdge("Flu", "Fld");
  addEdge("Fru", "Frd");
  addEdge("RFu", "RFd");
  addEdge("LFd", "Fld");
  addEdge("Fld", "Frd");
  addEdge("Frd", "RFd");
  addEdge("LFd", "LDF");
  addEdge("Fld", "DFl");
  addEdge("Frd", "DFr");
  addEdge("RFd", "RDF");
  addEdge("LDF", "DFl");
  addEdge("DFl", "DFr");
  addEdge("DFr", "RDF");
  addEdge("LDB", "LDb");
  addEdge("LBd", "Ldb");
  addEdge("LBu", "Lub");
  addEdge("LDb", "Ldb");
  addEdge("Ldb", "Lub");
  addEdge("Lub", "LUb");
  addEdge("LDb", "LDf");
  addEdge("Ldb", "Ldf");
  addEdge("Lub", "Luf");
  addEdge("LDf", "Ldf");
  addEdge("Ldf", "Luf");
  addEdge("Luf", "LUf");
  addEdge("LDf", "LDF");
  addEdge("Ldf", "LFd");
  addEdge("Luf", "LFu");
  addEdge("RDB", "RDb");
  addEdge("RBd", "Rdb");
  addEdge("RBu", "Rub");
  addEdge("RDb", "Rdb");
  addEdge("Rdb", "Rub");
  addEdge("Rub", "RUb");
  addEdge("RDb", "RDf");
  addEdge("Rdb", "Rdf");
  addEdge("Rub", "Ruf");
  addEdge("RDf", "Rdf");
  addEdge("Rdf", "Ruf");
  addEdge("Ruf", "RUf");
  addEdge("RDf", "RDF");
  addEdge("Rdf", "RFd");
  addEdge("Ruf", "RFu");
  addEdge("LDB1", "LDB2");
  addEdge("LDB2", "LDB3");
  addEdge("LDB3", "LDB4");
  addEdge("LDB4", "LDB5");
  addEdge("LDB5", "LDB6");
  addEdge("LDB6", "LDB1");
  addEdge("RDB1", "RDB2");
  addEdge("RDB2", "RDB3");
  addEdge("RDB3", "RDB4");
  addEdge("RDB4", "RDB5");
  addEdge("RDB5", "RDB6");
  addEdge("RDB6", "RDB1");
  addEdge("RDF1", "RDF2");
  addEdge("RDF2", "RDF3");
  addEdge("RDF3", "RDF4");
  addEdge("RDF4", "RDF5");
  addEdge("RDF5", "RDF6");
  addEdge("RDF6", "RDF1");
  addEdge("LDF1", "LDF2");
  addEdge("LDF2", "LDF3");
  addEdge("LDF3", "LDF4");
  addEdge("LDF4", "LDF5");
  addEdge("LDF5", "LDF6");
  addEdge("LDF6", "LDF1");

  for(auto oIt = m_oIndexEdgs.begin(); oIt != m_oIndexEdgs.end(); ++oIt)
    {
      const char * cKey =  oIt->first;
      size_t oValue = oIt->second;
      cout << cKey << " : " << oValue << endl;
    }
}

void Figure2DF2L::InitPolygons()
{
  addPolygon(6, "E96", "E97", "E98", "E99", "E100", "E101");
  addPolygon(6, "E102", "E103", "E104", "E105", "E106", "E107");
  addPolygon(6, "E108", "E109", "E110", "E111", "E112", "E113");
  addPolygon(6, "E114", "E115", "E116", "E117", "E118", "E119");
}

void Figure2DF2L::addNamePoint(const char * cName)
{
  char * cNameCopy = new char[LGMAX_NAME_POINT+1];
  memset(cNameCopy, '\0', LGMAX_NAME_POINT);
  strncpy(cNameCopy, cName, LGMAX_NAME_POINT);
  m_nSizeNamePoints++;
  char ** oNamePoints = new char*[m_nSizeNamePoints];
  if(m_nSizeNamePoints > 1)
    {
      for(size_t i = 0; i < m_nSizeNamePoints-1; i++)
	{
	  oNamePoints[i] = m_oNamePoints[i];
	}
    }
  oNamePoints[m_nSizeNamePoints-1] = cNameCopy;
  delete [] m_oNamePoints;
  m_oNamePoints = oNamePoints;
}

void Figure2DF2L::addNameEdge(const char * cName)
{
  char * cNameCopy = new char[LGMAX_NAME_EDGE+1];
  memset(cNameCopy, '\0', LGMAX_NAME_EDGE);
  strncpy(cNameCopy, cName, LGMAX_NAME_EDGE);
  m_nSizeNameEdges++;
  char ** oNameEdges = new char*[m_nSizeNameEdges];
  if(m_nSizeNameEdges > 1)
    {
      for(size_t i = 0; i < m_nSizeNameEdges-1; i++)
	{
	  oNameEdges[i] = m_oNameEdges[i];
	}
    }
  oNameEdges[m_nSizeNameEdges-1] = cNameCopy;
  delete [] m_oNameEdges;
  m_oNameEdges = oNameEdges;
}

void Figure2DF2L::addNamePolygon(const char * cName)
{
  char * cNameCopy = new char[LGMAX_NAME_POLYGON+1];
  memset(cNameCopy, '\0', LGMAX_NAME_POLYGON);
  strncpy(cNameCopy, cName, LGMAX_NAME_POLYGON);
  m_nSizeNamePolygons++;
  char ** oNamePolygons = new char*[m_nSizeNamePolygons];
  if(m_nSizeNamePolygons > 1)
    {
      for(size_t i = 0; i < m_nSizeNamePolygons-1; i++)
	{
	  oNamePolygons[i] = m_oNamePolygons[i];
	}
    }
  oNamePolygons[m_nSizeNamePolygons-1] = cNameCopy;
  delete [] m_oNamePolygons;
  m_oNamePolygons = oNamePolygons;
}

//pré-cond : cPt1 et cPt2 existe dans m_oIndexPts
void Figure2DF2L::addEdge(const char * cPt1, const char * cPt2)
{
  size_t i1 = m_oIndexPts[cPt1];
  size_t i2 = m_oIndexPts[cPt2];
  Point2D * oPt1 = m_oPoints[i1];
  Point2D * oPt2 = m_oPoints[i2];
  Edge2D * oEdge = new Edge2D;
  oEdge->setPointA(oPt1);
  oEdge->setPointB(oPt2);
  char cKey[LGMAX_NAME_EDGE+1] = {0};
  sprintf(cKey, "E%d",  m_nSizeEdges);
  addNameEdge(cKey);
  m_oIndexEdgs[cKey] = m_nSizeEdges;
  oEdge->getFeature()->setName(cKey);
  addEdge(oEdge);
}

//pré-cond : oEdge->getFeature().getName() existe dans m_nIndexEdgs et c'est le dernier ajouté
//post-cond : m_oEdges[m_nIndexEdgs[oEdge->getFeature().getName()]] = oEdge
void Figure2DF2L::addEdge(Edge2D * oEdge)
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
}

//pré-cond : cEdge1, ... existe dans m_oIndexPts
void Figure2DF2L::addPolygon(size_t nSizeEdge, const char * cEdge1, ...)
{
  char cKey[10] = {0};
  sprintf(cKey, "P%d",  m_nSizePolygons);
  m_oIndexPols[cKey] =  m_nSizePolygons;
  Polygon2D * oPolygon = new Polygon2D();
  oPolygon->getFeature()->setName(cKey);
  va_list params;
  va_start(params, cEdge1);
  Edge2D * oEdge = m_oEdges[m_oIndexEdgs[cEdge1]];
  oPolygon->addEdge(oEdge);
  const char * cEdge;
  for(size_t i = 0; i < nSizeEdge; i++)
    {
      cEdge = va_arg(params, const char *);
      oEdge = m_oEdges[m_oIndexEdgs[cEdge]];
      oPolygon->addEdge(oEdge);
    }
  va_end(params);
  addPolygon(oPolygon);
}

//pré-cond : oPolygon->getFeature().getName() existe dans m_nIndexPols et c'est le dernier ajouté
//post-cond : m_oPolygons[m_nIndexPols[oPolygon->getFeature().getName()]] = oPolygon
void Figure2DF2L::addPolygon(Polygon2D * oPolygon)
{
  m_nSizePolygons++; 
  Polygon2D ** oPolygons = new Polygon2D*[m_nSizePolygons];
  if(m_nSizePolygons > 1)
    {
      for(size_t i = 0; i < m_nSizePolygons-1; i++)
	{
	  oPolygons[i] = m_oPolygons[i];
	}
    }
  oPolygons[m_nSizePolygons-1] = oPolygon;
  delete [] m_oPolygons;
  m_oPolygons = oPolygons;
}
