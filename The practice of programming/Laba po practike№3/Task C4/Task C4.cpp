#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	cout << "Input size of the matrix ";
	do
	{
		cin >> n;
		if (n%2==0)
		{
			cout << "Input nechetnoe number ";
		}
	} while (n % 2 == 0); // ввод размера квадратной матрицы
	int **A = new int *[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}
	// заполнение матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	// вывод матрицы
	cout << "Matrix before\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	// поиск максимального элемента матрицы на главной и побочной дигоналях
	int x=0, y=0, max = A[0][0];
	for (int i = 0; i < n; i++)
	{
		if (A[i][i] > max)
		{
			max = A[i][i];
			x = i;
			y = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i][n - i - 1] > max)
		{
			max = A[i][n - i - 1];
			x = i;
			y = n - i - 1;
		}
	}
	cout << "Max element = " << max << endl;
	int centr=n/2;
	// замена местами максимального и центрального элементов матрицы
	A[x][y] = A[centr][centr];
	A[centr][centr] = max;
	// вывод значения матрицы
	cout << "Matrix after\n";
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