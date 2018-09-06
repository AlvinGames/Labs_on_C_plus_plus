#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int size = 10;
	double A[size];
	double sum = 0;
	cout << "Fill the massif ";
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < size; i++)
	{
		sum += A[i];
	}
	sum /= size;
	for (int i = 0; i < size; i++)
	{
		A[i] -= sum;
	}
	cout << "Your massif ";
	for (size_t i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	system("pause");
	return 0;
}