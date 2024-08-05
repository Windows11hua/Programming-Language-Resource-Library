#include <iostream>
#include "circle.h"
using namespace std;
circle::circle(const point& ct, int radios, const char* color) :shape(color), center(ct)
{
	this->radios = radios;
}
void circle::draw()
{
	cout << "Draw a circle as center(" << center.getX() << ",";
	cout << center.getY() << ")with radios " << radios << " and color ";
	outputcolor();									//调用基类shape的方法
}