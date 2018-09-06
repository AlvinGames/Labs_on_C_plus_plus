#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	const int size = 10;
	double A[size];
	cout << "Fill the massif ";
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	int max = 0, min = 0;
	for (int i = 0; i < size; i++)
	{
		if (A[i]>A[max])
		{
			max = i;
		}
		else if(A[i]<A[min])
		{
			min = i;
		}
	}
	double sum = 0, f = fabs(max - min) - 1;
	if (max > min && f != 0)
	{
		for (int i = min + 1; i < max; i++)
		{
			sum += A[i];
		}
		cout << sum / f << endl;
	}
	else if (min > max && f != 0)
	{
		for (int i = max+1; i < min; i++)
		{
			sum += A[i];
		}
		cout << sum / f << endl;
	}
	else
	{
		cout << "Sum = 0" << endl;
	}
	system("pause");
	return 0;
}