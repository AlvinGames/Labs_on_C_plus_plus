#include<iostream>
#include<cmath>
using namespace std;
double first_z_p(double a)
{
	return pow(1+1/a,a);
}
int main()
{
	int i = 0, x = 1;
	const double e = 2.7;
	double function;
	const double eps = 0.01;
	do

	{
		function = first_z_p(x);
		x += 1;
		i++;
	} while (fabs(function - e)>eps);
	cout << i << endl;
	system("pause");
	return 0;
}