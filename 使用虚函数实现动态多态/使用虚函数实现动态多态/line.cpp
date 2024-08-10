#include <iostream>
#include "line.h"
using namespace std;
line::line(const point& s, const point& e, const char* c) :shape(c), start(s), end(e) {}
void line::draw()
{
	cout << "Draw a line from (" << start.getX() << "," << start.getY();
	cout << ") to(" << end.getY() << "," << end.getY() << "),with color";
	outputcolor();
}