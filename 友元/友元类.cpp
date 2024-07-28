#include <iostream>
using namespace std;
class A
{
private:
	int x;
public:
	friend class B;
};
class B
{
private:
	A a;
public:
	void set(int i)
	{
		a.x = i;
	}
	void display()
	{
		cout << "B:display:" << a.x << endl;
	}
};
int main()
{
	B b;
	b.set(10);
	b.display();
	return 0;
}