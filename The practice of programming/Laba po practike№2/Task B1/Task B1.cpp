#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int size_1 = 10, size_2 = 5;
	int A[size_1], B[size_2];
	cout << "Input ten numbers in massif ";
	for (int i = 0; i < size_1; i++) //ввод значения элементов массива A
	{
		cin >> A[i];
	}
	int g = 0;
	for (int j = 0; j < size_1; j+=2) //присваивание элементов с чётными индексами массиву B
	{
		B[g] = A[j];
		g++;
	}
	int j = 1;
	for (int i = 0; i < size_2; i++) //сдвиг элементов с нечётными индексами массива A
	{
		A[i] = A[j];
		j += 2;
	}
	cout << "massif A = ";
	for (int i = 0; i < size_2; i++) //вывод элементов массива A
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "massif B = ";
	for (int i = 0; i < size_2; i++) //вывод элементов массива B
	{
		cout << B[i] << " ";
	}
	system("pause");
	return 0;
}