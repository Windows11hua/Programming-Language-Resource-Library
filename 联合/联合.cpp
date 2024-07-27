#include <iostream>


union data
{
	int i;					//定义联合类型
	char ch;
	double f;
};
int main()
{
	data d;					//定义联合变量
	d.i = 97;
	std::cout << d.i << "," << d.ch << "," << d.f << std::endl;
	d.ch = 'A';
	std::cout << d.i << "," << d.ch << "," << d.f << std::endl;
	d.f = 100;
	std::cout << d.i << "," << d.ch << "," << d.f << std::endl;
	std::cout << sizeof(data) << " " << sizeof(d);
	return 0;
}