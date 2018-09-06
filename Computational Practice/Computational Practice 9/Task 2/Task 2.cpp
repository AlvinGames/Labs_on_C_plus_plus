//Task2_main.cpp
//

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#define FILE1 "Text.dat"
#define FILE2 "NewText.dat"

int countOfLines();
string* masOfLines(int);
void Register(string*, int);
void recordFile(string*, int);

int main()
{
	int size = countOfLines();

	string* mas = masOfLines(size);

	Register(mas, size);

	recordFile(mas, size);

	cout << "The text is successfully transferred to the opposite register." << endl;

	system("pause");
	return 0;
}

int countOfLines()
{
	int count = 0;
	ifstream file(FILE1);
	if (!file) {
		cout << "The file " << FILE1 << "is absent." << endl;
		system("pause");
		exit(true);
	}
	while (!file.eof())
	{
		string line;
		getline(file, line);
		count++;
	}
	file.close();
	return count;
}

string* masOfLines(int size)
{
	string* mas = new string;

	ifstream file(FILE1);
	if (!file) {
		cout << "The file " << FILE1 << "is absent." << endl;
		system("pause");
		exit(true);
	}
	for (int i = 0; i < size; i++)
		getline(file, mas[i]);
	file.close();

	return mas;
}

void Register(string* mas, int size)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < mas[i].length(); j++)
		{
			if (mas[i][j] >= 'a' && mas[i][j] <= 'z') mas[i][j] -= 32;
			else if (mas[i][j] >= 'A' && mas[i][j] <= 'Z') mas[i][j] += 32;
		}
}

void recordFile(string* mas, int size)
{
	ofstream file(FILE2);
	for (int i = 0; i < size; i++)
	{
		file << mas[i];
	}
	file.close();
}