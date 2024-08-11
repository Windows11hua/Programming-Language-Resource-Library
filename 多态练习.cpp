/*��Ŀ����д���򣬶���shape�࣬�����������鹹�������ֱ����ڼ���������ܳ�������������������:rectangle��circle��
����������ʵ����������������ܳ��ĺ��������������в����⼸���࣬��ʵ�ֶ�̬��*/
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
	cout << "���ε��ܳ�Ϊ��" << p1->getzhouchang() << endl;
	cout << "���ε����Ϊ��" << p1->getmianji() << endl;
	cout << "Բ���ܳ�Ϊ:" << p2->getzhouchang() << endl;
	cout << "Բ�����Ϊ:" << p2->getmianji();
	return 0;
}