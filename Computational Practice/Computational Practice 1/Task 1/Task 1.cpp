#include<iostream>

using namespace std;

void input(double &);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	double num1, num2, num3;
	cout << "Введите 3 любых числа: ";
	input(num1); input(num2); input(num3);

	bool aAndb = (num1*num2 < 0);
	bool bAndc = (num2*num3 < 0);
	bool cAnda = (num3*num1 < 0);

	if (aAndb || bAndc || cAnda)
	{
		cout << "Среди данных чисел есть хотя бы одна пара взаимно противоположных." << endl;
	}
	else
	{
		cout << "Среди данных чисел нет взаимно противоположных чисел." << endl;
	}

	system("pause");
	return 0;
}

void input(double &x)
{
	while (!(cin >> x) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Это не число, попробуйте снова ввести: " << endl;
	}
}