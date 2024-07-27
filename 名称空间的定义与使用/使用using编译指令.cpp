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
		return x * y;
	}
	int fun3(int x, int y)
	{
		return x - y;
	}
}
using namespace ns1;
int main()
{
	cout << fun1(3, 4) << endl;
	cout << fun2(3, 4) << endl;
	cout << fun3(3, 4);
	return 0;
}