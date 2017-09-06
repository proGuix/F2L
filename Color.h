#ifndef COLOR_H
#define COLOR_H

#include <cstdio>
#include <cstring>

#define LGMAX_COLOR_NAME 20
#define LGMAX_COLOR_R 3
#define LGMAX_COLOR_G 3
#define LGMAX_COLOR_B 3

struct Color
{
  char cName[LGMAX_COLOR_NAME+1];
  int nR;
  int nG;
  int nB;

  Color()
  {
    memset(cName, '\0', LGMAX_COLOR_NAME+1);
    strncpy(this->cName, "black", LGMAX_COLOR_NAME);
    nR = 0;
    nG = 0;
    nB = 0;
  }
  
  Color(const char * cNam, int nR, int nG, int nB)
  {
    memset(this->cName, '\0', LGMAX_COLOR_NAME+1);
    strncpy(this->cName, cNam, LGMAX_COLOR_NAME);
    this->nR = nR;
    this->nG = nG;
    this->nB = nB;
  }

  void setName(const char * cName)
  {
    memset(this->cName, '\0', LGMAX_COLOR_NAME+1);
    strncpy(this->cName, cName, LGMAX_COLOR_NAME);
  }
  
};

#endif
