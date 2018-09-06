#include <iostream>
using namespace std; 

double PowByValue(double x, int n) 
{
	double rez = 1;
	for (int i = 1; i <= fabs(n); i++)
		if (n>0)
		{
			rez *= x;
		}
		else
		{
			rez *= 1 / x;
		}
	return rez;
}

void PowByReference(double &x, int n)
{
	double rez = 1;
	for (int i = 1; i <= fabs(n); i++)
		if (n>0)
		{
			rez *= x;
		}
		else
		{
			rez *= 1 / x;
		}
	x = rez;
}

int main() {
	double x = 2; int n;
	cout << "Input n "; cin >> n;
	cout << "x = " << x << endl;
	cout << "function1 = " << PowByValue(x, n) << endl;
	cout << "x = " << x << endl;
	PowByReference(x, n);
	cout << "function and x = " << x << endl;
	system("pause");
	return 0;
}