#include<iostream>

using namespace std;

void input(int &);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int date, month;
	cout << "������� ����� ����: ";	input(date);

	while (date < 1 || date > 31)
	{
		cout << "������! ����� �� ����� ������������ 31" << endl;
		cout << "������� ����� ����: "; input(date);
	}

	cout << "������� ����� ������: "; input(month);

	while (month < 1 || month > 12)
	{
		cout << "������! ����� ������ �� ����� ������������ 12" << endl;
		cout << "������� ����� ������: "; input(month);
	}

	cout << "���� ���� " << date << "-� �����\t";
	cout << month << "-� ����� " << endl;

	system("pause");
	return 0;
}

void input(int &x)
{
	while (!(cin >> x) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "�� ������ ������ ����������� �����: " << endl;
	}
}