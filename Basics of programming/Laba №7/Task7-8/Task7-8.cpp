#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number, sum = 0, i, n, numbercontrol;
	cout << "Input number "; cin >> number;
	n = (log10(number) + 1);
	numbercontrol = number;
	for (i = n; i >= 0; i--)
	{
		sum += number % 10 * pow(10, i - 1);
		number /= 10;
	}
	if (numbercontrol == sum)
	{
		cout << "The number is the Palindrome" << endl;
	}
	else
	{
		cout << "The number isn't the Palindrome" << endl;
	}
	system("pause");
	return 0;
}