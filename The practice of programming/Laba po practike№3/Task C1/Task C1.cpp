#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int m, n;
	cout << "Input size of the matrix "; cin >> m >> n;
	int **K = new int *[m];
	for (int i = 0; i < m; i++)
	{
		K[i] = new int[n];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			K[i][j] = (rand() % 10) % 2;
		}
	}
	cout << endl;
	cout << "Your matrix\n";
	for (int i = 0; i <= n; i++)
	{
		cout << " " << i;
	}
	cout << endl;
	for (int i = 0; i <= n; i++)
	{
		cout << " _";
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		cout << i+1 << "| ";
		for (int j = 0; j < n; j++)
		{
			cout << K[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int empty = 0;
	for (int i = 0; i < m; i++)
	{
		bool bool_ = true;
		for (int j = 0; j < n; j++)
		{
			if (K[i][j]==1)
			{
				bool_ = false;
				break;
			}
		}
		if (bool_)
		{
			cout << "The "<< i+1 << "-st line don't have 1" << endl;
			empty++;
		}
	}
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		bool bool_ = true;
		for (int i = 0; i < m; i++)
		{
			if (K[i][j] == 1)
			{
				bool_ = false;
				break;
			}
		}
		if (bool_)
		{
			cout << "The " << j + 1 << "-st column don't have 1" << endl;
			empty++;
		}
	}
	if (empty==0)
	{
		cout << "There aren't lines or columns" << endl;
	}
	system("pause");
	return 0;
}