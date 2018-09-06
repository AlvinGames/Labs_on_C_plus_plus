#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


bool swap_lines(int **A, int a, int b);

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
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	cout << "Your matrix before\n";
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	if (swap_lines(A, size_1, size_2))
	{
		cout << "\nYour matrix after\n";
		for (int i = 0; i < size_1; i++)
		{
			for (int j = 0; j < size_2; j++)
			{
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "\nThe matrix has even quantity of lines_:(\n" << endl;
	}
	system("pause");
	return 0;
}

bool swap_lines(int **A, int a, int b)
{
	if (a % 2 == 0)
	{
		for (int i = 0; i < a; i+=2)
		{
			int B;

			for (int j = 0; j < b; j++)
			{
				B = A[i][j];
				A[i][j] = A[i + 1][j];
				A[i + 1][j] = B;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}
