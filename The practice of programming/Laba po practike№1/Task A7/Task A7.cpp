#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double number1, y, a, b, z;
	int x;
	cout << "input number "; cin >> number1;
	x = number1 * 1000;
	y = x % 1000;
	z = x / 1000;
	a = z / 1000;
	b = y + a;
	cout << "number = " << b << endl;
	system("pause");
	return 0;
}