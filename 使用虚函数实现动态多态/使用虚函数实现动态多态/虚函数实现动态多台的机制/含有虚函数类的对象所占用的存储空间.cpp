#include <iostream>
using namespace std;
class A
{
private:
	int a;
public:
	virtual void func(){}
};
class B :public A
{
private:
	int b;
public:
	virtual void fun(){}
	virtual void func1() {}
};
int main()
{
	cout << "sizeof(A) " << sizeof(A) << endl;
	cout << "sizeof(B) " << sizeof(B) << endl;
	return 0;
}