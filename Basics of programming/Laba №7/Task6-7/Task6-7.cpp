#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number, sum=0, i, n;
	cout << "Input number "; cin >> number;
	n = (log10(number) + 1);
	for (i = 1; i <= n; i++)
	{
		sum += number % 10;
		number /= 10;
	}
	cout << "Sum of numbers = " << sum << endl;
	system("pause");
	return 0;
}