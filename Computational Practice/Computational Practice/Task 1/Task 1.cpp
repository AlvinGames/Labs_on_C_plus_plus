#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ("Russian"));

	double num1, num2, num3;
	cout << "������� 3 ����� �����: ";
	cin >> num1 >> num2 >> num3;

	bool aAndb = (num1*num2 < 0);
	bool bAndc = (num2*num3 < 0);
	bool cAnda = (num3*num1 < 0);

	if (aAndb || bAndc || cAnda)
	{
		cout << "����� ������ ����� ���� ���� �� ���� ���� ������� ���������������." << endl;
	}
	else
	{
		cout << "����� ������ ����� ��� ������� ��������������� �����." << endl;
	}

	system("pause");
	return 0;
}