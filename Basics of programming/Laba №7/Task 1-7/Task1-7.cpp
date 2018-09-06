#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number1 = 0, number2 = 0, result1 = 100, number3 = 0, result2 = 100, result3=100;
	for (int i = 100; i < 1000; i++)
	{
		number1 += i;
	}
	cout << "1)sum three-digit number = " << number1 << endl;
	while (result1 < 1000)
	{
		number2 += result1;
		result1++;
	}
	cout << "2)sum three-digit number = " << number2 << endl;
	do
	{
		number3 += result3;
		result3++;
	}
	while (result3 < 1000);
	cout << "3)sum three-digit number = " << number3 << endl;
	system("pause");
	return 0;
}