#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void fillMatrixA1(int**A, int n);
void outputMatrix1(int**A, int n);
int countNegative1(int**A, int x, int y);
void fillMatrixB1(int**B, int**A, int n);


int main()
{
	cout << "Task 2-7\n";
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
	fillMatrixA1(A, n);
	//вывод матрицы A
	cout << "Your matrix A\n";
	outputMatrix1(A, n);
	//заполнение матрицы B
	fillMatrixB1(B,A,n);
	cout << "\nYour matrix B\n";
	//вывод матрицы B
	outputMatrix1(B, n);
	system("pause");
	return 0;
}

void fillMatrixA1(int **A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 19 - 9;
		}
	}
}

void outputMatrix1(int **A, int n)
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

int countNegative1(int ** A, int x, int y)
{
	int count = 0;
	for (int i = x; i <= y; i++)
	{
		for (int j = x; j <= y; j++)
		{
			//cout << A[i][j] << ' ';
			if (A[i][j] < 0)
			{
				count++;
			}
		}
	}
	//cout << endl;
	return count;
}

void fillMatrixB1(int ** B, int **A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = countNegative1(A, i, j);
		}
	}
}
