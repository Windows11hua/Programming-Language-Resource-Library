#include <iostream>
using namespace std;

struct student
{
	int no;			//ѧ��
	char gender;	//�Ա�
	int age;		//����
	float score;	//�ɼ�
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
	cout << "studentռ�õ��ֽ�����" << sizeof(student) << endl;
	cout << "s1ռ�õ��ֽ�����" << sizeof(s1);
	return 0;
}