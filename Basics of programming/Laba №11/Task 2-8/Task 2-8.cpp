#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void fillMatrixA2(int**A, int n);
void outputMatrix2(int**A, int n);
int sumOfMatrix2(int**A, int n, int x, int y);
void fillMatrixB2(int**B, int**A, int n);


int main()
{
	cout << "Task 2-8\n";
	srand(time(NULL));
	int n;
	cout << "Input size of matrix "; cin >> n;
	//инициализация матриц
	int **A = new int*[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}
	int **B = new int*[n];
	for (int i = 0; i < n; i++)
	{
		B[i] = new int[n];
	}
	//заполнение матрицы A
	fillMatrixA2(A, n);
	//вывод матрицы A
	cout << "Your matrix A\n";
	outputMatrix2(A, n);
	//заполнение матрицы B
	fillMatrixB2(B, A, n);
	cout << "\nYour matrix B\n";
	//вывод матрицы B
	outputMatrix2(B, n);
	system("pause");
	return 0;
}

void fillMatrixA2(int **A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 19 - 9;
		}
	}
}

void outputMatrix2(int **A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

int sumOfMatrix2(int **A, int n, int x, int y)
{
	int sum = 0;
	int horizontalSum = 0;
	int verticalSum = 0;
	//суммы всех элелементов
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += A[i][j];
		}
	}
	//сумма горизонтальных элементов
	for (int i = 0; i < n; i++)
	{
		horizontalSum += A[x][i];
	}
	//сумма вертикальных элементов
	for (int i = 0; i < n; i++)
	{
		verticalSum += A[i][y];
	}
	int crossSum = horizontalSum + verticalSum - A[x][y];
	sum -= crossSum;
	return sum;
}

void fillMatrixB2(int ** B,int **A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = sumOfMatrix2(A, n, i, j);
		}
	}
}
