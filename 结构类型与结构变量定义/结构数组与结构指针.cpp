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
		{220701,'m',20,86},								//����ṹ�����鲢��ʼ��
		{220702,'f',18,92},
		{220703,'m',21,82},
		{220704,'m',23,94},
		{220705,'f',21,70},
	};
	cout << "ƽ���ɼ�Ϊ��" << average(s, 5) << endl;	//���ݽṹ������׵�ַ
}
double average(student* p, int n)						//��һ�������ǽṹָ��
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (p + i)->scort;							//p+iָ���±�Ϊi��Ԫ��
	}
	return sum / 5;
}