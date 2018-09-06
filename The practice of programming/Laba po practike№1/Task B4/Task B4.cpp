#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number, n, sum = 0;
	cout << "Input number "; cin >> number;
	if (number > 9)
	{
		n = log10(number) + 1;
		n /= 2;
		int cu = pow(10, n);
		number %= cu;
		for (int i = 0; i < n; i++)
		{
			sum += number % 10;
			number /= 10;
		}
	}
	else
	{
		cout << "Error_num>9" << endl;
	}
	cout << "Sum second half digits of the number = " << sum << endl;
	system("pause");
	return 0;
}