#include <iostream>
#include "alermclock.h"
#include <Windows.h>
using namespace std;
Alermclock::Alermclock(int hour, int minute, int second, int alermhour, int alermminute, int alermsecond)
{
	this->alermhour = alermhour;
	this->alermminute = alermminute;
	this->alermsecond = alermsecond;
}
void Alermclock::alerm()
{
	for (int i = 0; i <= 4; i++)
	{
		cout << '\a';
		Sleep(1000);
	}
}
void Alermclock::setAlermtime(int alermhour, int alermminute, int alermsecond)
{
	this->alermhour = alermhour;
	this->alermminute = alermminute;
	this->alermsecond = alermsecond;
}
void Alermclock::showAlermtime()
{
	cout << alermhour << ":" << alermminute << ":" << alermsecond << endl;
}