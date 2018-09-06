#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	const int size = 100;
	int A[size];
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 101;
	}
	cout << "Your massif before\n";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << "\nYour massif after" << endl;
	int j = 0;
	for (int i = size; i >0 ; i--)
	{
		j++;
		cout << A[i] << " ";
		if (j % 6 == 0)
		{
			cout << endl;
		}
	}
	system("pause");
	return 0;
}