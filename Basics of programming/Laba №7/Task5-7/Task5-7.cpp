#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i = 0;
	double x1, x2, dx;
	double const pi = 22 / 7;
	double const eps = 0.1;
	cout << "Input interval and step "; cin >> x1 >> x2 >> dx;
	if (x1 > 1)
	{
		for (double l = x1; l <= x2; l += dx)
		{
			i = 0;
			double sum = -1 / l, s0 = -1 / l, s1 = -1 / l;
			do
			{
				i++;
				s0 = s1;
				s1 = -1.0 * s0 * s0 / (2 * i + 1);
				sum += s1;
			} while (fabs(s0 - s1) > eps);
			cout << "arctg (" << l << ") =" << pi / 2 + sum << endl;
		}
	}
	else
	{
		cout << "Error_x>1" << endl;
	}
	system("pause");
	return 0;
}