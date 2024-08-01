#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
	int number;
	char name[10];
	int age;
public:
	student(int xh, const char* xm, int a);
	int getage();
	void show();
};
student::student(int xh, const char* xm, int a)
{
	number = xh;
	strcpy_s(name, xm);
	age = a;
}
int student::getage()
{
	return age;
}
void student::show()
{
	cout << number << "\t" << name << "\t" << age << endl;
}
int main()
{
	int sum = 0;
	student* p[3];
	p[0] = new student(10001, "张三", 20);
	p[1] = new student(10002, "李四", 22);
	p[2] = new student(10003, "王五", 30);
	for (int i = 0; i < 3; i++)
	{
		p[i]->show();
		sum += p[i]->getage();
	}
	cout << "平均年龄为:" << sum / 3 << endl;
	for (int i = 0; i < 3; i++)
	{
		delete p[i];
	}
	return 0;
}