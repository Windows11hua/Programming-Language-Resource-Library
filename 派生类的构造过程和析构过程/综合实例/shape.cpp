#include <iostream>
#include "shape.h"
using namespace std;
shape::shape(const char* c)
{
	strcpy_s(color, c);
}
void shape::draw()
{
	cout << "Draw a shape.The color is " << color << endl;
}
void shape::outputcolor()
{
	cout << color << endl;
}