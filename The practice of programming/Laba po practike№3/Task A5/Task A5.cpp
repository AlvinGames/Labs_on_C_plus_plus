#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,("Russian"));
	int size, element;
	cout << "Input size of massif "; cin >> size;
	int *A = new int[size+1];
	cout << "Fill the massif ";
	cin >> A[0];
	for (int i = 1; i < size; i++)
	{
		bool bool_=true;
		do
		{
			cin >> element;
			if (element > A[i - 1])
			{
				A[i] = element;
				break;
			}
			else
			{
				bool_ = false;
				cout << "Числовая последовательность должна быть возрастающей" << endl;
			}
		} while (bool_);
	}
	int number;
	cout << "Input a number "; cin >> number;
	A[size] = number;
	for (int i = size; i > 0; i--)
	{
		if (A[i]<A[i-1])
		{
			int j = A[i];
			A[i] = A[i - 1];
			A[i - 1] = j;
		}
	}
	cout << "Youur massif " << endl;
	for (int i = 0; i <= size; i++)
	{
		cout << A[i] << " ";
	}
	system("pause");
	return 0;
}