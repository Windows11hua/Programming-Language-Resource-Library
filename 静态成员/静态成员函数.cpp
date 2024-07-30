#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
	static int count;
	int number;
	char name[10];
	int age;
public:
	student(const char* n, int a)
	{
		count++;
		number = 20200 + count;
		strcpy_s(name, n);
		age = a;
	}
	int getnumber()
	{
		return number;
	}
	int getage()
	{
		return age;
	}
	char* getname()
	{
		return name;
	}
	static int getcount()
	{
		return count;
	}
};
int student::count = 0;
int main()
{
	cout << student::getcount() << "个学生" << endl;
	student s1("张三", 18);
	cout << student::getcount() << "个学生" << endl;
	student s2("李四", 19);
	cout << student::getcount() << "个学生" << endl;
	student s3("王五", 17);
	cout << student::getcount() << "个学生" << endl;
	cout << s1.getnumber() << "\t" << s1.getname() << "\t" << s1.getage() << endl;
	cout << s2.getnumber() << "\t" << s2.getname() << "\t" << s2.getage() << endl;
	cout << s3.getnumber() << "\t" << s3.getname() << "\t" << s3.getage() << endl;
	return 0;
}