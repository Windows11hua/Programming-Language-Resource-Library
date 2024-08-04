#include <iostream>
using namespace std;
class A
{
	int a;
public:
	A(int x) :a(x)
	{
		cout << "构建 A " << a << endl;
	}
};
class B :public A
{
private:
	int b, c;
	const int d;
	A x, y;
public:
	B(int v) :b(v), y(b + 2), x(b + 1), d(b), A(v)
	{
		c = v;
		cout << "构建 B " << b << " " << c << " " << d << endl;
	}
};
int main()
{
	B b1(10);
	return 0;
}