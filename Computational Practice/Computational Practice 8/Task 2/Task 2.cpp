//Task2_main.cpp
//

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#define FILE "mark.dat"

struct Students
{
	string name;
	int mark[5];
};

ifstream& operator >> (ifstream &, Students &);
int countOfStudents();
Students* masOfStudents(int);
bool offset(int*);
void input(ifstream &file, int &x);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	int size = countOfStudents();

	Students* mas = masOfStudents(size);

	for (int i = 0; i < size; i++)
	{
		if (offset(mas[i].mark))
			cout << "Студент " << mas[i].name 
			<< " сдал все лабораторные." << endl;
	}

	system("pause");
	return 0;
}

ifstream& operator >> (ifstream &infile, Students &data)
{
	infile >> data.name;
	for (int i = 0; i < 5; i++)
	{
		input(infile, data.mark[i]);
	}
	return infile;
}

int countOfStudents()
{
	int count = 0;
	ifstream file(FILE);
	if (!file) {
		cout << "The file " << FILE << "is absent";
		system("pause");
		exit(true);
	}
	while (!file.eof())
	{
		Students empty;
		file >> empty;
		count++;
	}
	return count;
}

Students* masOfStudents(int size)
{
	Students* mas = new Students[size];

	ifstream file(FILE);
	if (!file) {
		cout << "The file " << FILE << "is absent";
		system("pause");
		exit(true);
	}
	for (int i = 0; i < size; i++)
	{
		file >> mas[i];
	}
	return mas;
}

bool offset(int* mark)
{
	bool flag;
	int result = 1;
	for (int i = 0; i < 5; i++)
	{
		result *= mark[i];
	}
	flag = result;
	return flag;
}

void input(ifstream &file, int &x)
{
	while (!(file >> x))
	{
		file.clear();
		while (file.get() != '\n');
		cout << "Error! " << endl;
		system("pause");
		system("cls");
	}
}