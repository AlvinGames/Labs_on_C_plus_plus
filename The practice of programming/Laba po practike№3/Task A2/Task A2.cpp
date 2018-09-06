#include<iostream>
using namespace std;

int min(int *A, int size);
int max(int *A, int size);

int main()
{
	int size;
	cout << "Input sie of massif "; cin >> size;
	int *A = new int[size];
	cout << "Fill the massif ";
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	cout << "min=" << min(A, size) << endl;
	cout << "max=" << max(A, size) << endl;
	cout << "min+max=" << min(A, size) + max(A, size) << endl;
	system("pause");
	return 0;
}

int min(int *A, int size)
{
	int min = A[0];
	for (int i = 0; i < size; i+=2)
	{
		if (A[i]<min)
		{
			min = A[i];
		}
	}
	return min;
}

int max(int *A, int size)
{
	int max = A[1];
	for (int i = 1; i < size; i+=2)
	{
		if (A[i]>max)
		{
			max = A[i];
		}
	}
	return max;
}
