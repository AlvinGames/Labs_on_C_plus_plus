//����� ����� ���� ���������� ����� ������������� ����� � ������� � �� �����.

#include<iostream>

using namespace std;

int main()
{
	int sumOfNumbers = 0;

	for (int i = 10; i < 100; i++)
	{
		sumOfNumbers += i;
	}

	cout << "����� ���� ������������� ���������� ����� = " << sumOfNumbers << endl;

	system("pause");
	return 0;
}