#include<iostream>
using namespace std;

int main()
{
	int size;
	cout << "Input size of numbers "; cin >> size;
	if (true)
	{
		int *A = new int[size];
		int *B = new int[size];
		cout << "Input first a number ";
		for (int i = 0; i < size; i++)
		{
			cin >> A[i];
		}
		cout << "Input second a number ";
		for (int i = 0; i < size; i++)
		{
			cin >> B[i];
		}
		bool isAaboveB = true;

		for (int i = 0; i < size; i++)
		{
			if (B[i]>A[i])
			{
				isAaboveB = false;
				break;
			}
		}
		if (A[0] < 0 && B[0] < 0)
		{
			isAaboveB = !isAaboveB;
		}
		int isAequalB = true;
		if (isAaboveB)
		{
			for (int i = 0; i < size; i++)
			{
				if (A[i] != B[i])
				{
					isAequalB = false;
					break;
				}
			}
			if (isAequalB)
			{
				for (int i = 0; i < size; i++)
				{
					cout << A[i];
				}
				cout << " = ";
				for (int i = 0; i < size; i++)
				{
					cout << B[i];
				}
				cout << endl;
			}
			else
			{
				for (int i = 0; i < size; i++)
				{
					cout << A[i];
				}
				cout << " > ";
				for (int i = 0; i < size; i++)
				{
					cout << B[i];
				}
				cout << endl;
			}
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				if (A[i]!=B[i])
				{
					isAequalB = false;
					break;
				}
			}
			if (isAequalB)
			{
				for (int i = 0; i < size; i++)
				{
					cout << A[i];
				}
				cout << " = ";
				for (int i = 0; i < size; i++)
				{
					cout << B[i];
				}
				cout << endl;
			}
			else
			{
				for (int i = 0; i < size; i++)
				{
					cout << A[i];
				}
				cout << " < ";
				for (int i = 0; i < size; i++)
				{
					cout << B[i];
				}
				cout << endl;
			}
		}
	}
	else
	{
		cout << "error_size>20_:(" << endl;
	}
	system("pause");
	return 0;
}