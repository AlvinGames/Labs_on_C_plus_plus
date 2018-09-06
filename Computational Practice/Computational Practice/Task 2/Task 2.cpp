#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int date, month;
	cout << "¬ведите число даты: ";	cin >> date;

	while (date < 1 || date > 31)
	{
		cout << "ќшибка! „исло не может превосходить 31" << endl;
		cout << "¬ведите число даты: "; cin >> date;
	}

	cout << "¬ведите номер мес€ца: "; cin >> month;

	while (month < 1 || month > 12)
	{
		cout << "ќшибка! Ќомер мес€ца не может превосходить 12" << endl;
		cout << "¬ведите номер мес€ца: "; cin >> month;
	}

	cout << "¬аша дата " << date << "-е число\t";
	cout << month << "-й мес€ц " << endl;

	system("pause");
	return 0;
}