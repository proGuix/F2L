#include "CountableObject.h"

size_t CountableObject::m_nNbInstances = 0;

CountableObject::CountableObject()
{
  m_nId = ++m_nNbInstances;
}
size_t CountableObject::getNbInstances() const
{
  return m_nNbInstances;
}

size_t CountableObject::getId() const
{
  return m_nId;
}
