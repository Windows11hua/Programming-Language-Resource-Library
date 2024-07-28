//该程序的作用为计算两坐标点之间的距离
#include <iostream>
using namespace std;
class Point
{
public:
	Point(int xx = 0, int yy = 0);
	int getX();
	int getY();
	friend double getdistance(Point start, Point end);
private:
	int x, y;
};
Point::Point(int xx, int yy)
{
	x = xx;
	y = yy;
}
int Point::getX()
{
	return x;
}
int Point::getY()
{
	return y;
}
double getdistance(Point start, Point end)
{
	double d;
	d = sqrt((end.x - start.x) * (end.x - start.x) + (end.y - start.y) + (end.y - start.y));
	return d;
}
int main()
{
	Point p1(1, 1), p2(4, 5);
	double d;
	d = getdistance(p1, p2);
	cout << "两点的距离为：" << d;
	return 0;
}
