//ע�⣡�ó������δ֪��������ʱ��Ҫ����˳���
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
	~student();										//��������
	void show();
};
student::student()
{
	number = 0;
	name = NULL;									//������ṩ��������name����ΪNULL.
	age = 0;
	score = 0;
}
student::student(const int no,const char* n, int a, float s)
{
	number = no;
	name = new char[strlen(n) + 1];					//�����ڴ�
	strcpy(name, n);								//���󣺱����õĺ���
	age = a;
	score = s;
}
student::~student()
{
	if (name != NULL)
	{
		cout << name << "ͬѧ������ѧ��" << endl;
		delete[]name;
	}
	else
		cout << "��һ��ͬѧ������ѧ��" << endl;
}
void student::show()
{
	if (name != NULL)
	{
		cout << "ѧ�ţ�" << number << "\t";
		cout << "������" << name << "\t";
		cout << "����" << age << "\t";
		cout << "�ɼ���" << score << endl;
	}
}
int main()
{
	student s1;
	student s2(20200101, "����", 20, 95);
	student s3(20200102, "����", 22, 90);
	s1.show();
	s2.show();
	s3.show();
	return 0;
}