#ifndef FEATURE_H
#define FEATURE_H
 
#include <cstdio>
#include <cstring>
#include "Color.h"
#include "Name.h"

class Feature
{
public:
  Feature();
  const char * getName() const;
  Color getColor() const;
  bool isVisible() const;
  void setName(const char cName[LGMAX_NAME_POINT+1]);
  void setColor(Color oColor);
  void setVisible(bool bVisible);
 protected:
  char m_cName[LGMAX_NAME_POINT+1];
  Color m_oColor;
  bool m_bVisible;
};

#endif
