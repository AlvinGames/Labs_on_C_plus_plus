#include<iostream>
#include<cmath>

using namespace std;

void input(int &number);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int number, newNumber = 0, n, number�ontrol;
	cout << "������� ����������� �����: ";
	input(number);
	while (number <= 0)
	{
		cout << "�� ������ ������ ����������� �����: ";
		input(number);
	}

	n = (log10(number) + 1);
	number�ontrol = number;

	for (int i = n; i >= 0; i--)
	{newNumber += number % 10 * pow(10, i - 1);
		number /= 10;}

	if (number�ontrol == newNumber)	cout << "����� �������� �����������" << endl;
	else cout << "����� �� �������� �����������" << endl;

	system("pause");
	return 0;
}

void input(int &number)
{
	while (!(cin >> number) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "�� ������ ������ ����������� �����: ";
	}
}