#include<iostream>

using namespace std;

void InputMas(int *mas, int size);
void OutputMas(int *mas, int size);
void SortOfMas(int *mas, int size);
int IndexOfNumber(int *mas, int size, int k);

int main()
{
	int size;
	cout << "Input size of massif: "; cin >> size;

	int *mas = new int[size];
	InputMas(mas, size);
	cout << "\nYour massif: ";
	OutputMas(mas, size);

	SortOfMas(mas, size);
	cout << "\nThe massif before sorting:" << endl;
	OutputMas(mas, size);
		cout << endl;

	int ordering;
	cout << "Input ordering of number: "; cin >> ordering;

	int index1 = IndexOfNumber(mas, size, 2), index2 = IndexOfNumber(mas, size, ordering);
	if (index1 == -1)
	{
		cout << "Error_the second element doesn't exist" << endl;
	}
	else
	{
		cout << "The second number after " << mas[0] << " it's " << mas[index1] << endl;
	}
		cout << endl;
	if (index2 == -1)
	{
		cout << "Error_the " << ordering <<" element doesn't exist" << endl;
	}
	else
	{
		cout << "The " << ordering << " number after " << mas[0] << " it's " << mas[index2] << endl;
	}

	system("pause");
	return 0;
}

void InputMas(int * mas, int size)
{
	cout << "Fill the massif: ";
	for (int i = 0; i < size; i++)
	{
		cin >> mas[i];
	}
}

void OutputMas(int * mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
		cout << endl;
}

void SortOfMas(int * mas, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int max = i;
		for (int j = i + 1; j < size; j++)
		{
			if (mas[j] > mas[max])
			{
				max = j;
			}
		}
		int empty = mas[max];
		mas[max] = mas[i];
		mas[i] = empty;
	}
}

int IndexOfNumber(int * mas, int size, int k)
{
	int count = 1;
	for (int i = 0; i < size - 1; i++)
	{
		if (mas[i] != mas[i + 1])
		{
			count++;
		}
		if (count == k)
		{
			return i + 1;
		}
	}
	return -1;
}