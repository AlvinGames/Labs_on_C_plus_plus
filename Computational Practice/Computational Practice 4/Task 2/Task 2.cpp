#include<iostream>
#include<cmath>

using namespace std;

double mathFunction(double number);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	double a;
	cout << "Enter any number: ";
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "You have to enter number: ";
	}

	while (a == 1 || a == 0)
	{
		cout << "The number can't equal 0 or 1" << endl;
		while (!(cin >> a) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "You have to enter number: ";
		}
	}

	cout << "computed result = " << mathFunction(a) << endl;

	system("pause");
	return 0;
}

double mathFunction(double n)
{
	double answer;

	answer = ((n + 1) / (pow(n, 3) + pow(n, 2) + n)) * (pow(n, 4) - n);
	if (answer == 0) answer = abs(answer);

	return answer;
}
