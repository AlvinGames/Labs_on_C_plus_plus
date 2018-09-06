#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void fillMartix(double **matrix, int n);
void outMatrix(double **matrix, int n);
double sumMatrix(double **matrix, int n);
void input(int &n);
void input(double &n);

int main()
{
	srand(time(NULL));

	int n;
	cout << "Input size of matrix: "; input(n);
	while (n <= 0)
	{
		cout << "The size of a matrix can't be negative!" << endl;
		cout << "Try again: "; input(n);
	}
	
	double **matrix = new double*[n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new double[n];
	}
	
	cout << "Fill the matrix:" << endl;
	fillMartix(matrix, n);

	cout << "\nYour matrix:" << endl;
	outMatrix(matrix, n);

	cout << "\nSum of the matrix = " << sumMatrix(matrix, n) << endl;

	system("pause");
	return 0;
}

void fillMartix(double ** matrix, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "[" << i + 1 << "][" << j + 1 << "] = ";
			input(matrix[i][j]);
		}
}
void outMatrix(double ** matrix, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}
double sumMatrix(double ** matrix, int n)
{
	double sum = 0;
	for (int i = 0; i < n / 2; i++)
		for (int j = 0; j < n / 2; j++)
			sum += matrix[i][j];
	for (int i = n / 2; i < n; i++)
		for (int j = n / 2; j < n; j++)
			sum += matrix[i][j];
	return sum;
}
void input(int &n)
{
	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "You mast input integer number: ";
	}
}
void input(double &n)
{
	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "It's not a number, try again: ";
	}
}