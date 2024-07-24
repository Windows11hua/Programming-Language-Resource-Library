#include <iostream>
using namespace std;

namespace ns1									//名称空间ns1
{
	int fun(int x, int y);
}
namespace ns2									//名称空间ns2
{
	int fun(int x,int y);
	namespace ns3								//名称空间ns2::ns3
	{
		int fun(int x, int y);
	}
}
int ns1::fun(int x, int y)
{
	return x + y;
}
int ns2::fun(int x, int y)
{
	return x * y;
}
int ns2::ns3::fun(int x, int y)
{
	return x - y;
}
int main()
{
	cout << ns1::fun(3, 4) << endl;
	cout << ns2::fun(3, 4) << endl;
	cout << ns2::ns3::fun(3, 4) << endl;
	return 0;
}