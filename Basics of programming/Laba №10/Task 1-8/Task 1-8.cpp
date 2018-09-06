#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;

void inMassif(int *A, int n);
void outMassif(int *A, int n);
int min(int *A, int n, int &min);
int max(int *A, int n, int &max);
int sum(int *A, int n, int j, int k);

int main()
{
	int localmin = 0, localmax = 0;
	srand(time(NULL));
	int size;
	cout << "Input size of massif "; cin >> size;
	int *A = new int[size];
	inMassif(A, size); //запонение массива
	cout << "\nYour massif ";
	outMassif(A, size); //вывод мпссива
	cout << endl;
	int j = min(A, size, localmin);
	cout << "Min = " << localmin << " --> " << j + 1 << endl;
	int k = max(A, size, localmax);
	cout << "Max = " << localmax << " --> " << k + 1 << endl;
	cout << "The sum of the maximum and minimum = " << sum(A, size, j, k) << endl;
	system("pause");
	return 0;
}

void inMassif(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 10 + 1;
	}
}

void outMassif(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
}

int min(int *A, int n, int &min)
{
	min = A[0];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] <= min)
		{
			min = A[i];
			j = i;
		}
	}
	return j;
}

int max(int *A, int n, int &max)
{
	max = A[0];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] >= max)
		{
			max = A[i];
			k = i;
		}
	}
	return k;
}

int sum(int * A, int n, int j, int k)
{
	int sum = 0;
	if (j<k)
	{
		for (int i = j + 1; i < k; i++)
		{
			sum += A[i];
		}
		cout << "\nThe maximum is after a minimum" << endl;
	}
	else
	{

		for (int i = k + 1; i < j; i++)
		{
			sum += A[i];
		}
	}
	return sum;
}