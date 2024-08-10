#pragma once
#ifndef POINT_H

#endif // !POINT_H
#define POINT_H
class point
{
	int x;
	int y;
public:
	point(int x = 0, int y = 0);
	point(const point& p);
	int getX();
	int getY();
};