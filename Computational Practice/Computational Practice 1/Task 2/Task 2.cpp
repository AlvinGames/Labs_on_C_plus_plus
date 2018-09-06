#include<iostream>

using namespace std;

void input(int &);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int date, month;
	cout << "¬ведите число даты: ";	input(date);

	while (date < 1 || date > 31)
	{
		cout << "ќшибка! „исло не может превосходить 31" << endl;
		cout << "¬ведите число даты: "; input(date);
	}

	cout << "¬ведите номер мес€ца: "; input(month);

	while (month < 1 || month > 12)
	{
		cout << "ќшибка! Ќомер мес€ца не может превосходить 12" << endl;
		cout << "¬ведите номер мес€ца: "; input(month);
	}

	cout << "¬аша дата " << date << "-е число\t";
	cout << month << "-й мес€ц " << endl;

	system("pause");
	return 0;
}

void input(int &x)
{
	while (!(cin >> x) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "¬ы должны ввести натуральное число: " << endl;
	}
}