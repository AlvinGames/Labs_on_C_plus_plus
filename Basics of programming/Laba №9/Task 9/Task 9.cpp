#include<iostream>
#include<cmath>
using namespace std;
void Function(int n);
int main()
{
	int n;
	cout << "Input n "; cin >> n;
	Function(n);
	system("pause");
	return 0;
}
void Function(int n)
{
	int number = 0;
	int j = 0;
	
	for (int i = n - 1; i >= 0; i--) //���� ������� ������������� �����
	{
		j++;
		number += j*pow(10, i);
	}
	int a; //���� ���������� ������ ���������� ���� n-���������� �����
	do
	{
		int bool_ = true; //�� ��������� ����� �������� ������������
		int control_number = number; //����������� ���������� �����
		int x, y; //x - ���������� ����� �����, y - ��������� ����� �����
		do
		{
			x = control_number % 10;
			control_number /= 10;
			y = control_number % 10;
			if (x <= y) //�������� ����������� ���� �����
			{
				bool_ = false; //� ��������� ������ ����� �� �������� ������������
				break;
			}
			y = x; //��������� ����� ���������� ����������
		} while (control_number != 0);
		if (bool_) //���������� �������� ����������� �����
		{
			cout << number << endl; //� ������ ������ ������� ���� �������� �����
		}
		number++; // ��������� ������� ����� �� 1
		a = log10(number) + 1; // ������ ������� �����
	} while (a == n); //�������� ������������ a-���������� ����� ������� n
}
