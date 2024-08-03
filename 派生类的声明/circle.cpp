#include <iostream>
#include "circle.h"
using namespace std;
circle::circle(const char* name, const char* color, double radios) :shape(name, color)
{
	this->radios = radios;
}
double circle::area()
{
	return PI * radios * radios;
}