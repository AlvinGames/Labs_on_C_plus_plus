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
/*										__                __
									   /\ \__            /\ \   __
		  ___   _____    _____     ____\ \ ,_\  __  __   \_\ \ /\_\     ___         ___     ___     ___ ___
		 /'___\/\ '__`\ /\ '__`\  /',__\\ \ \/ /\ \/\ \  /'_` \\/\ \   / __`\      /'___\  / __`\  /'__` __`\
		/\ \__/\ \ \L\ \\ \ \L\ \/\__, `\\ \ \_\ \ \_\ \/\ \ \ \\ \ \ /\ \L\ \ __ /\ \__/ /\ \L\ \/\ \/\ \/\ \
		\ \____\\ \ ,__/ \ \ ,__/\/\____/ \ \__\\ \____/\ \___,_\\ \_\\ \____//\_\\ \____\\ \____/\ \_\ \_\ \_\
		 \/____/ \ \ \/   \ \ \/  \/___/   \/__/ \/___/  \/__,_ / \/_/ \/___/ \/_/ \/____/ \/___/  \/_/\/_/\/_/
				  \ \_\    \ \_\
				   \/_/     \/_/                                                                                   */
