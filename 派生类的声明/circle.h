#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
class circle :public shape							//circle��shape�̳�
{
private:
	const double PI = 3.14159;
	double radios;
public:
	circle(const char* name, const char* color, double radios);
	double area();
};
#endif