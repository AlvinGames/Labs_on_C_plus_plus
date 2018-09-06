//#pragma once

#include<iostream>
#include<fstream>
#include<Windows.h>
#include<cmath>

using namespace std;

#ifndef VOCABULARY_MOD
#define VOCABULARY_MOD

//возвращает длину строки
int sizeLine(char *line)
{
	int size = 0;
	for (int i = 0; line[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}

//выводит матрицу на консоль
void coutMatrix(char**matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << matrix[i] << endl;
		//cout <<	"_" << sizeLine(matrix[i]) << endl;
		Sleep(25);
	}
}

//выводит массив чисел
void coutMas(double *mas, int numOfWords)
{
	for (int i = 0; i < numOfWords; i++)
	{
		cout << mas[i] << endl;
		Sleep(25);
	}
}

//возвращает количество слов словаря
int getSizeLib()
{
	ifstream vocabulary("sentiments.txt");

	int sizeOfVocabulary = 0;

	for (int i = 0; !vocabulary.eof(); i++)
	{
		char str[100];
		vocabulary.getline(str, 100);
		sizeOfVocabulary++;
	}
	return sizeOfVocabulary;
}

//возвращает массив строк словаря
char **getWordsLib(int sizeStr)
{
	char **mas = new char*[sizeStr];
	ifstream vocabulary("sentiments.txt");

	for (int i = 0; i < sizeStr; i++)
	{
		char str[100];
		vocabulary.getline(str, 100);
		int sizeOfline = sizeLine(str) + 1;
		mas[i] = new char[sizeOfline];
		for (int j = 0; j < sizeOfline; j++)
		{
			mas[i][j] = str[j];
		}
	}
	return mas;
}

//отделяет слово из строки
char *getLineBeforeСomma(char *string, int size)
{
	int index;
	for (int i = 0; i < size; i++)
	{
		if (string[i] == ',')
		{
			index = i;
			break;
		}
	}
	char *line = new char[index];

	for (int i = 0; i < index; i++)
	{
		line[i] = string[i];
	}
	line[index] = '\0';
	return line;
}

//возвращает массив слов без цифр из словаря
char **getMasWords(char **matrix, int numOfWords)
{
	char **masWords = new char*[numOfWords];
	for (int i = 0; i < numOfWords; i++)
	{
		int sizeOfLine1 = sizeLine(matrix[i]);//длина строки матрицы слов словаря
		char *line = getLineBeforeСomma(matrix[i], sizeOfLine1);//получаем строку слова без цифр
		int sizeOfLine2 = sizeLine(line);//длина строки слова без цифр

		masWords[i] = new char[sizeOfLine2 + 1];
		for (int j = 0; j < sizeOfLine2; j++)
		{
			masWords[i][j] = line[j];
		}
		masWords[i][sizeOfLine2] = '\0';
	}
	return masWords;
}

//отделяет цифру из строки
char *getLineAfterComma(char *string, int size)
{
	int index;
	for (int i = 0; i < size; i++)
	{
		if (string[i] == ',')
		{
			index = i;
			break;
		}
	}

	int sizeOfLine = size - 1 - index;
	char *line = new char[sizeOfLine];

	int j = 0;

	for (int i = index + 1; string[i] != '\0'; i++)
	{
		line[j] = string[i];
		j++;
	}
	line[j] = '\0';
	return line;
}

//преобразует строку в цифру
double getNumber(char *strNumber, int size)
{
	double number = 0;
	bool point = false;
	int pos = -1, count = 0;

	for (count; strNumber[count] != '.'; count++);
	if (strNumber[0] == '-') count--;

	for (int i = 0; i < size; i++)
	{
		bool num = (strNumber[i] >= '0' && strNumber[i] <= '9');

		if (num && !point)//конвертация цифр до точки
		{
			number += (strNumber[i] - '0') * pow(10, count - 1);
			count--;
		}

		if (strNumber[i] == '.') point = true;

		if (num && point)//конвертация цифр после точки
		{
			number += (strNumber[i] - '0') * pow(10, pos);
			pos--;
		}
	}

	if (strNumber[0] == '-') number *= -1;

	return number;
}

//возвращает массив цифр из словаря
double *getMasNumbers(char **matrix, int numOfWords)
{
	double *masNumbers = new double[numOfWords];
	for (int i = 0; i < numOfWords; i++)
	{
		char *strNum = getLineAfterComma(matrix[i], sizeLine(matrix[i]));
		//cout << "strNum = " << strNum << endl;
		double number = getNumber(strNum, sizeLine(strNum));
		//cout << "number = " << number << endl;
		masNumbers[i] = number;
	}
	return masNumbers;
}

#endif VOCABULARY_MOD
