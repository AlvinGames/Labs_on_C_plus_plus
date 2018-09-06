#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int number, i = 0;
	cout << "Input number "; cin >> number;
	if (number > 9)
	{
		do
		{
			if (number % 10 == 0)
			{
				i++;
			}
			else
			{
				if(i>1)
				{
					break;
				}
				else
				{
					i = 0;
				}
			}
			number /= 10;
		} while (number > 0);
	}
	else
	{
		cout << "Error_num>9";
	}
	cout << i << " zero in a row" << endl;
	system("pause");
	return 0;
}