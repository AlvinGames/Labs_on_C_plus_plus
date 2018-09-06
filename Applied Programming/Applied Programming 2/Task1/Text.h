//#pragma once

#include<iostream>
#include<fstream>
#include<Windows.h>
#include"Vocabulary.h"

using namespace std;

#ifndef TEXT_MOD
#define TEXT_MOD

//возвращает количество слов в сообщении
int WordsCount(char *line)
{
	int count = 0;
	for (int i = 0; i < sizeLine(line); i++)
	{
		if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= '0' && line[i] <= '9') || line[i] == '\'')
		{
			count++;
			for (i; (line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= '0' && line[i] <= '9') || line[i] == '\''; i++);
		}
	}
	return count;
}

//возвращает массив слов из одной "слепленной" строки
char **Words(char *line, int count)
{
	char **matrix = new char*[count];
	for (int i = 0; i < count; i++)
	{
		matrix[i] = new char[30];
	}
	int i = 0, j = 0, size = sizeLine(line);
	bool flag = true;
	bool end = (line[size - 1] >= 'a' && line[size - 1] <= 'z');
	bool end1 = (line[size - 1] >= 'A' && line[size - 1] <= 'Z');
	bool end2 = (line[size - 1] >= '0' && line[size - 1] <= '9');

	if (!(end || end1 || end2 || line[size - 1] == '\'')) flag = false;

	for (int k = 0; k < size; k++)
	{
		bool smallLetter = (line[k] >= 'a' && line[k] <= 'z');
		bool bigLetter = (line[k] >= 'A' && line[k] <= 'Z');
		bool number = (line[k] >= '0' && line[k] <= '9');
		bool smallLetter1 = (line[k - 1] >= 'a' && line[k - 1] <= 'z');
		bool bigLetter1 = (line[k - 1] >= 'A' && line[k - 1] <= 'Z');
		bool number1 = (line[k - 1] >= '0' && line[k - 1] <= '9');

		if (smallLetter || bigLetter || number || line[k] == '\'')
		{
			if (line[k] >= 'A' && line[k] <= 'Z') line[k] += 32;
			matrix[i][j] = line[k];
			j++;
		}
		else if ((!smallLetter || !bigLetter || !number) && (smallLetter1 || bigLetter1 || number1)) //!(A && B) <=> (!A || !B)
		{
			matrix[i][j] = '\0';
			j = 0;
			i++;
		}
	}
	if (flag) matrix[i][j] = '\0';
	return matrix;
}

bool lines(char *line1, char *line2, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (line2[i] != line1[i]) return false;
	}
	return true;
}

//сверяет текст со словарём
double str(char **masOfWords, double *masOfNumbers, int sizeOfVocabulary)
{
	double emotionality = 0;

	ifstream text("poem.txt");
	for (int i = 0; !text.eof(); i++)
	{
		char masOfText[100];
		text >> masOfText;

		int count = WordsCount(masOfText);
		//cout << "count " << count << endl;
		char **mas = Words(masOfText, count);

		for (int i = 0; i < count; i++)
		{
			cout << mas[i] << endl;
			Sleep(250);
			int index;
			for (int j = 0; j < sizeOfVocabulary; j++)
			{
				int size = sizeLine(masOfWords[j]);
				if (lines(mas[i], masOfWords[j], size))
				{
					index = j;
					emotionality += masOfNumbers[index];
					break;
				}
			}
		}
	}
	return emotionality;
}

#endif TEXT_MOD