#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int size;
	cout << "Input size of massif "; cin >> size;
	int *A = new int[size];
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
			if (z > max)
			{
				max = z;
				k = i;
			}
		}
	}
	cout << "\nThe most found number:" << A[k] << endl;
	system("pause");
	return 0;
}