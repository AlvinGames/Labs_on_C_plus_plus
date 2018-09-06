#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m, number, count, x1, x2;
	cout << "Inpute five-digit number "; cin >> number;
	count = log10(number) + 1;
	if (count == 5)
	{
		x1 = number / 1000;
		x2 = x1 * 100;
		number %= 100;
		m = x2 + number;
	}
	else
	{
		m = number;
	}
	cout << m << endl;
	system("pause");
	return 0;
}