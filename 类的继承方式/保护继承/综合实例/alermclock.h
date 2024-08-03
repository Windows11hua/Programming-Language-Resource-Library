#pragma once
#ifndef ALERMCLOCK_H
#define ALERMCLOCK_H
#include "clock.h"
#include <iostream>
class Alermclock :public clock
{
private:
	int alermhour;
	int alermminute;
	int alermsecond;
public:
	Alermclock(int hour = 12, int minute = 0, int second = 0, int alermhour = 0, int alermminute = 0, int alermsecond = 0);
	void alerm();
	void setAlermtime(int alermhour, int alermminute, int alermsecond);
	void showAlermtime();
};
#endif