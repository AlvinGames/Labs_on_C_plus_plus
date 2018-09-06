//С некоторой даты по настоящий день прошло n дней, найти неизвестную дату.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,("Russian"));

	int day2, date, day1, month1, month2;

	cout << "Введите число текущей даты: ";
	while (!(cin >> day1) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Вы должны ввести натуральное число: ";
	}
	while (day1 > 30 || day1 < 0)
	{
		cout << "Количество дней в данной программе не може превышать 30 или быть меньше 0" << endl;
		cout << "введите повторно число даты:";
		while (!(cin >> day1) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Вы должны ввести натуральное число: ";
		}
	}

	cout << "Введите номер текущего месяца месяца: ";
	while (!(cin >> month1) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Вы должны ввести натуральное число: ";
	}
	while (month1 > 12 || month1 < 0)
	{
		cout << "Количество месяцев не может превашать 12 или быть меньше 0" << endl;
		cout << "введите повторно номер месяца:";
		while (!(cin >> month1) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Вы должны ввести натуральное число: ";
		}
	}

	cout << "Введите количество прошедших дней: ";
	while (!(cin >> day2) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Вы должны ввести натуральное число: ";
	}
	while (day2 < 0)
	{
		cout << "Количество прошедших дней не может быть меньше 0" << endl;
		cout << "введите повторно номер месяца:";
		while (!(cin >> day2) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Вы должны ввести натуральное число: ";
		}
	}
	
	date = (month1 - 1) * 30 + day1;
	date = date - day2;
	if (date < 0)
	{
		date = 360 + date;
		month2 = date / 30;
		date = date % 30;
	}
	else
	{
		month2 = date / 30;
		date = date % 30;
	}

	cout << "Ваша дата:" << endl;

	switch (month2)
	{
	case 0: cout << date << " Января" << endl; break;
	case 1: cout << date << " Февраля" << endl; break;
	case 2: cout << date << " Марта" << endl; break;
	case 3: cout << date << " Апреля" << endl; break;
	case 4: cout << date << " Мая" << endl; break;
	case 5: cout << date << " Июня" << endl; break;
	case 6: cout << date << " Июля" << endl; break;
	case 7: cout << date << " Августа" << endl; break;
	case 8: cout << date << " Сентября" << endl; break;
	case 9: cout << date << " Октября" << endl; break;
	case 10: cout << date << " Ноября" << endl; break;
	case 11: cout << date << " Декабря" << endl; break;
	default: cout << "Ошибка_такого месяца не существует" << endl; break;
	}
	system("pause");
	return 0;
}