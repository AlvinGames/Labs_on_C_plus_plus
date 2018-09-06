#include<iostream>
using namespace std;

int main()
{
	int size;
	cout << "Input size of numbers "; cin >> size;
	if (size>20)
	{
		int *A = new int[size];
		int *B = new int[size];
		int *C = new int[size + 1];
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
		for (int i = 1; i <= size; i++)
		{
			C[i] = A[i] + B[i];
		}
		for (int i = 0; i < size; i++)
		{
			C[i] ++;
			C[i] %= 10;
		}
		for (int i = 0; i < size; i++)
		{
			cout << A[i];
		}
		cout << " + ";
		for (int i = 0; i < size; i++)
		{
			cout << B[i];
		}
		cout << " = ";
		for (int i = 0; i <= size; i++)
		{
			cout << C[i];
		}
		cout << endl;
	}
	else
	{
		cout << "error_size>20_:(" << endl;
	}
	system("pause");
	return 0;
}