#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n = 0;
	double x1, x2, dx;
	double const eps = 0.1;
	cout << "Input interval and step "; cin >> x1 >> x2 >> dx;
		for (double l = x1; l <= x2; l+=dx)
		{
			n = 0;
			double sum = 1, s0, s1 = l*l;
			do
			{
				n++;
				s0 = s1;
				s1 = -1 * s0 * l * l / n;
				sum += s1;
			} while (fabs(s0 - s1) > eps);
			cout << "e in degree -(" << l << ") in degree 2 = " << 1 - sum << endl;
		}
	system("pause");
	return 0;
}