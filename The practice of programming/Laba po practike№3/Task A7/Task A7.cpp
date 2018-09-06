#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ("Russian"));
	int size;
	cout << "Input size of massif "; cin >> size;
	int *A = new int[size];
	int *B = new int[size];
	cout << "Fill the massif ";
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	cout << "Fill the massif ";
	for (int i = 0; i < size; i++)
	{
		cin >> B[i];
	}
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (B[j] == A[i])
			{
				count++;
			}
		}
	}
	cout << count << " элементов совпадают" << endl;
	system("pause");
	return 0;
}