#include <iostream>
template <typename T> void swap(T& x, T& y);		//函数模板的声明
int main()
{
	char a = 'A', b = 'B';
	int c = 123, d = 456;
	double x = 12.3, y = 45.6;
	swap(a, b);
	swap(c, d);
	swap(x, y);
	std::cout << a << "," << b << std::endl;
	std::cout << c << "," << b << std::endl;
	std::cout << x << "," << y << std::endl;
	return 0;
}
template <typename T>
void swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}