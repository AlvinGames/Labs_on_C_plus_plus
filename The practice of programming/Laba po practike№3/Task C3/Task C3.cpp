#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

bool tipe(int **A, int j, int n);

int main()
{
	srand(time(NULL));
	int n,m;
	cout << "Input size of the matrix "; cin >> n >> m;
	int **A = new int *[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	cout << "Your the matrix\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	int k = 0;
	for (int j= 0; j < m; j++)
	{
		if (tipe(A,j,n))
		{
			k++;
		}
	}
	cout << "quantity of singular elements = " << k << endl;
	system("pause");
	return 0;
}

bool tipe(int **A, int j, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += A[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i][j] > sum - A[i][j])
		{
			cout << j+1 << " column -> " << A[i][j] << " " << endl;
			return true;
		}
	}
	return false;
}
