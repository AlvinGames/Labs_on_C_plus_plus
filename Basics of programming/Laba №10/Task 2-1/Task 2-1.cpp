#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void area(int *A, int &x, int size);

int main()
{
	//setlocale(LC_ALL, ("Russian"));
	srand(time(NULL));
	const int size = 200;
	int A[size];
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 101;
	}
	cout << "Your massif\n";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < size-1; i++)
	{
		if (A[i] < A[i + 1])
		{
			sum++;
			area(A, i, size);
		}
	}
	cout << sum << " increasing intervals" << endl;
	system("pause");
	return 0;
}

void area(int *A, int &x, int size)
{
	for (x; x < size-1; x++)
	{
		if (A[x]>A[x+1])
		{
			break;
		}
	}
}
