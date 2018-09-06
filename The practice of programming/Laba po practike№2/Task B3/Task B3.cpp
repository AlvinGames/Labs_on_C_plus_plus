#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	const int size = 10;
	int A[size], f;
	cout << "Fill the massif ";
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	int j = size-1;
	for (int i = 0; i < size/2; i++)
	{
		f = A[i];
		A[i] = A[j];
		A[j] = f;
		j--;
	}
	cout << "Your masiif ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	system("pause");
	return 0;
}