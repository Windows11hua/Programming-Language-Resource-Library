#include <iostream>
using namespace std;
class Complex
{
private:
	double real;
	double imag;
public:
	Complex(double r = 0, double i = 0);
	void print();
	Complex operator +(const Complex& c);					//重载运算符+
	Complex operator -(const Complex& c);					//重载运算符-
};
Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}
void Complex::print()
{
	cout << real << "+" << imag << "i" << endl;
}
Complex Complex::operator +(const Complex& c)						//重载运算符+
{
	Complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}
Complex Complex::operator -(const Complex& c)
{
	Complex temp;
	temp.real = real - c.real;
	temp.imag = imag - c.imag;
	return temp;
}
int main()
{
	Complex a(5, 10), b(3.0, 4.0), c, d;
	c = a + b;
	d = a - b;
	cout << "c=";
	c.print();
	cout << "d=";
	d.print();
	return 0;
}