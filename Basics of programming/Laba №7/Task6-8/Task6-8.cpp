#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number, sum = 0, i, n;
	cout << "Input number "; cin >> number;
	n = (log10(number) + 1);
	for (i = n; i > 0; i--)
	{
		sum += number % 10 * pow(10, i-1);
		number /= 10;
	}
	cout << "Inverce of number = " << sum << endl;
	system("pause");
	return 0;
}