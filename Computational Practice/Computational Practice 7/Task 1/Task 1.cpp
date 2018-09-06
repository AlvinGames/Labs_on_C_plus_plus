#include<iostream>

using namespace std;

int sizeLine(char *line);
int wordsCount(char *line);
char **Words(char *line, int count);
void outWord(char **mas, int count);

int main()
{
	char line[100];

	cout << "Input the line: "; gets_s(line);

	if (line[sizeLine(line) - 1] != '.')
	{
		cout << "You must set point to the end line" << endl;
		system("pause");
		return 1;
	}

	
	int countOfWords = wordsCount(line);

	char **masOfWords = Words(line, countOfWords);

	outWord(masOfWords, countOfWords);

	system("pause");
	return 0;
}

int sizeLine(char *line)
{
	int size = 0;
	for (int i = 0; line[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}
int wordsCount(char *line)
{
	int count = 0;
	for (int i = 0; i < sizeLine(line); i++)
	{
		if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\'')
		{
			count++;
			for (i; (line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\''; i++);
		}
	}
	return count;
}
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
			//if (line[k] >= 'A' && line[k] <= 'Z') line[k] += 32;
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
void outWord(char **mas, int count)
{
	bool flag = false;
	for (int i = 0; i < count; i++)
	{
		if (sizeLine(mas[i]) == 3)
		{
			flag = true;
			cout << mas[i] << " ";
		}
	}
	if (!flag) cout << "Containing 3 letters aren't present words" << endl;
	else cout << endl;
}
