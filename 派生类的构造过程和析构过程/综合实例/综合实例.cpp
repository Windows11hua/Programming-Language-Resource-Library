#include "line.h"
#include "circle.h"
#include <iostream>
using namespace std;
int main()
{
	shape s("��ɫ");
	point p1(10, 10), p2(100, 100), p3(50, 50);
	line l(p1, p2, "��ɫ");
	circle c(p3, 20, "��ɫ");
	s.draw();
	l.draw();
	c.draw();
	return 0;
}