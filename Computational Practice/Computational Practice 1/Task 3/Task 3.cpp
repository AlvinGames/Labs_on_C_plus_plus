#include<iostream>

using namespace std;

void input(double &);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	cout << "� ��� ���� ��� ������� ����� ������� � ������." << endl;

	for (int i = 3; i > 0; i--)
	{
		double pointX, pointY;
		cout << "������� ���������� �����: ";
		input(pointX); input(pointY);

		//��������� �������� ���������
		bool inside1 = pointX <= 50 && pointX >= -50;
		bool inside2 = pointY <= 25 && pointY >= -25;

		//������� �������� ���������
		bool inside3 = pointX < 50 && pointX > -50;
		bool inside4 = pointY < 25 && pointY > -25;

		if (inside1 && inside2)//��������� �������� ��������� � ���� ��� � ������� ����
		{
			if (inside3 && inside4)//������� �������� ��������� � ����
			{
				cout << "\n����� ������ � ������.\n" << endl;
				break;
			}
			else//����� ����������� �������� ��������� �� ������� ����
			{
				cout << "\n����� ������ �� ������� ������." << endl;
				cout << "� ��� �� ���� ������� ������!\n" << endl;
				i++;
			}
		}
		//����� ����������� �������� �������
		else
		{
			cout << "\n����� �� ������ � ������� ������." << endl;
			if (i == 2)
			{
				cout << "� ��� �������� " << i - 1 << " ������a.\n" << endl;
			}
			else if (i == 1)
			{
				cout << "� ��� �������� " << i - 1 << " �������.\n" << endl;
			}

			else
			{
				cout << "� ��� �������� " << i - 1 << " �������.\n" << endl;
			}
		}
	}

	cout << "���� ��������" << endl;

	system("pause");
	return 0;
}

void input(double &x)
{
	while (!(cin >> x) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "��� �� �����, ���������� ����� ������: " << endl;
	}
}