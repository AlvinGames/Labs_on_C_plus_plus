#include<iostream>

using namespace std;

bool threeDigitNumber(int *mas, int size);
void input(int &number);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int size;
	cout << "Введите размер массива: ";

	input(size);
	while (size <= 0)
	{
		cout << "Размер массива должен быть положительным: ";
		input(size);
	}

	int *mas = new int[size];

	cout << "Заполните массив целыми числами: " << endl;
	for (int i = 0; i < size; i++) input(mas[i]);

	if (threeDigitNumber(mas, size))
		cout << "Произведение чисел массива являеся трёхзначным числом" << endl;
	else
		cout << "Произведение чисел массива не являеся трёхзначным числом" << endl;

	system("pause");
	return 0;
}

bool threeDigitNumber(int * mas, int size)
{
	int multiplication = 1;

	for (int i = 0; i < size; i++)
	{
		multiplication *= mas[i];
	}

	if (multiplication / 1000 == 0 && multiplication / 100 != 0)
		return true;
	return false;
}

void input(int &n)
{
	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Вы должны ввести целое число: ";
	}
}
