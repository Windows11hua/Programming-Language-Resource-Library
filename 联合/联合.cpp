#include <iostream>


union data
{
	int i;					//������������
	char ch;
	double f;
};
int main()
{
	data d;					//�������ϱ���
	d.i = 97;
	std::cout << d.i << "," << d.ch << "," << d.f << std::endl;
	d.ch = 'A';
	std::cout << d.i << "," << d.ch << "," << d.f << std::endl;
	d.f = 100;
	std::cout << d.i << "," << d.ch << "," << d.f << std::endl;
	std::cout << sizeof(data) << " " << sizeof(d);
	return 0;
}