#ifndef COUNTABLEOBJECT_H
#define COUNTABLEOBJECT_H

#include <cstdio>

class CountableObject
{
 public:
  CountableObject();
  size_t getNbInstances() const;
  size_t getId() const;
 protected:
  static size_t m_nNbInstances;
  size_t m_nId;
};

#endif
