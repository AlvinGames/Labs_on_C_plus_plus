//Вариант 2

#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

void input(int &x);
char* function(char* str, int N);
int wordsCount(char *line);
char **masOfWords(char *line);
char* intToChar(int num);
bool isNumber(char* number);

int main(int argc, char* argv[])
{
	if (argc > 2)
	{
		int size = 0;

		for (int i = 1; i < argc - 1; i++)
		{
			if(strlen(argv[i]) > 0) size += strlen(argv[i]) + 1;
		}

		size += 2;

		char* message = new char[size];
		strcpy_s(message, size, " ");

		for (int i = 1; i < argc - 1; i++)
		{
			strcat_s(message, size, argv[i]);
			strcat_s(message, size, " ");
		}

		int N = atoi(argv[argc - 1]);

		cout << function(message, N) << endl;


	}
	else
	{
		cout << "The number of arguments must be at least 2" << endl;
	}

	system("PAUSE");

	return 0;
}

void input(int &x)
{
	while (!(cin >> x) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "It's not a number, try again: " << endl;
	}
}

char* function(char* str, int N)
{
	int length = 100;
	char* message = new char[100]{ "" };

	int countOfWords = wordsCount(str);

	strcpy_s(message, length, "count of words = ");
	strcat_s(message, length, intToChar(countOfWords));

	strcat_s(message, length, " the number of words is longer than the number N = ");

	char** words = masOfWords(str);
	int count = 0;

	for (int i = 0; i < countOfWords; i++)
	{
		if (strlen(words[i]) > N) count++;
	}

	strcat_s(message, length, intToChar(count));

	return message;
}

int wordsCount(char *line)
{
	int count = 0;
	for (int i = 0; i < strlen(line); i++)
	{
		if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= '0' && line[i] <= '9') || line[i] == '\'')
		{
			count++;
			for (i; (line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= '0' && line[i] <= '9') || line[i] == '\''; i++);
		}
	}
	return count;
}

char **masOfWords(char *line)
{
	int count = wordsCount(line);

	char **matrix = new char*[count];
	for (int i = 0; i < count; i++)
	{
		matrix[i] = new char[30];
	}
	int i = 0, j = 0, size = strlen(line);
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
		else if ((!smallLetter || !bigLetter || !number) && (smallLetter1 || bigLetter1 || number1))
		{
			matrix[i][j] = '\0';
			j = 0;
			i++;
		}
	}
	if (flag) matrix[i][j] = '\0';
	return matrix;
}

char *intToChar(int num)
{
	if (num == 0)
	{
		return (char*) "0";
	}

	int n = num;
	int count = 0;

	while (n > 0)
	{
		n /= 10;
		count++;
	}

	char* mas = new char[count];

	for (int i = 0; i < count; i++)
	{
		mas[i] = num % 10 + '0';
		num /= 10;
	}

	mas[count] = '\0';

	return mas;
}

bool isNumber(char* number)
{
	for (int i = 0; i < strlen(number); i++)
	{
		if (!(number[i] > '0' && number[i] < '9' || number[i] == '-')) return false;
	}

	return true;
}
