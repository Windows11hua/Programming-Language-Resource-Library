/*题目：编写程序，定义shape类，包括两个纯虚构函数，分别用于计算面积与周长，派生出两个派生类:rectangle和circle，
在派生类中实现两个计算面积和周长的函数。在主函数中测试这几个类，并实现多态。*/
#include <iostream>
#define PI 3.14159
using namespace std;
class shape
{
public:
	virtual double getmianji() = 0;
	virtual double getzhouchang() = 0;
};
class rectangle :public shape
{
private:
	double length;
	double windth;
public:
	rectangle(double w, double l)
	{
		windth = w;
		length = l;
	}
	double getmianji();
	double getzhouchang();
};
double rectangle::getmianji()
{
	return windth * length;
}
double rectangle::getzhouchang()
{
	return 2 * (windth + length);
}
class circle :public shape
{
private:
	double radius;
public:
	circle(double r)
	{
		radius = r;
	}
	double getzhouchang();
	double getmianji();
};
double circle::getzhouchang()
{
	return 2 * radius * PI;
}
double circle::getmianji()
{
	return radius * radius * PI;
}
int main()
{
	shape* p1 = new rectangle(500, 100);
	shape* p2 = new circle(50);
	cout << "矩形的周长为：" << p1->getzhouchang() << endl;
	cout << "矩形的面积为：" << p1->getmianji() << endl;
	cout << "圆的周长为:" << p2->getzhouchang() << endl;
	cout << "圆的面积为:" << p2->getmianji();
	return 0;
}