#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int sumMatrix2(int **A, int n);

int main()
{
	cout << "Task 1-8" << endl;
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
	cout << "\nSum of the matrix = " << sumMatrix2(A, n) << endl;
	system("pause");
	return 0;
}

int sumMatrix2(int ** A, int n)
{
	int sum = 0;
	int k = 0;
	int h;
	if (n % 2 == 0)
	{
		h = n / 2;
	}
	else
	{
		h = n / 2 + 1;
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = k; j < n - k; j++)
		{
			sum += A[i][j];
		}
		k++;
	}
	k = n / 2 - 1;
	for (int i = h; i < n; i++)
	{
		for (int j = k; j < n - k; j++)
		{
			sum += A[i][j];
		}
		k--;
	}
	return sum;
}
