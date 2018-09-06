#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Task C2 __ " << endl;
	cout << "Input size of the matrix "; cin >> n;
	// инициализация двумерной n-размерной матрицы
	int **A = new int *[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}
	int *B = new int[n];
	for (int i = 0; i < n; i++)
	{
		B[i] = i+1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = B[j];
		}
		// сдвиг влево <- элементов матрицы действительных чисел
		int k = B[0];
		for (int i = 0; i < n-1; i++)
		{
			B[i] = B[i + 1];
		}
		B[n - 1] = k;
	}
	// вывод мытрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}