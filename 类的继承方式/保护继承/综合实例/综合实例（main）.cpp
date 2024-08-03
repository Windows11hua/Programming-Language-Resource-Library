#include <iostream>
#include "alermclock.h"
using namespace std;
int main()
{
	Alermclock c(13, 30, 30, 17, 20, 10);
	c.showtime();
	c.showAlermtime();
	c.alerm();
	c.settime(10, 30, 40);
	c.setAlermtime(6, 30, 0);
	c.showtime();
	c.showAlermtime();
	return 0;
}