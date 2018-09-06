#include<iostream>
#include "Matrix.h"

using namespace std;

int main()
{
	int n, m;
	int maxi = 0, maxj = 0;

	cout << "Input size of matrix ";
	do
	{
		cin >> n >> m;
	} while (n > 10 && m > 10);
	int **A = new int*[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[m];
	}
	int number;

	cout << "If you want to fill a matrix from the console input 1, else input 2\n";
	do
	{
		cin >> number;
	} while (number > 2 || number < 1);
	switch (number)
	{
	case 1:
		InputTwoArray(A, n, m); 
		break;
	case 2: 
		cout << "\nInput random-interval "; 
		int a, b; cin >> a >> b; RandomMatrix(A, n, m, a, b); 
		break;
	default: 
		cout << "Error_:(" << endl;
		break;
	}

	cout << "Your matrix before\n";
	PrintMatrix(A, n, m);
	int k;

	cout << "Input number of line "; cin >> k;
	k--;
	cout << "Sum of the line = " << SumLine(A, k, m) << endl;
	cout << "Max element = " << MaxMatrix(A, n, m, maxi, maxj) << " and his coordinates = ";
	cout << maxi << " " << maxj << endl;
	SortLine(A, k, m);

	cout << "\nYour massif after\n";
	PrintMatrix(A, n, m);
	cout << "The line number upordochenny on decrease = " << SortedLine(A, n, m) << endl;
	cout << "The column have 2 and more zeros = " << ZeroColumn(A, n, m) << "\n" << endl;

	system("pause");
	return 0;
}