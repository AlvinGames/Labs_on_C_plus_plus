#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i = 0;
	double number;
	double const eps = 0.1;
	cout << "Input a number "; cin >> number;
	double sum = 1 + number, s0 = 1 + number, s1 = 1 + number;
		do
		{
			i++;
			s0 = s1;
			s1 = number / (i*s0);
			sum += s1;
		} while (fabs(s0 - s1) > eps);
		cout << "number e in dagree " << number << " = " << sum << endl;
		cout << "and speed = " << i << endl;
	system("pause");
	return 0;
}