//Task1_main.cpp
//

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#define FILE "text.dat"

int countOfLines();
string* masOfLines(int);
void insertEmptyLine(string*, int, int);
void input(int &);

int main()
{
	int k;
	bool flag = false;

	cout << "Input the number of line: "; input(k);
	
	int size = countOfLines();
	
	if (size >= k) {
		string *mas = masOfLines(size);
		insertEmptyLine(mas, size, k);

		cout << "The empty line has been successfully placed before line at number " << k << endl;
	}
	else cout << "The line at number " << k << " is absent in file " << FILE << endl;

	system("pause");
	return 0;
}

int countOfLines()
{
	int count = 0;

	fstream file(FILE, ios_base::in);
	if (!file) {
		cout << "The file " << FILE << "is absent";
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
	string *mas = new string[size];

	fstream file(FILE, ios_base::in);
	if (!file) {
		cout << "The file " << FILE << "is absent";
		system("pause");
		exit(true);
	}

	for (int i = 0; i < size; i++)
	{
		getline(file, mas[i]);
	}
	file.close();
	return mas;
}

void insertEmptyLine(string * mas, int size, int k)
{
	fstream file(FILE, ios_base::out);
	for (int i = 0; i < size; i++)
	{
		if (i == k - 1) file << endl;
		file << mas[i] << endl;
	}
	file.close();
}

void input(int &x)
{
	while (!(cin >> x) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "You must input integer a number, try again: " << endl;
	}
}
