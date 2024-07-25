//该程序出现未知错误，请不要编译。
#include <iostream>
using namespace std;
class student
{
private:
	int number;
	char* name;
	int age;
	float score;
public:
	student();
	student(const int no,const char* n, int a, float s);
	~student();										//析构函数
	void show();
};
student::student()
{
	number = 0;
	name = NULL;									//如果不提供参数，将name设置为NULL.
	age = 0;
	score = 0;
}
student::student(const int no,const char* n, int a, float s)
{
	number = no;
	name = new char[strlen(n) + 1];							//申请内存
	strcpy(name, n);								//注意！被弃用的函数
	age = a;
	score = s;
}
student::~student()
{
	if (name != NULL)
	{
		cout << name << "同学即将退学！" << endl;
		delete[]name;
	}
	else
		cout << "有一个同学即将退学！" << endl;
}
void student::show()
{
	if (name != NULL)
	{
		cout << "学号：" << number << "\t";
		cout << "姓名：" << name << "\t";
		cout << "年龄" << age << "\t";
		cout << "成绩：" << score << endl;
	}
}
int main()
{
	student s1;
	student s2(20200101, "张三", 20, 95);
	student s3(20200102, "李四", 22, 90);
	s1.show();
	s2.show();
	s3.show();
	return 0;
}
