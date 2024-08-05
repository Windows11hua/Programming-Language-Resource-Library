#pragma once
#ifndef CIRCLE_H

#endif // !CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include "point.h"
class circle :public shape
{
private:
	point center;									//圆心
	int radios;										//半径
public:
	circle(const point& ct, int radios, const char* color);
	void draw();									//输出圆的相关信息
};