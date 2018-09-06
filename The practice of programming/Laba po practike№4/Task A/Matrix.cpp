#include "Matrix.h"

/*1*/void InputTwoArray(int **A, int n, int m)
{
	cout << "\nFill the matrix\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
}

/*2*/void RandomMatrix(int **A, int n, int m, int a, int b)
{
	cout << endl;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] = rand() % (b - a + 1) + a;
		}
	}
}

/*3*/void PrintMatrix(int **A, int n, int m)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n";
}

/*4*/int SumLine(int **A, int k, int m)
{
	cout << "\n";
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += A[k][i];
	}
	return sum;
}

/*5*/int MaxMatrix(int **A, int n, int m, int &maxi, int &maxj)
{
	cout << "\n";
	int max = A[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (A[i][j] > max)
			{
				max = A[i][j];
				maxi = i + 1;
				maxj = j + 1;
			}
		}
	}
	return max;
}

/*6*/void SortLine(int **A, int k, int m)
{
	for (int i = 0; i < m; i++)
	{
		int min = i;
		for (int j = i + 1; j < m; j++)
		{
			if (A[k][j] < A[k][min])
			{
				min = j;
			}
		}
		int empty = A[k][i];
		A[k][i] = A[k][min];
		A[k][min] = empty;
	}
}

/*7*/int SortedLine(int **A, int n, int m)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		bool decrease = true;
		for (int j = 0; j < m - 1; j++)
		{
			if (A[i][j]>A[i][j+1])
			{
				decrease = false;
				break;
			}
		}
		if (decrease)
		{
			k = i + 1;
		}
	}
	if (k!=0)
	{
		return k;
	}
	return -1;
}

/*8*/int ZeroColumn(int ** A, int n, int m)
{
	cout << "\n";
	for (int j = 0; j < m; j++)
	{
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (A[i][j] == 0)
			{
				count++;
			}
			if (count == 1 && A[i][j] != 0)
			{
				count = 0;
			}
			if (count >= 2)
			{
				return j + 1;
			}
		}
	}
	return -1;
}