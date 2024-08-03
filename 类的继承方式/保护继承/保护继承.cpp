#include <iostream>
#include "shape.h"
#include "circle.h"
using namespace std;
int main()
{
	shape s("shapel", "红色");
	circle c("circlel", "蓝色", 10);
	s.draw();
	//c.draw();										错误，circle类中deaw为保护访问权限
	cout << "圆的面积:" << c.area() << endl;
	//c.setname("c1");								
	//c.setcolor("绿色");							
	//c.draw();										
	cout << sizeof(shape) << endl;
	cout << sizeof(circle) << endl;
	return 0;
}