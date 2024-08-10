#pragma once
#ifndef CIRCLE_H

#endif // !CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include "point.h"
class circle :public shape
{
private:
	point center;
	int radios;
public:
	circle(const point& ct, int radios, const char* color);
	virtual void draw();
};