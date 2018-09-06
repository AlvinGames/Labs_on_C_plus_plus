#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;

bool num(int *A, int&n);

int main()
{
	srand(time(NULL));
	int size;
	size = rand() % 10 + 1;
	cout << "Size of massif = " << size << endl;
	int *A = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(A + i) = rand() % 100 + 1;
	}
	cout << "Your massif ";
	for (int i = 0; i < size; i++)
	{
		cout << *(A + i) << " ";
	}
	cout << endl;
	if (num(A, size))
	{
		cout << "Yes, the composition is 3-digits" << endl;
	}
	else
	{
		cout << "No, the composition isn't 3-digits" << endl;
	}
	system("pause");
	return 0;
}

bool num(int *A, int &n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += *(A + i);
	}
	cout << "The sum = " << sum << endl;
	int j = log10(sum) + 1;
	cout << j << endl;
	if (j == 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}
