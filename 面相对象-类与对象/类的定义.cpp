#include <iostream>
using namespace std;

class hhh
{
private:									//2个私有属性
	int length;
	int width;
public:										//4个共有方法
	void setlength(int l);					//定义函数原型
	void setwidth(int w);
	int getarea();
	int getperimeter();
};
void hhh::setlength(int l)					//函数的定义
{
	length = l;
}
void hhh::setwidth(int w)
{
	width = w;
}
int hhh::getarea()
{
	return length * width;
}
int hhh::getperimeter()
{
	return 2 * (length + width);
}

int main()
{
	hhh r1, r2;
	r1.setlength(200);
	r1.setwidth(100);
	r2.setlength(20);
	r2.setwidth(10);
	cout << r1.getarea() << endl;
	cout << r1.getperimeter() << endl;
	cout << r2.getarea() << endl;
	cout << r2.getperimeter() << endl;
	//下面输出矩形对象占用的内存
	cout << "下面输出矩形对象占用的内存" << endl;
	cout << "hhh占用的大小：" << sizeof(hhh) << endl;
	cout << "r1占用的大小：" << sizeof(r1) << endl;
	cout << "r1的位置：" << &r1 << endl;
	cout << "r2的位置：" << &r2 << endl;
	cout << &r1 + 1 << " " << &r2 + 1 << endl;
	cout << &r1 + 2 << " " << &r2 + 2 << endl;
	cout << &r1 + 3 << " " << &r2 + 3 << endl;
	return 0;
}