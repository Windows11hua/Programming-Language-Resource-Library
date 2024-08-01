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
	student max(const student& s);
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
student student::max(const student& s)
{
	if (this->age > s.age)
		return *this;													//注意：此时this为指针
	else
		return s;
}
int main()
{
	int sum = 0;
	student s1(10001, "张三", 20);
	student s2(10002, "李四", 22);
	student s3 = s1.max(s2);
	s3.show();
	return 0;
}