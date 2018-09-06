#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, f, x1, x2, dx;
	cout << "input interaval and step "; cin >> x1 >> x2 >> dx;
	for (x = x1; x <= x2; x += dx)
	{
		bool result1 = (x >= -9 && x < -7);
		bool result2 = (x >= -7 && x < -3);
		bool result3 = (x >= -3 && x < -2);
		bool result4 = (x >= -2 && x < 2);
		bool result5 = (x >= 2 && x < 4);
		bool result6 = (x >= 4 && x <= 7);
		if (x >= -9 && x <= 7)
		{
			if (result1)
			{
				f = 0;
			}
			if (result2)
			{
				f = x + 7;
			}
			if (result3)
			{
				f = 4;
			}
			if (result4)
			{
				f = x*x;
			}
			if (result5)
			{
				f = -2 * x + 8;
			}
			if (result6)
			{
				f = 0;
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