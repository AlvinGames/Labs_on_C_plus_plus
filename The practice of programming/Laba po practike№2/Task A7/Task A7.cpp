#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned int number, control_number, finish_number=0, i = 0;
	cout << "Input a number "; cin >> number;
	control_number = number;
	do
	{
		if (number % 10 != 7 && number % 10 != 3)
		{

			finish_number += (number % 10)*pow(10,i);
			i++;
			number /= 10;
		}
		else
		{
			number /= 10;
		}
	} while (number>0);
	cout << finish_number << endl;
	system("pause");
	return 0;
}