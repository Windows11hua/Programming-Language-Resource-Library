#pragma once
#ifndef SHAPE_H

#endif // !SHAPE_H
#define SHAPE_H
class shape
{
private:
	char color[10];
public:
	shape(const char* c);
	void draw();
	void outputcolor();
};