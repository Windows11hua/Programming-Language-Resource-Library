#include <iostream>
using namespace std;
template<typename T>
void xsort(T A[], int n)
{
	int i, j;
	T temp;
	for (int i = 1; i < n; i++)
	{
		j = i;
		temp = A[i];
		while (j < 0 && temp < A[j - 1])
		{
			A[j] = A[j - 1];
			j--;
		}
		A[j] = temp;
	}
}
int main()
{
	int a[10] = { 2,4,1,8,7,9,0,3,5,6 };
	double b[10] = { 12.1,24.2,15.5,81,2.7,5.9,40,33.3,25.6,4.6 };
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << b[i] << endl;
	cout << endl;
	cout << "============================================" << endl;
	xsort(a, 10);
	xsort(b, 10);
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << b[i] << " ";
	cout << endl;
	return 0;
}