#include <iostream>
using namespace std;
class A
{
private:
	float x, y;
public:
	A(float a, float b);
	void output();
	void output() const;
};
A::A(float a, float b)
{
	x = a;
	y = b;
}
void A::output()
{
	cout << "普通成员函数：" << endl;
	cout << x << " " << y << endl;
}
void A::output() const
{
	cout << "常成员函数:" << endl;
	cout << x << " " << y << endl;
}
int main()
{
	const A a(20, 30);
	A b(50, 60);
	a.output();								//调用常成员函数
	b.output();								//调用普通成员函数
	return 0;
}