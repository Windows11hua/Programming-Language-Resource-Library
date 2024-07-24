#include <bits/stdc++.h>
using namespace std;
double average(struct student* p, int n);
struct student
{
	int no;
	char gander;
	int age;
	double scort;
};
int main()
{
	student s[5] = {
		{220701,'m',20,86},								//定义结构体数组并初始化
		{220702,'f',18,92},
		{220703,'m',21,82},
		{220704,'m',23,94},
		{220705,'f',21,70},
	};
	cout << "平均成绩为：" << average(s, 5) << endl;	//传递结构数组的首地址
}
double average(student* p, int n)						//第一个参数是结构指针
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (p + i)->scort;							//p+i指向下标为i的元素
	}
	return sum / 5;
}