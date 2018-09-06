//variant 2
//by Kanatush Timofey
//������� ��� ����� ������� ���������� � ������������� �� ���� � �� �� �����, � ������ ���������� �������� �� ����

#include<iostream>
#include<fstream>
#include"lib.h"

using namespace std;

int main()
{
	bool word = false;
	int countWords = countOfWords();//���������� ���� � ������
	//cout << "count of words = " << countWords << endl;

	char **masOfWords = getWords(countWords);//������ ����
	//outputMas(masOfWords, countWords);

	for (int i = 0; i < countWords; i++)
	{
		//cout << "i = " << i << endl;
		int count = wordsCount(masOfWords[i]);//���������� ���� "����������" ������
		//cout << "count of words in string = " << count << endl;
		char **masString = words(masOfWords[i], count);//������ ���� "���������" ������
		//outputMas(masString, count);

		if (count > 1)
		{
			//cout << "FLAG_1" << endl;
			for (int j = 0; j < count; j++)
			{
				bool letter1 = identicalLetters(masString[j]);
				//cout << "word: " << masString[j] << " " << letter1 << endl;
				if (letter1)
				{
					word = true;
					outputWord(masString[j]);
				}
			}
		}
		else
		{
			//cout << "FLAG_2" << endl;
			bool letter2 = identicalLetters(masString[0]);
			//cout << "word: " << masString[0] << " " << letter2 << endl;
			if (letter2)
			{
				word = true;
				outputWord(masString[0]);
			}
		}
	}

	if (!word) error();

	//cout << "Work is complete" << endl;

	//system("pause");
	return 0;
}