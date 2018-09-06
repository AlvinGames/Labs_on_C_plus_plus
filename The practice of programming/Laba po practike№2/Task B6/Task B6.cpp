#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, ("Russian"));
	const int size = 10;
	int A[size];
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
			if (max < z)
			{
				max = z;
				k = i;
			}
		}
	}
	cout << "\nСамое встречающееся число:" << A[k] << endl;
	system("pause");
	return 0;
}