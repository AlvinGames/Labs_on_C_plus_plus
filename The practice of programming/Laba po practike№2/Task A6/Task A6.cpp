#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int bool1_1, bool2_1;
	int bool1, bool2, bool3 = false, bool4 = true;
	int control_a, control_b, a, b; // a && b-��� ����� ������� ����� � ������ ������������������
	int i = 0, n1 = 0, n2 = 0; // i-������� ���������� ��������� ����� ����� ������ (+||-), n-������� ��������� ���������
	do
	{
		cout << "Input first number "; cin >> a;
		cout << "Input second number "; cin >> b;
		control_a = a;
		control_b = b;
		do
		{
			if (control_a % 10 != 0)
			{
				n1++;
			}
			control_a /= 10;
		} while (control_a != 0); // ������� ���������� �������� ��������� ����� �
		do
		{
			if (control_b % 10 != 0)
			{
				n2++;
			}
			control_b /= 10;
		} while (control_b != 0); // ������� ���������� �������� ��������� ����� �
		bool zero = (a % 10 == 0 && b % 10 == 0); // �������� ��������� ����� � � � �� 0
		bool unzero = (n1 > 1 && n2 > 1); // �������� �� ������� ������ ��� ������ ���������� �������� ����� � � �
		if (zero)
		{
			bool1 = true;
		}
		else
		{
			bool1 = false;
			cout << "Error_zero:a&&b%==0" << endl; // ��������� ������ zero
		}
		if (unzero)
		{
			bool2 = true;
		}
		else
		{
			bool2 = false;
			cout << "Error_unzero:n1&&n2>1" << endl; // ��������� ������ unzero
		}
		if (bool1 && bool2)
		{
			do
			{
				if (a==b)
				{
					bool3 = true;
				} // �������� �� �������� ���� ���������� �������� ������������������
				if (a>b)
				{
					bool4 = false;
				} // ������� ����������� �������� ������������������
				bool result1 = (a > 0 && b < 0);
				bool result2 = (a < 0 && b > 0);
				if (result1 || result2)
				{
					i++;
				} // ������� ���������� ��������� ����� ��������� �������� ������������������
				a = b;
				do
				{
					cout << "Input next number "; cin >> b; // ��������� ���� ���������� �������� ������� ������������������
					control_b = b;
					do
					{
						if (control_b % 10 != 0)
						{
							n2++;
						}
						control_b /= 10;
					} while (control_b != 0);
					bool zero_1 = (b % 10 == 0);
					bool unzero_1 = (n2 > 1);
					if (zero_1)
					{
						bool1_1 = true;
					}
					else
					{
						bool1_1 = false;
						cout << "Error_zero_1:b%==0" << endl; // ��������� ������ zero_1
					}
					if (unzero_1)
					{
						bool2_1 = true;
					}
					else
					{
						bool2_1 = false;
						cout << "Error_unzero_1:n2>1" << endl; // ��������� ������ unzero_1
					}
				} while (!bool1_1 || !bool2_1);
			} while (b != 0);
		}
		else
		{
			cout << "Error_global:bool1||bool2" << endl; // ���������� ������ bool1 || bool2
		}
	} while (!bool1 || !bool2);
	if (bool3)
	{
		cout << "yes, there are two square costing numbers" << endl;
	}
	else
	{
		cout << "no, there aren't two square costing numbers" << endl;
	}
	cout << i << endl;
	if (bool4)
	{
		cout << "yes, this numerical sequence increases " << endl;
	}
	else
	{
		cout << "no, this numerical sequence doesn't increase" << endl;
	}
	system("pause");
	return 0;
}