#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	const int size_1 = 10;
	int A[size_1];
	cout << "Fill the massif ";
	for (int i = 0; i < size_1; i++)
	{
		cin >> A[i];
	}
	const int size_2 = 20;
	int B[size_2];
	int j = 0;
	for (int i = 0; i < size_1; i++)
	{
		B[j]=A[i];
		B[j + 1] = A[i];
		j += 2;
	}
	cout << "Your massif ";
	for (int i = 0; i < size_2; i++)
	{
		cout << B[i] << " ";
	}
	system("pause");
	return 0;
}