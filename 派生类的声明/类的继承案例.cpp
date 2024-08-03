#include <iostream>
#include "shape.h"
#include "circle.h"
using namespace std;
int main()
{
	shape s("shapel", "红色");
	circle c("circlel", "蓝色", 10);
	s.draw();
	c.draw();										//调用基类shape的draw方法
	cout << "圆的面积:" << c.area() << endl;
	c.setname("c1");								//调用基类shape的stename方法
	c.setcolor("绿色");								//调用基类shape的setcolor方法
	c.draw();										//调用基类shape的draw方法
	cout << sizeof(shape) << endl;
	cout << sizeof(circle) << endl;
	return 0;
}