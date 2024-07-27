#include <iostream>
using namespace std;

class circle
{
private:
	double radius;
	const double pi;
public:
	circle(int r) :pi(3.14159)			//常量成员必须使用初始化表
	{
		radius = r;
	}
	double getarea()
	{
		return pi * radius * radius;
	}
	double getperimeter()
	{
		return 2 * pi * radius;
	}
};
int main()
{
	circle c(100);
	cout << c.getarea() << endl;
	cout << c.getperimeter() << endl;
	return 0;
}