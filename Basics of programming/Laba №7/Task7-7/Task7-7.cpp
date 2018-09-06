#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number10, n, m, i=0, number2=0;
	cout << "Input number "; cin >> number10;
	while (number10 > 0)
	{
		m = number10 / 2;
		n = number10 - m * 2;
		number10 /= 2;
		number2 += n*pow(10, i);
		i++;

	}
	cout << "Number in binary numeral system " << number2 << endl;
	system("pause");
	return 0;
}