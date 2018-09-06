#include<iostream>

using namespace std;

void sortOfmas(double *mas, int size);
void input(int &number);
void fillMas(double *mas, int size);
bool increase(double *mas, int size);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int sizeA;
	int sizeB;
	
	cout << "Введите размер первого массива: "; input(sizeA);
	while (sizeA <= 0)
	{
		cout << "Размер массива должен быть положительным: ";
		input(sizeA);
	}

	cout << "Введите размер второго массива: "; input(sizeB);
	while (sizeB <= 0)
	{
		cout << "Размер массива должен быть положительным: ";
		input(sizeB);
	}

	double *A = new double[sizeA];
	double *B = new double[sizeB];
	
	cout << "Зполните первый массив:" << endl;
	fillMas(A, sizeA);
	while (!increase(A, sizeA))
	{
		cout << "Ваш массив должен возрастать!" << endl;
		cout << "Заполните заново массив:" << endl;
		fillMas(A, sizeA);
	}

	cout << "Заполните второй массив:" << endl;
	fillMas(B, sizeB);
	while (!increase(B, sizeB))
	{
		cout << "Ваш массив должен возрастать!" << endl;
		fillMas(B, sizeB);
	}

	int sizeC = sizeA + sizeB;
	double *C = new double[sizeC];

	int i = 0;
	for (int j = 0; j < sizeA; j++)
	{
		C[i] = A[j];
		i++;
	}
	for (int j = 0; j < sizeB; j++)
	{
		C[i] = B[j];
		i++;
	}

	sortOfmas(C, sizeC);

	cout << "Ваш массив: " << endl;
	for (int i = 0; i < sizeC; i++)
	{
		cout << C[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

void sortOfmas(double *mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (mas[j] < mas[min]) min = j;
		}
		swap(mas[min], mas[i]);
	}
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
void input(double &n)
{
	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Это не число, попробуйте снова ввести: ";
	}
}
void fillMas(double * mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ")" << " ";
		input(mas[i]);
	}
}
bool increase(double * mas, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (mas[i] > mas[i + 1]) return false;
	}
	return true;
}
