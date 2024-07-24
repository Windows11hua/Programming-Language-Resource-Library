#include <iostream>
using namespace std;

namespace ns1
{
	int fun1(int x, int y)
	{
		return x + y;
	}
	int fun2(int x, int y)
	{
		return x - y;
	}
	int fun3(int x, int y)
	{
		return x * y;
	}
}
using ns1::fun1;								//声明两个函数fun1,fun2
using ns1::fun2;

int main()
{
	cout << fun1(3, 4) << endl;
	cout << fun2(3, 4) << endl;
	cout << ns1::fun3(3, 4) << endl;			//未声明fun3,需要在此处声明
	return 0;
}