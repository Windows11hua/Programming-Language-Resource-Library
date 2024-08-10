#pragma once
#ifndef LINE_H

#endif // !LINE_H
#define LINE_H
#include "point.h"
#include "shape.h"
class line :public shape
{
private:
	point start;
	point end;
public:
	line(const point& s, const point& e, const char* c);
	virtual void draw();
};