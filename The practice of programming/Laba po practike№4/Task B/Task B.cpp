#include<iostream>
#include<string>
#include"String.h"

using namespace std;

int main()
{
	//setlocale(LC_ALL,("Russian"));
		const int size = 100;
		char line[size];
	//���� ������
			cout << "Enter the text: ";
		gets_s(line);
	
	//����� ���������� ����
		cout << "\nNumber of words = " << WordsCount(line) << "\n" << endl;

	//����� ������� �������� ��� ������� ����
			cout << "Your matrix of simbols";
		for (int i = 0; i != 10; i++) cout << "_";
		char **words = Words(line);
		for (int i = 0; i < WordsCount(line); i++)
	{
		cout << words[i] << " ";
	}
	
	//����� �������� �����
			cout << "\n\nLong word";
		for (int i = 0; i != 10; i++) cout << "_";
			cout << longWord(line) << endl;

	//����� ���������� �������� ��������� �����
		char word[50];
			cout << "\nInput word: ";
			cin >> word;
			cout << "\nCount of words";
		for (int i = 0; i != 10; i++) cout << "_";
			cout << WordCount(line, word) << endl;
	
	//����� ���� ������������� ������ ���� ���
			cout << "\nThe words which are found once";
		for (int i = 0; i != 10; i++) cout << "_";
		SingleWords(line);
			cout << endl;

	//����� ���� �� ��������
			cout << "\nThe sorted text alphabetically";
		for (int i = 0; i != 10; i++) cout << "_";
		ABCOrder(line);
			cout << endl;

	//����� ���� � ������� ����������� ����
			cout << "\nThe sorted text in ascending order ";
		for (int i = 0; i != 10; i++) cout << "_";
		SortByLength(line);
			cout << endl;

	//����� ������� ��������� �����
		char word1[50];
			cout << "\nInput word: ";
			cin >> word1;
			cout << "The position of word = " << SortByLength(line, word1) << endl;

	//�������� ����� ���������������� �� �������� ������
		char simbol;
			cout << "\nInput simbol: ";
			cin >> simbol;
			cout << "\nThe text after removal";
		for (int i = 0; i != 10; i++) cout << "_";
			DelWords(line, simbol);
	//fflush(stdin);//������� ������

	//�������� ������������� ����
			cout << "\nThe text has been cleared of single-letter words";
		for (int i = 0; i != 10; i++) cout << "_";
		DelShortWords(line);
			cout << endl;

	system("pause");
	return 0;
}