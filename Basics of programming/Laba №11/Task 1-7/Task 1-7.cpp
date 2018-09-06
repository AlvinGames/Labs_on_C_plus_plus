#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int sumMatrix1(int **A, int n);

int main()
{
	cout << "Task 1-7" << endl;
	srand(time(NULL));
	int n;
	cout << "Input size of matrix "; cin >> n;
	//создпние матрицы
	int **A = new int*[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}
	//заполнение матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	//вывод матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\nSum of the matrix = " << sumMatrix1(A, n) << endl;
	system("pause");
	return 0;
}

int sumMatrix1(int ** A, int n)
{
	int sum = 0;
	for (int i = 0; i < n/2; i++)
	{
		for (int j = 0; j < n/2; j++)
		{
			sum += A[i][j];
		}
	}
	for (int i = n / 2; i < n; i++)
	{
		for (int j = n / 2; j < n; j++)
		{
			sum += A[i][j];
		}
	}
	return sum;
}
