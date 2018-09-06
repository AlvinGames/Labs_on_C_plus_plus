#include<iostream>
#include"Vocabulary.h"
#include"Text.h"

using namespace std;

int main()
{
	//////////////////////////считывание словаря//////////////////////////////////////

	int sizeOfVocabulary = getSizeLib();//количество слов в словаре
	cout << "Status: Number_of_words_" << sizeOfVocabulary << endl;

	char **masOfLib = getWordsLib(sizeOfVocabulary);//массив словаря
	//coutMatrix(masOfLib, sizeOfVocabulary);

	char **masOfWords = getMasWords(masOfLib, sizeOfVocabulary);//массив слов без цифр
	//coutMatrix(masOfWords, sizeOfVocabulary);

	double *masOfNumbers = getMasNumbers(masOfLib, sizeOfVocabulary);//массив цифр
	//coutMas(masOfNumbers, sizeOfVocabulary);

	//////////////////////////////////////////////////////////////////////////////////

	///////////////////считывание текста и сравнение со словарём///////////////////////

	double emotionalityOfText = str(masOfWords, masOfNumbers, sizeOfVocabulary);

	cout << "Emotionality of text = " << emotionalityOfText << endl;

	//////////////////////////////////////////////////////////////////////////////////
	system("pause");
	return 0;
}
