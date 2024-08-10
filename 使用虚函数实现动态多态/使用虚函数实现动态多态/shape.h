#pragma once
#ifndef SHAPE_H

#endif // !SHAPE_H
#define SHAPE_H
#include <string>
class shape
{
private:
	char color[10];
public:
	shape(const char* c);
	virtual void draw();
	void outputcolor();
};