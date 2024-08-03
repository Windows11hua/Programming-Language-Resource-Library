#pragma once
#ifndef CLOCK_H
#define COLCK_H
#include <iostream>
using namespace std;
class clock
{
private:
	int hour;
	int minute;
	int second;
public:
	clock(int hour = 0, int minute = 0, int second = 0);
	clock(const clock& c);
	void settime(int h, int m, int s);
	void showtime();
};
#endif