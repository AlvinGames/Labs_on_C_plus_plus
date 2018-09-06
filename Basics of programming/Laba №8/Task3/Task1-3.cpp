#include<iostream>
#include<cmath>
using namespace std;
double f(double x)
{
	return pow(x, 3) + sin(x);
}
double max(double a, double b)
{
	if (a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	double a, b;
	cout << "Input two numbers "; cin >> a >> b;
	
	system("pause");
	return 0;
}