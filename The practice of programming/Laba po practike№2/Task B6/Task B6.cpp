#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, ("Russian"));
	const int size = 10;
	int A[size];
	int max = 0, k = 0; //���� �������� ��� max - ���������� ��������� ������� �������� ����� ������������� , k - ������ �������� �������������� ����� ��������������

	cout << "Fill the massif ";
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < size; i++)
	{
		int z = 0; //z - ���������� ���������� ��������� �������
		for (int j = 0; j < size; j++) //��������� ����
		{
			if (A[i] == A[j]) //�������� ����������� ��������� ������� � ������ ��������� ���� �� �������
			{
				z++;
			}
			if (max < z)
			{
				max = z;
				k = i;
			}
		}
	}
	cout << "\n����� ������������� �����:" << A[k] << endl;
	system("pause");
	return 0;
}