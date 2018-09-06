#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int number, controlnumber;
	cout << "Input number ending by 5 "; cin >> number;
	if (number % 10 == 5)
	{
		controlnumber = number;
		number /= 10;
		number *= number + 1;
		number *= 100;
		number += 25;
		cout << "Number " << controlnumber << " in 2 degrees = " << number << endl;
	}
	else
	{
		cout << "Error_5" << endl;
	}
	system("pause");
	return 0;
}