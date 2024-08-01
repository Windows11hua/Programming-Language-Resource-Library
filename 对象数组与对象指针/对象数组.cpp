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
	student s[3] = { student(10001,"张三",20),
	student(10002,"李四",22),
	student(10003,"王五",30), };
	for (int i = 0; i < 3; i++)
	{
		s[i].show();
		sum += s[i].getage();
	}
	cout << "平均年龄:" << sum / 3;
	return 0;
}