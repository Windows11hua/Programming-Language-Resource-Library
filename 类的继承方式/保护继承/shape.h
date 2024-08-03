#pragma once
#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
class shape
{
private:
	char name[8];
	char color[8];
public:
	shape(const char* name = "none", const char* color = "none");
	void setname(const char* name);
	void setcolor(const char* color);
	void draw();
};
#endif