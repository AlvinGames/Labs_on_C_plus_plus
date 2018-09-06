#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m1, n1, quotien1;
	cout << "Input M and N "; cin >> m1 >> n1;
	int m2 = m1, n2 = n1, quotien2, x, controlquotien;
		quotien2 = m2 / n2;
		controlquotien = quotien2;
		quotien2 %= 10;
		quotien1 = m1 / n1;

		quotien1 -= controlquotien;
		x = quotien1 * 10;
		cout << "younger figure of the whole part = " << quotien2 << endl;
		cout << "and older figure of a fractional part = " << x << endl;
		cout << "of number " << m1 / n1 << endl;
	system("pause");
	return 0;
}