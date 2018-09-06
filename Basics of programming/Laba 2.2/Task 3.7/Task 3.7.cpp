#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

struct Data
{
	string lastName;
	string firstName;
	string patronymic;
	int age;
	int course;
	int progress[3];
};

void INPUT_struct(Data *data, int size);
void OUTPUT_struct(Data *data, int size);
int CountExcellent(Data *data, int size, int course, int mark);//функция для нахождения колическтва отличников
int CountBadStudents(Data *data, int size, int course, int mark);//функция для нахождения колическтва неуспевающих студенов

int main()
{
	const int goodMark = 9; //нижний предел средней оценки отличника
	const int badMark = 4; //верхний предел средней оценки неуспевающего студента
	int numberOfData;

	cout << "Input number of students: "; cin >> numberOfData;
	cout << endl;

	Data *dataBase = new Data[numberOfData];

	INPUT_struct(dataBase, numberOfData);
	OUTPUT_struct(dataBase, numberOfData);

	int course;
	cout << "Input number of course: "; cin >> course;
		cout << endl;

		Sleep(250);
	cout << "Sum of good students = " << CountExcellent(dataBase, numberOfData, course, goodMark) << endl;
	cout << "Sum of bad students = " << CountBadStudents(dataBase, numberOfData, course, badMark) << endl;

	system("pause");
	return 0;
}

void INPUT_struct(Data *data, int size)
{
		cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Input last name: "; cin >> data[i].lastName;
		cout << "Input first name: "; cin >> data[i].firstName;
		cout << "Input patronymic: "; cin >> data[i].patronymic;
		cout << "Input age: "; cin >> data[i].age;
		cout << "Input number of course: "; cin >> data[i].course;
		for (int j = 0; j < 3; j++)
		{
			cout << "Input mark of " << j + 1 << ": "; cin >> data[i].progress[j];
		}
			cout << endl;
	}
}

void OUTPUT_struct(Data * data, int size)
{
	for (int i = 0; i < size; i++)
	{
			Sleep(250);
		cout << "Student number " << i + 1 << " :" << endl;
		cout << "\tThe last name: " << data[i].lastName << endl;
		cout << "\tThe first name: " << data[i].firstName << endl;
		cout << "\tThe patronymic: " << data[i].patronymic << endl;
		cout << "\tThe students age: " << data[i].age << endl;
		cout << "\tThe number of course: " << data[i].course << endl;
		cout << "\tThe progress:" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << "\tNumber of mark " << j + 1 << " = " << data[i].progress[j] << endl;
		}
			cout << endl;
	}
}

int CountExcellent(Data *data, int size, int course, int mark)
{
	int sumOfStudents = 0; //сумма отличников
	for (int i = 0; i < size; i++)
	{
		if (data[i].course == course) //проверка курса
		{
			int sumOfMarks = 0; //счётчик средней оценки студента
			for (int j = 0; j < 3; j++)
			{
				sumOfMarks += data[i].progress[j];
			}
			sumOfMarks /= 3;
			if (sumOfMarks >= mark) //проверка средней оценки относительно заданного предела
			{
				sumOfStudents++;
			}
		}
	}
	return sumOfStudents;
}

int CountBadStudents(Data * data, int size, int course, int mark)
{
	int sumOfStudents = 0;
	for (int i = 0; i < size; i++)
	{
		if (data[i].course == course)
		{
			int sumOfMarks = 0;
			for (int j = 0; j < 3; j++)
			{
				sumOfMarks += data[i].progress[j];
			}
			sumOfMarks /= 3;
			if (sumOfMarks < mark)
			{
				sumOfStudents++;
			}
		}
	}
	return sumOfStudents;
}
