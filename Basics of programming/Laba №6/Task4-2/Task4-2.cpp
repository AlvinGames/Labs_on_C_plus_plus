#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, f;
	cout << "input X "; cin >> x;
	bool result1 = (x <= 3);
	bool result2 = (x > 3);
	if (result1)
	{
		f = -pow(x, 2) + 3 * x + 9;
	}
	else
	{
		f = 1 / (pow(x, 3) - 6);
	}
	cout << "F(x)=" << f << endl;
	system("pause");
	return 0;
}