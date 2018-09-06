#include "String.h"

/*0*/int sizeLine(char *line)
{
	int size = 0;
	for (int i = 0; line[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}

/*1*/int WordsCount(char *line)
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

/*2*/char **Words(char *line)
{
	int count = WordsCount(line);
	char **matrix = new char*[count];
	for (int i = 0; i < count; i++)
	{
		matrix[i] = new char[30];
	}
	int i = 0, j = 0, size = sizeLine(line);
	bool flag = true;
	bool end = (line[size - 1] >= 'a' && line[size - 1] <= 'z');
	bool end1 = (line[size - 1] >= 'A' && line[size - 1] <= 'Z');

	if (!(end || end1)) flag = false;

	for (int k = 0; k < size; k++)
	{
		bool smallLetter = (line[k] >= 'a' && line[k] <= 'z');
		bool bigLetter = (line[k] >= 'A' && line[k] <= 'Z');
		bool number = (line[k] >= '0' && line[k] <= '9');
		bool smallLetter1 = (line[k - 1] >= 'a' && line[k - 1] <= 'z');
		bool bigLetter1 = (line[k - 1] >= 'A' && line[k - 1] <= 'Z');
		bool number1 = (line[k - 1] >= '0' && line[k - 1] <= '9');

		if (smallLetter || bigLetter || number)
		{
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

/*3*/char *longWord(char *line)
{
	char **matrix = Words(line);
	int maxi = 0;//индекс самого длинного слова
	int maxCount = sizeLine(matrix[0]);//количество букв в проверяемом слове
	for (int i = 1; i < WordsCount(line); i++)
	{
		if (sizeLine(matrix[i]) > maxCount)
		{
			maxCount = sizeLine(matrix[i]);
			maxi = i;
		}
	}
	return matrix[maxi];
}

/*4*/void DelWords(char * line, char ch)
{
	char **matrix = Words(line);
	int countWords = WordsCount(line);//счётчик количества слов
	for (int i = 0; i < countWords; i++)
	{	
		//проверка совпадения последнего символа слова с введённым символом, где i-номер слова, sizeLine(matrix[i])-1 - длина i-го слова
		bool deleteWord = matrix[i][sizeLine(matrix[i]) - 1] == ch;
		if (deleteWord)
		{
			//при выполнении условия происходит сдвиг слов
			for (int j = i; j < countWords - 1; j++)//перебираем все слова не считая последнего
			{
				matrix[j] = matrix[j + 1];
			}
			//delete []matrix[countWords - 1];//удаление последней строки
			countWords--;//уменьшение счётчика количетка слов на 1
			i--;//возврат индекса к первому слову
		}
	}
	for (int i = 0; i < countWords; i++)
	{
		cout << matrix[i] << " ";
	}
	cout << endl;
}

/*5*/void DelShortWords(char * line)
{
	char **matrix = Words(line);
	int countWords = WordsCount(line);//счётчик количества слов
	for (int i = 0; i < countWords; i++)
	{
		
		bool deleteWord = sizeLine(matrix[i]) == 1;
		if (deleteWord)
		{
			//при выполнении условия происходит сдвиг слов
			for (int j = i; j < countWords - 1; j++)//перебираем все слова не считая последнего
			{
				matrix[j] = matrix[j + 1];
			}
			//delete matrix[countWords - 1];//удаление последней строки
			countWords--;//уменьшение счётчика количетка слов на 1
			i--;//возврат индекса к первому слову
		}
	}
	for (int i = 0; i < countWords; i++)
	{
		cout << matrix[i] << " ";
	}
	cout << endl;
}

/*6*/int WordCount(char *line, char *word)
{
	char **matrix = Words(line);
	int count = 0;
	for (int i = 0; i < WordsCount(line); i++)
	{
		//char *string = matrix[i];
		bool strEqualWord = true;
		for (int j = 0; j < sizeLine(matrix[i]); j++)
		{
			if (matrix[i][j] != word[j])
			{
				strEqualWord = false;
				break;
			}
		}
		if (strEqualWord)
		{
			count++;
		}
	}
	return count;
}

/*7*/void SingleWords(char *line)
{
	char **matrix = Words(line);
	for (int i = 0; i < WordsCount(line); i++)
	{
		//берётся первое слово
		char *string1 = matrix[i];
		int count = 0;
		for (int j = 0; j < WordsCount(line); j++)
		{
			//берётся второе слово
			char *string2 = matrix[j];
			bool str1Equalstr2 = true;
			for (int k = 0; k < sizeLine(string1); k++)
			{
				//сравнивается первое со вторым
				if (string1[k] != string2[k])
				{
					str1Equalstr2 = false;
					break;
				}
			}
			//если равны наисляется +1 в счётчик count
			if (str1Equalstr2 &&  j != i)
			{
				count++;
			}
			if (count > 0)
			{
				break;
			}
		}
		//если слово ни разу не встречается, мы его выводим
		if (count == 0)
		{
			cout << matrix[i] << " ";
		}
	}
}

/*8*/void ABCOrder(char *line)
{
	char **matrix = Words(line);
	for (int i = 0; i < WordsCount(line); i++)
	{

		int min = i;
		for (int j = i + 1; j < WordsCount(line); j++)
		{
			
			if (matrix[j][0] < matrix[min][0])
			{
				min = j;
			}
		}
		char *empty = matrix[i];
		matrix[i] = matrix[min];
		matrix[min] = empty;
	}
	for (int i = 0; i < WordsCount(line); i++)
	{
		cout << matrix[i] << " ";
	}
}

/*9*/void SortByLength(char *line)
{
	char **matrix = Words(line);
	for (int i = 0; i < WordsCount(line); i++)
	{

		int min = i;
		for (int j = i + 1; j < WordsCount(line); j++)
		{
			char *lineJ = matrix[j];
			char *lineMin = matrix[min];
			if (sizeLine(lineJ) < sizeLine(lineMin))
			{
				min = j;
			}
		}
		char *empty = matrix[i];
		matrix[i] = matrix[min];
		matrix[min] = empty;
	}
	for (int i = 0; i < WordsCount(line); i++)
	{
		cout << matrix[i] << " ";
	}
}

/*10*/int SortByLength(char * line, char * word)
{
	int i = 0;
	int pos = 0;
	bool triger = true;
	for (i = 0; i < sizeLine(line); i++)
	{
		if (line[i] >= 'a' && line[i] <= 'z' || line[i] >= 'A' && line[i] <= 'Z')
		{
			bool lineEquWord = true;
			if (triger)
			{
				pos = i;
			}
			for (int j = 0; j < sizeLine(word); j++)
			{
				if (line[i] != word[j])
				{
					lineEquWord = false;
					triger = true;
					break;
				}
				i++;
			}
			if (lineEquWord)
			{
				return pos;
			}
			else
			{
				while (line[i] >= 'a' && line[i] <= 'z' || line[i] >= 'A' && line[i] <= 'Z')
				{
					i++;
				}
			}
		}
	}
	return -1;
}