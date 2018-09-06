#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, r, f, x1, x2, dx;
	cout << "input interaval and step "; cin >> x1 >> x2 >> dx;
	for (x = x1; x <= x2; x += dx)
	{
		bool result1 = (x >= -10 && x < -6);
		bool result2 = (x >= -6 && x < -4);
		bool result3 = (x >= -4 && x < 2);
		bool result4 = (x >= 2 && x <= 4);
		if (x >= -10 && x <= 4)
		{
			if (result1)
			{
				cout << "input radius "; cin >> r;
				f = -sqrt(r*r - pow(x + 8, 2)) + 2;
			}
			if (result2)
			{
				f = 2;
			}
			if (result3)
			{
				f = -2 * x + 3;
			}
			if (result4)
			{
				f = x - 3;
			}
			cout << "F(" << x << ")= " << f << endl;
		}
		else
		{
			cout << "error" << endl;
		}
	}
	system("pause");
	return 0;
}