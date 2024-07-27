#include <iostream>
using namespace std;

class complex
{
private:
	double real;
	double imag;
public:
	complex(double r = 0, double i = 0);				//��Ĭ�ϲ���ֵ�Ĺ��캯��
	complex(const complex& c);
	void print();
	complex add(const complex& c);						//�����ӷ�
	complex sub(const complex& c);						//��������
};
complex::complex(double r, double i)
{
	real = r;
	imag = i;
}
complex::complex(const complex& c)
{
	real = c.real;
	imag = c.imag;
}
void complex::print()
{
	cout << "(" << real << "," << imag << ")" << endl;
}
complex complex::add(const complex& c)						//��������������ӵĽ��
{
	complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}
complex complex::sub(const complex& c)						//����������������Ľ��
{
	complex temp;
	temp.real = real - c.real;
	temp.imag = imag - c.imag;
	return temp;
}
int main()
{
	complex a(5, 10), b(3.0, 4.0), c, d;
	cout << "a= ";
	a.print();
	cout << "b= ";
	b.print();
	cout << "c= ";
	c.print();
	for (int i = 0; i < 20; i++)
		cout << "=";
	cout << endl;
	c = a.add(b);
	d = a.sub(b);
	cout << "c= ";
	c.print();
	cout << "d= ";
	d.print();
	return 0;
}