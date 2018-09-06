#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	const int size = 10;
	int A[size];
	cout << "Foll the massif ";
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	for (int i = 1; i < size-1; i++)
	{
		if (A[i] > A[i + 1] && A[i] > A[i-1])
		{
			cout << "Index the local max = " << i << endl;
		}
	}
	system("pause");
	return 0;
}