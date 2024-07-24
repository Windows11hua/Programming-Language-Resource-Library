#include <iostream>
using namespace std;

struct student
{
	int no;			//学号
	char gender;	//性别
	int age;		//年龄
	float score;	//成绩
};
int main()
{
	student s1;
	s1.no = 220727;
	s1.gender = 'm';
	s1.age = 14;
	s1.score = 541.5;
	cout << s1.no << endl;
	cout << s1.gender << endl;
	cout << s1.age << endl;
	cout << s1.score << endl;
	cout << "student占用的字节数：" << sizeof(student) << endl;
	cout << "s1占用的字节数：" << sizeof(s1);
	return 0;
}