#include <iostream>
using namespace std;


struct date
{
	int year;
	int month;
	int day;
};
struct student
{
	int no;			//ѧ��
	char gender;	//�Ա�
	date birthday;	//��������
	float score;	//�ɼ�
};
int main()
{
	student s = { 220727,'m',{2009,9,3},541.5 };
	cout << s.no << endl;
	cout << s.gender << endl;
	cout << s.birthday.year << " " << s.birthday.month << " " << s.birthday.day << endl;
	cout << s.score;
	return 0;
}