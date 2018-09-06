//#pragma once

#ifndef MOD_LIB
#define MOD_LIB

#include<iostream>
#include<fstream>

#define FILE_1 "input.txt"
#define FILE_2 "output.txt"

using namespace std;

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

//возвращает количество слов в строке
int wordsCount(char *line)
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

//возвращает количество строк в текстовом файле
int countOfWords()
{
	fstream input(FILE_1, ios_base::in);

	int sizeOfVocabulary = 0;

	for (int i = 0; !input.eof(); i++)
	{
		char str[100];
		input >> str;
		sizeOfVocabulary++;
	}
	input.close();
	return sizeOfVocabulary;
}

void outputMas(char **mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << endl;
	}
}

//возвращает массив строк текста
char **getWords(int sizeStr)
{
	char **mas = new char*[sizeStr];
	fstream input(FILE_1, ios_base::in);

	for (int i = 0; i < sizeStr; i++)
	{
		char str[100];
		input >> str;
		int sizeOfline = sizeLine(str) + 1;
		mas[i] = new char[sizeOfline];
		for (int j = 0; j < sizeOfline; j++)
		{
			mas[i][j] = str[j];
		}
	}
	input.close();
	return mas;
}

//возвращает массив слов из одной "слепленной" строки
char **words(char *line, int count)
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

//проверяет первую и последнюю букву слова
bool identicalLetters(char *word)
{
	int size = sizeLine(word);
	if (word[0] == word[size - 1])
	{
		return true;
	}
	return false;
}

//выводит слово в текстовый файл
void outputWord( char *word)
{
	fstream output(FILE_2, ios_base::app);
	output << word << endl;
	output.close();
}

void error()
{
	fstream output(FILE_2, ios_base::out);
	output << "Such words are absent" << endl;
	output.close();
}

#endif // !MOD_LIB
