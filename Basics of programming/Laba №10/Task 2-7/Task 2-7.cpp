#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void outmassif(int *A, int size);
void positiveElements(int *A, int &x, int size);
void swap(int *A, int x, int y);

int main()
{
	srand(time(NULL));
	const int size = 10;
	int A[size];
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 101 - 50;
	}
	cout << "Your massif before\n";
	outmassif(A, size);
	for (int i = 0; i < size; i++)
	{
		int k;
		if (A[i] > 0)
		{
			k = i;
			positiveElements(A, i, size);
			swap(A, k, i);
		}
	}
	cout << "Your massif after\n";
	outmassif(A, size);
	system("pause");
	return 0;
}

void outmassif(int * A, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}

void positiveElements(int *A, int &x, int size)
{
	for (x; x < size; x++)
	{
		if (A[x] < 0)
		{
			break;
		}
	}
}

void swap(int *A, int x, int y)
{
	for (x; x < y; x++)
	{
		
	}
}

