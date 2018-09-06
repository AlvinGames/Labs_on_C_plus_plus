#include<iostream>
#include<cmath>

using namespace std;

void input(int &number);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int number, newNumber = 0, n, numberСontrol;
	cout << "Введите натуральное число: ";
	input(number);
	while (number <= 0)
	{
		cout << "Вы должны ввести натуральное число: ";
		input(number);
	}

	n = (log10(number) + 1);
	numberСontrol = number;

	for (int i = n; i >= 0; i--)
	{newNumber += number % 10 * pow(10, i - 1);
		number /= 10;}

	if (numberСontrol == newNumber)	cout << "Число является палиндромом" << endl;
	else cout << "Число не является палиндромом" << endl;

	system("pause");
	return 0;
}

void input(int &number)
{
	while (!(cin >> number) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Вы должны ввести натуральное число: ";
	}
}