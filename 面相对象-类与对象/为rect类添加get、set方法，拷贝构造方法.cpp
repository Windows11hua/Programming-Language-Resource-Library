#include <iostream>
using namespace std;

class rect
{
private:
	int length;
	int width;
public:
	rect();									//提供三个构造方法
	rect(int l, int w);
	rect(const rect& r);
	void getlength(int l);					//提供一组get、set方法
	int getlength();
	void setwidth(int l);
	int getwidth();
	int getarea();
	int getperimeter();
	void setlength(int l);
};
rect::rect()
{
	length = 0;
	width = 0;
}
rect::rect(const rect& r)
{
	length = r.length;
	width = r.width;
}
rect::rect(int l, int w)
{
	length = l;
	width = w;
}
void rect::setlength(int l)
{
	length = l;
}
int rect::getlength()
{
	return length;
}
void rect::setwidth(int w)
{
	width = w;
}
int rect::getwidth()
{
	return width;
}
int rect::getarea()
{
	return length * width;
}
int rect::getperimeter()
{
	return 2 * (length * width);
}

int main()
{
	rect r1(100, 50);
	rect r2(r1);
	cout << "r1的长：" << r1.getlength() << " 宽：" << r1.getwidth() << endl;
	cout << "r2的长：" << r2.getlength() << " 宽：" << r2.getwidth() << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << "=";
	}
	cout << endl;
	r2.setlength(200);
	r2.setwidth(100);
	cout << "r1的长：" << r1.getlength() << " 宽：" << r1.getwidth() << endl;
	cout << "r2的长：" << r2.getlength() << " 宽：" << r2.getwidth() << endl;
	return 0;
}