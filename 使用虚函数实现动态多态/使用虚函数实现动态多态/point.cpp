#include "point.h"
point::point(int x, int y)
{
	this->x = x;
	this->y = y;
}
point::point(const point& p)
{
	x = p.x;
	y = p.y;
}
int point::getX()
{
	return x;
}
int point::getY()
{
	return y;
}