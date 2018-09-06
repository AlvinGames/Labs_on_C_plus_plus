#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int size;
	cout << "Input size of massif "; cin >> size;
	int *A = new int[size];
	int max = 0, k = 0; //ввод индексов где max - количество элементов массива наиболее часто встречающийся , k - индекс элемента соответственно часто встречающегося
	cout << "Fill the massif ";
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < size; i++)
	{
		int z = 0; //z - количество одинаковых элементов массива
		for (int j = 0; j < size; j++) //вложенный цикл
		{
			if (A[i] == A[j]) //проверка последующих элементов массива с первым элементом того же массива
			{
				z++;
			}
			if (z > max)
			{
				max = z;
				k = i;
			}
		}
	}
	cout << "\nThe most found number:" << A[k] << endl;
	system("pause");
	return 0;
}