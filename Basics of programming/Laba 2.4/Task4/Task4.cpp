/*Создание текстового файла (без вариантов).
Пусть матрица A целых чисел размером 10х10 записана по строкам в текстовый файл input.txt.
Запишите в новый файл output.txt те строки матрицы, которые упорядочены по возрастанию.*/

#include<iostream>
#include<fstream>

using namespace std;

#define size 10

int **matrixOfNumbers(string name);
void outputMatrix(int **matrix);
bool numOfLine(int *mas);
void outputLineTxt(int **matrix, string name);

int main()
{
	int **matrix = matrixOfNumbers("input.txt");//получение мартицы из текстового файла

	cout << "The matrix: " << endl;
	outputMatrix(matrix);//вывод матрицы на консоль

	outputLineTxt(matrix, "output.txt");//вывод матрицы в текстовый файл

	system("pause");
	return 0;
}

int **matrixOfNumbers(string name)
{
	int **mas = new int*[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = new int[size];
	}
	fstream in(name, ios_base::in);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			in >> mas[i][j];
		}
	}
	return mas;
}

void outputMatrix(int **matrix)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

bool numOfLine(int *mas)
{
	for (int i = 1; i < size; i++)
	{
		if (mas[i] < mas[i - 1]) return false;
	}
	return true;
}

void outputLineTxt(int ** matrix, string name)
{
	fstream out(name, ios_base::out);
	for (int i = 0; i < size; i++)
	{
		if (numOfLine(matrix[i]))
		{
			for (int j = 0; j < size; j++)
			{
				out << matrix[i][j];
				out << " ";
			}
			out << endl;
		}
	}
	out.close();
	cout << "File is edit" << endl;
}
