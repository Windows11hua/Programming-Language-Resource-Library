#include <iostream>
using namespace std;
class employee
{
private:
	char* name;
	int age;
public:
	employee(const char* n, int a);
	virtual~employee();
};
employee::employee(const char* n, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;
}
employee::~employee()
{
	cout << "Destruct emploree " << name << endl;
	if (name)
		delete[]name;
}
class teacher :public employee
{
private:
	char* maincourse;
public:
	teacher(const char* n,const char* course, int a);
	virtual~teacher();
};
teacher::teacher(const char* n, const char* course, int a) :employee(n, a)
{
	maincourse = new char[strlen(course) + 1];
	strcpy_s(maincourse, strlen(course) + 1, course);
}
teacher::~teacher()
{
	cout << "Destruct teacher " << maincourse << endl;
	if (maincourse)
		delete[]maincourse;
}
int main()
{
	employee* p[3];
	p[0] = new employee("zhangsan", 20);
	p[1] = new teacher("lisi", "C for 2 years,c++ 3 years", 26);
	p[2] = new teacher("wangwu", "data structure for 2 years,c++ 3 years", 30);
	for (int i = 0; i < 3; i++)
	{
		delete p[i];
	}
	return 0;
}