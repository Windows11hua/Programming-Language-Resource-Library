#include <iostream>
using namespace std;

class hhh
{
private:									//2��˽������
	int length;
	int width;
public:										//4�����з���
	void setlength(int l);					//���庯��ԭ��
	void setwidth(int w);
	int getarea();
	int getperimeter();
};
void hhh::setlength(int l)					//�����Ķ���
{
	length = l;
}
void hhh::setwidth(int w)
{
	width = w;
}
int hhh::getarea()
{
	return length * width;
}
int hhh::getperimeter()
{
	return 2 * (length + width);
}

int main()
{
	hhh r1, r2;
	r1.setlength(200);
	r1.setwidth(100);
	r2.setlength(20);
	r2.setwidth(10);
	cout << r1.getarea() << endl;
	cout << r1.getperimeter() << endl;
	cout << r2.getarea() << endl;
	cout << r2.getperimeter() << endl;
	//����������ζ���ռ�õ��ڴ�
	cout << "����������ζ���ռ�õ��ڴ�" << endl;
	cout << "hhhռ�õĴ�С��" << sizeof(hhh) << endl;
	cout << "r1ռ�õĴ�С��" << sizeof(r1) << endl;
	cout << "r1��λ�ã�" << &r1 << endl;
	cout << "r2��λ�ã�" << &r2 << endl;
	cout << &r1 + 1 << " " << &r2 + 1 << endl;
	cout << &r1 + 2 << " " << &r2 + 2 << endl;
	cout << &r1 + 3 << " " << &r2 + 3 << endl;
	return 0;
}