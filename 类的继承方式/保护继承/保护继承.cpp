#include <iostream>
#include "shape.h"
#include "circle.h"
using namespace std;
int main()
{
	shape s("shapel", "��ɫ");
	circle c("circlel", "��ɫ", 10);
	s.draw();
	//c.draw();										����circle����deawΪ��������Ȩ��
	cout << "Բ�����:" << c.area() << endl;
	//c.setname("c1");								
	//c.setcolor("��ɫ");							
	//c.draw();										
	cout << sizeof(shape) << endl;
	cout << sizeof(circle) << endl;
	return 0;
}