//variant 2
//by Kanatush Timofey
//вывести все слова которые начинаются и заканчиваются на одну и ту же букву, в случае отсутствия сообщить об этом

#include<iostream>
#include<fstream>
#include"lib.h"

using namespace std;

int main()
{
	bool word = false;
	int countWords = countOfWords();//количество слов в тексте
	//cout << "count of words = " << countWords << endl;

	char **masOfWords = getWords(countWords);//массив слов
	//outputMas(masOfWords, countWords);

	for (int i = 0; i < countWords; i++)
	{
		//cout << "i = " << i << endl;
		int count = wordsCount(masOfWords[i]);//количество слов "слеаленной" строке
		//cout << "count of words in string = " << count << endl;
		char **masString = words(masOfWords[i], count);//массив слов "слепенной" строки
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