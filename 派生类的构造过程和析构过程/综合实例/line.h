#pragma once
#ifndef LINE_H

#endif // !LINE_H
#define LINE_H
#include "shape.h"
#include "point.h"
class line :public shape
{
private:
	point start;							//线段的起始点
	point end;								//线段的终点
public:
	line(const point& s, const point& e, const char* c);
	void draw();							//输出线段的相关信息
};