//� ��������� ���� �� ��������� ���� ������ n ����, ����� ����������� ����.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,("Russian"));

	int day2, date, day1, month1, month2;

	cout << "������� ����� ������� ����: ";
	while (!(cin >> day1) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "�� ������ ������ ����������� �����: ";
	}
	while (day1 > 30 || day1 < 0)
	{
		cout << "���������� ���� � ������ ��������� �� ���� ��������� 30 ��� ���� ������ 0" << endl;
		cout << "������� �������� ����� ����:";
		while (!(cin >> day1) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "�� ������ ������ ����������� �����: ";
		}
	}

	cout << "������� ����� �������� ������ ������: ";
	while (!(cin >> month1) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "�� ������ ������ ����������� �����: ";
	}
	while (month1 > 12 || month1 < 0)
	{
		cout << "���������� ������� �� ����� ��������� 12 ��� ���� ������ 0" << endl;
		cout << "������� �������� ����� ������:";
		while (!(cin >> month1) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "�� ������ ������ ����������� �����: ";
		}
	}

	cout << "������� ���������� ��������� ����: ";
	while (!(cin >> day2) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "�� ������ ������ ����������� �����: ";
	}
	while (day2 < 0)
	{
		cout << "���������� ��������� ���� �� ����� ���� ������ 0" << endl;
		cout << "������� �������� ����� ������:";
		while (!(cin >> day2) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "�� ������ ������ ����������� �����: ";
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

	cout << "���� ����:" << endl;

	switch (month2)
	{
	case 0: cout << date << " ������" << endl; break;
	case 1: cout << date << " �������" << endl; break;
	case 2: cout << date << " �����" << endl; break;
	case 3: cout << date << " ������" << endl; break;
	case 4: cout << date << " ���" << endl; break;
	case 5: cout << date << " ����" << endl; break;
	case 6: cout << date << " ����" << endl; break;
	case 7: cout << date << " �������" << endl; break;
	case 8: cout << date << " ��������" << endl; break;
	case 9: cout << date << " �������" << endl; break;
	case 10: cout << date << " ������" << endl; break;
	case 11: cout << date << " �������" << endl; break;
	default: cout << "������_������ ������ �� ����������" << endl; break;
	}
	system("pause");
	return 0;
}