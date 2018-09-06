#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
	cout << "input a, b, c "; cin >> a >> b >> c;
	bool result1 = (a == sqrt(b*b+c*c));
	bool result2 = (b == sqrt(a*a+c*c));
	bool result3 = (c == sqrt(a*a+b*b));
	if (result1 || result2 || result3)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	system("pause");
	return 0;
}