#include<iostream>
#include<cmath>
using namespace std;
double sin_f(double a)
{
	return sin(a) / a;
}
int main()
{
	int i = 0;
	double function1, function2, x=1;
	const double eps = 0.000001;
	do
	
	{
		function1 = sin_f(x);
		x /= 2;
		function2 = sin_f(x);
		i++;
	} while (fabs(function1-function2)>eps);
	cout << i << endl;
	system("pause");
	return 0;
}