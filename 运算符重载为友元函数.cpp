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
	friend Complex operator+(const Complex& c1, const Complex& c2);
	friend Complex operator-(const Complex& c1, const Complex& c2);
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
Complex operator+(const Complex& c1, const Complex& c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
Complex operator-(const Complex& c1, const Complex& c2)
{
	Complex temp;
	temp.real = c1.real - c2.real;
	temp.imag = c1.imag - c2.imag;
	return temp;
}
int main()
{
	Complex a(1, 2), b(3.0, 4.0), c, d, e;
	c = a + b;
	d = b - 10;
	e = 20 + a;
	cout << "c=";
	c.print();
	cout << "d=";
	d.print();
	cout << "e=";
	e.print();
	return 0;
}