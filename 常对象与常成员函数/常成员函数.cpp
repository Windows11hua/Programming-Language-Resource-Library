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
	cout << "��ͨ��Ա������" << endl;
	cout << x << " " << y << endl;
}
void A::output() const
{
	cout << "����Ա����:" << endl;
	cout << x << " " << y << endl;
}
int main()
{
	const A a(20, 30);
	A b(50, 60);
	a.output();								//���ó���Ա����
	b.output();								//������ͨ��Ա����
	return 0;
}