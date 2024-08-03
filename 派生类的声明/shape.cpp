#include <iostream>
#include "shape.h"
using namespace std;
shape::shape(const char* name, const char* color)
{
	strcpy_s(this->name, name);
	strcpy_s(this->color, color);
}
void shape::setname(const char* name)
{
	strcpy_s(this->name, name);
}
void shape::setcolor(const char* color)
{
	strcpy_s(this->color, color);
}
void shape::draw()
{
	cout << "draw:" << name << " with color " << color << endl;
}