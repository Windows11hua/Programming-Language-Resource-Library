#include <iostream>
using namespace std;
class A
{
private:
	float x, y;
public:
	A(float a, float b)
	{
		x = a;
		y = b;
	}void output()
	{
		cout << x << " " << y << endl;
	}
};
int main()
{
	const A a(20, 30);
	A b(50, 60);
	//a.output();									错误，常对象不能调用普通成员函数
	b.output();
	return 0;
}