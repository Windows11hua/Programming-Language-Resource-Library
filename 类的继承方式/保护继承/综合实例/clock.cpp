#include <iostream>
#include "clock.h"
using namespace std;
clock::clock(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}
clock::clock(const clock& c)
{
	hour = c.hour;
	minute = c.minute;
	second = c.second;
}
void clock::settime(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}
void clock::showtime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}