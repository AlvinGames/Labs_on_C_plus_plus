#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int n;
	double sum = 0;

	cout << "Введите натуральное число: ";
	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Вы должны ввести натуральное число: ";
	}

	cout << "число = " << n << endl;

	for (int i = 0; i <= n; i++)
	{
		sum -= pow(-1, n) / sin(2 * n + 1);
	}

	cout << "Сумма = " << sum << endl;

	system("pause");
	return 0;
}