#include "cercle.h"
#include <iostream>

float cercle::area(float radius)
{
  return (rayon*rayon)*3.14;
}

float cercle::perimeter(float radius)
{
  return 2*rayon*3.14;
}
