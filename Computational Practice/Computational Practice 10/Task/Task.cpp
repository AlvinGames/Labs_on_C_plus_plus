//Task_masi.cpp
//

#include<iostream>
#include<string>

using namespace std;

struct Date
{
	int day;
	int month;
	int year;

	bool operator == (Date);
};

class Pupil
{
public:
	string name;
	string surname;
	string patronymic;
	Date birthday;

	static int number;

	Pupil();
};

int Pupil::number = 1;

void input(int &);
void input(Date &);

int main()
{
	Date today;

	cout << "Input the current date: " << endl;
	input(today);

	const int count = 2;
	Pupil pupils[count];

	bool flag = false;
	for (int i = 0; i < count; i++)
	{
		if (pupils[i].birthday == today)
		{
			flag = true;
			system("cls");
			cout << "Today birthday at the pupil:\n"
				<< pupils[i].name << " " << pupils[i].patronymic << " " << pupils[i].surname << endl;
		}
	}
	if (!flag)
	{
		system("cls");
		cout << "Pupils at whom today birthday are absent" << endl;
	}

	system("pause");
	return 0;
}

bool Date::operator == (Date date)
{
	return (day == date.day && month == date.month) ? true : false;
}

Pupil::Pupil()
{
	cout << endl << number << ") ";
	cout << "Input name of pupil: "; cin >> name;
	cout << "Input surname of pupil: "; cin >> surname;
	cout << "Input patronimic of pupil: "; cin >> patronymic;
	cout << "\nInput date of birthday: " << endl;

	cout << "day: "; input(birthday.day);

	while (birthday.day < 1 || birthday.day > 31)
	{
		cout << "Mistake! The number can't surpass 31" << endl;
		cout << "Try again "; input(birthday.day);
	}

	cout << "month: "; input(birthday.month);

	while (birthday.month < 1 || birthday.month > 12)
	{
		cout << "Mistake! Number of month can't surpass 12" << endl;
		cout << "Try again: "; input(birthday.month);
	}
	
	cout << "year: "; input(birthday.year);
	number++;
}

void input(int &x)
{
	while (!(cin >> x) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "It's not a number, try again: " << endl;
	}
}

void input(Date &date)
{
	cout << "day: "; input(date.day);

	while (date.day < 1 || date.day > 31)
	{
		cout << "Mistake! The number can't surpass 31" << endl;
		cout << "Try again "; input(date.day);
	}

	cout << "month: "; input(date.month);

	while (date.month < 1 || date.month > 12)
	{
		cout << "Mistake! Number of month can't surpass 12" << endl;
		cout << "Try again: "; input(date.month);
	}

	cout << "year: "; input(date.year);
}