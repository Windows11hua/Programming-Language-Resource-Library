#include <iostream>
#include "shape.h"
#include "circle.h"
using namespace std;
int main()
{
	shape s("shapel", "��ɫ");
	circle c("circlel", "��ɫ", 10);
	s.draw();
	c.draw();										//���û���shape��draw����
	cout << "Բ�����:" << c.area() << endl;
	c.setname("c1");								//���û���shape��stename����
	c.setcolor("��ɫ");								//���û���shape��setcolor����
	c.draw();										//���û���shape��draw����
	cout << sizeof(shape) << endl;
	cout << sizeof(circle) << endl;
	return 0;
}