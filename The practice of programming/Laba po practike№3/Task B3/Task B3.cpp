#include<iostream>
using namespace std;

int main()
{
	int size;
	cout << "Input size of number "; cin >> size;
	if(true) //(size>20)
	{
		int *A = new int[size];
		int *B = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			cin >> A[i];
		}
		int number;
		cout << "Input a number (number<10) "; cin >> number;
		if (number<10)
		{
			B[0] = 0;
			for (int i = 0; i < size; i++)
			{
				B[i + 1] = A[i];
			}
			for (int i = 1; i <= size; i++)
			{
				B[i] *= number;
			}
			for (int i = 0; i < size; i++)
			{
				B[i] += B[i + 1] / 10;
				B[i] %= 10;
			}
			//вывод числа A
			for (int i = 0; i < size; i++)
			{
				cout << A[i];
			}
			cout << " * " << number << " = " ;
			//вывод числа B
			for (int i = 0; i <= size; i++)
			{
				cout << B[i];
			}
			cout << endl;
		}
		else cout << "error_number<10_:(" << endl;
	}
	else
	{
		cout << "error_size>20_:(" << endl;
	}
	system("pause");
	return 0;
}