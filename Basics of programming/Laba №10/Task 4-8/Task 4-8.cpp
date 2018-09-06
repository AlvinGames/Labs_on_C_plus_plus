#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void inmatrix(int **A, int a, int b);
void outmatrix(int **A, int a, int b);
void positivLine(int **A, int a, int b);

int main()
{
	srand(time(NULL));
	int size_1, size_2;
	cout << "Input size of matrix "; cin >> size_1 >> size_2;
	int **A = new int*[size_1];
	for (int i = 0; i < size_1; i++)
	{
		A[i] = new int[size_2];
	}
	inmatrix(A, size_1, size_2);
	cout << "Your matrix\n";
	outmatrix(A, size_1, size_2);
	positivLine(A, size_1, size_2);
	system("pause");
	return 0;
}

void inmatrix(int ** A, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			A[i][j] = rand() % 19 - 10;
		}
	}
}

void outmatrix(int ** A, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		cout << i + 1 << ") ";
		for (int j = 0; j < b; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

void positivLine(int **A, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		bool linePositive = true;
		for (int j = 0; j < b; j++)
		{
			if (A[i][j] < 0)
			{
				linePositive = false;
				break;
			}
		}
		if (linePositive)
		{
			cout << "Yes, there are positive line. It's\n";
			cout << i + 1 << ") ";
			for (int j = 0; j < b; j++)
			{
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
	}
}
