#include "Feature.h"

Feature::Feature()
{
  memset(m_cName, '\0', LGMAX_NAME_POINT+1);
  m_bVisible = true;
}

const char * Feature::getName() const
{
  return m_cName;
}

Color Feature::getColor() const
{
  return m_oColor;
}

bool Feature::isVisible() const
{
  return m_bVisible;
}

void Feature::setName(const char cName[LGMAX_NAME_POINT+1])
{
  strncpy(m_cName, cName, LGMAX_NAME_POINT);
}

void Feature::setColor(Color oColor)
{
  m_oColor = oColor;
}

void Feature::setVisible(bool bVisible)
{
  m_bVisible = bVisible;
}
