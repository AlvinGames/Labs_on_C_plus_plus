#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int date, month;
	cout << "������� ����� ����: ";	cin >> date;

	while (date < 1 || date > 31)
	{
		cout << "������! ����� �� ����� ������������ 31" << endl;
		cout << "������� ����� ����: "; cin >> date;
	}

	cout << "������� ����� ������: "; cin >> month;

	while (month < 1 || month > 12)
	{
		cout << "������! ����� ������ �� ����� ������������ 12" << endl;
		cout << "������� ����� ������: "; cin >> month;
	}

	cout << "���� ���� " << date << "-� �����\t";
	cout << month << "-� ����� " << endl;

	system("pause");
	return 0;
}