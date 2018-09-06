#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int number, i;
	cout << "Input number "; cin >> number;
	if (number > 9)
	{
		while (number%10==0)
		{
			number /= 10;
		}
		while (number>1)
		{
			if (number%10==0)
			{
				i++;
			}
			number /= 10;
		}
	}
	else
	{
		cout << "Error_num>9";
	}
	cout << i << endl;
	system("pause");
	return 0;
}