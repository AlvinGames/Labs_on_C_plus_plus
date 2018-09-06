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
	
	cout << "������� ������ ������� �������: "; input(sizeA);
	while (sizeA <= 0)
	{
		cout << "������ ������� ������ ���� �������������: ";
		input(sizeA);
	}

	cout << "������� ������ ������� �������: "; input(sizeB);
	while (sizeB <= 0)
	{
		cout << "������ ������� ������ ���� �������������: ";
		input(sizeB);
	}

	double *A = new double[sizeA];
	double *B = new double[sizeB];
	
	cout << "�������� ������ ������:" << endl;
	fillMas(A, sizeA);
	while (!increase(A, sizeA))
	{
		cout << "��� ������ ������ ����������!" << endl;
		cout << "��������� ������ ������:" << endl;
		fillMas(A, sizeA);
	}

	cout << "��������� ������ ������:" << endl;
	fillMas(B, sizeB);
	while (!increase(B, sizeB))
	{
		cout << "��� ������ ������ ����������!" << endl;
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

	cout << "��� ������: " << endl;
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
		cout << "�� ������ ������ ����� �����: ";
	}
}
void input(double &n)
{
	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "��� �� �����, ���������� ����� ������: ";
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
