#include <iostream>
#include "line.h"
#include "circle.h"
int main()
{
	shape* ps[3];
	shape s("Red");
	point p1(10,10),p2(100,100),p3(50,50);
	line l(p1, p2, "green");
	circle c(p3, 20, "biank");
	ps[0] = &s;
	ps[1] = &l;
	ps[2] = &c;
	for (int i = 0; i < 3; i++)
		ps[i]->draw();
	return 0;
}