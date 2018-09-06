//#pragma once
//

#ifndef INTERFACE_H
#define INTERFACE_H

#define FILE_1 "data.txt"
#define FILE_2 "search.txt"

#include<iostream>
#include<fstream>
#include<list>
#include"input.h"
#include"students.h"

using namespace std;

int number = 0;

void recordFile(string file, Students *data, int count)
{
	fstream rec(file, ios_base::out);
	for (int i = 0; i < count; i++)
	{
		rec << data[i].num << " ";
		rec << data[i].name << " ";
		rec << data[i].surname << " ";
		rec << data[i].patronymic << " ";
		rec << data[i].age << " ";
		rec << data[i].gender << " ";
		rec << data[i].course << " ";
		rec << data[i].progress << "\n";
	}
	rec.close();

	//delete[] data;
}

void createData()
{
	int count;

	cout << "\nInput the number of the registered students: ";
	input(count);
	while (count < 1){
		cout << "You must input number is more than 1: ";
		input(count); }

	Students *data = new Students[count];

	for (int i = 0; i < count; i++) { number = i + 1; data[i].numberStudent(number); data[i].fill(); }
	
	recordFile(FILE_1, data, count);

	delete[] data;
}

int countStudents(string file)
{
	int count = 0;

	fstream rec(file, ios_base::in);
	while (!rec.eof())
	{
		string empty;
		getline(rec, empty);
		count++;
	}
	rec.close();
	count--;
	return count;
}

Students *checkData(string file, int count)
{
	Students *data = new Students[count];
	
	fstream rec(file, ios_base::in);
	for (int i = 0; i < count; i++)
	{
		string number;
		rec >> data[i].num;
		rec >> data[i].name;
		rec >> data[i].surname;
		rec >> data[i].patronymic;
		rec >> data[i].age;
		rec >> data[i].gender;
		rec >> data[i].course;
		rec >> number;
		data[i].progress = getNumber(number);
	}
	rec.close();

	return data;
}

void viewData(string file)
{
	int count = countStudents(file);
	Students *data = checkData(file, count);

	cout.width(3); cout << "\nNum";
	cout.width(10); cout << "Name";
	cout.width(15); cout << "Surename";
	cout.width(15); cout << "Patronimic";
	cout.width(4); cout << "Age";
	cout.width(8); cout << "Gender";
	cout.width(7); cout << "Course";
	cout.width(10); cout << "Progress";
	cout << endl;

	for (int i = 0; i < count; i++)
	{
		cout.width(3); cout << data[i].num;
		cout.width(10); cout << data[i].name;
		cout.width(15); cout << data[i].surname;
		cout.width(15); cout << data[i].patronymic;
		cout.width(4); cout << data[i].age;
		cout.width(8); cout << data[i].gender;
		cout.width(7); cout << data[i].course;
		cout.width(10); cout << data[i].progress << endl;
	}

	delete[] data;
}

void addData()
{
	Students data;
	if (number == 0) number = countStudents(FILE_1) + 1;
	else number++;

	data.numberStudent(number);
	data.fill();

	fstream rec(FILE_1, ios_base::app);
		rec << data.num << " ";
		rec << data.name << " ";
		rec << data.surname << " ";
		rec << data.patronymic << " ";
		rec << data.age << " ";
		rec << data.gender << " ";
		rec << data.course << " ";
		rec << data.progress << "\n";
	rec.close();
}

void deleteData()
{
	list<Students> data;

	fstream rec(FILE_1, ios_base::in);
	for (int i = 0; i < countStudents(FILE_1); i++)
	{
		Students empty;
		string number;
		rec >> empty.num;
		rec >> empty.name;
		rec >> empty.surname;
		rec >> empty.patronymic;
		rec >> empty.age;
		rec >> empty.gender;
		rec >> empty.course;
		rec >> number;
		empty.progress = getNumber(number);

		data.push_back(empty);
	}
	rec.close();

	int number;
	cout << "\nInput number of student: "; input(number);

	bool isSelect = false;
	list<Students>::iterator it;

	for (it = data.begin(); it != data.end();)
	{
		if (it->num == number)
		{
			isSelect = true;
			it = data.erase(it);
		}
		else  it++;
	}

	if (!isSelect) cout << "\nThis student is absent" << endl;

	int i = 1;
	for (it = data.begin(); it != data.end(); it++)
	{
		it->num = i;
		i++;
	}

	rec.open(FILE_1, ios_base::out);
	for (it = data.begin(); it != data.end(); it++)
	{
		rec << it->num << " ";
		rec << it->name << " ";
		rec << it->surname << " ";
		rec << it->patronymic << " ";
		rec << it->age << " ";
		rec << it->gender << " ";
		rec << it->course << " ";
		rec << it->progress << "\n";
	}
	rec.close();
}

void editData()
{
	int count = countStudents(FILE_1);
	Students *data = checkData(FILE_1, count);

	int number;
	cout << "\nInput number of student: "; input(number);

	for (int i = 0; i < count; i++)
	{
		if (data[i].num == number) data[i].fill();
	}

	recordFile(FILE_1, data, count);

	delete[] data;
}

void findData()
{
	int count = countStudents(FILE_1);
	Students *data = checkData(FILE_1, count);

	int course;
	cout << "\nInput number of course: "; input(course);

	fstream rec(FILE_2, ios_base::out);
	rec.close();

	bool isSelect = false;
	bool isExcellent = false;

	for (int i = 0; i < count; i++)
	{
		if (data[i].course == course)
		{
			isSelect = true;
			if(data[i].progress == 10)
			{
				isExcellent = true;
				rec.open(FILE_2, ios_base::app);
					rec << data[i].num << " ";
					rec << data[i].name << " ";
					rec << data[i].surname << " ";
					rec << data[i].patronymic << " ";
					rec << data[i].age << " ";
					rec << data[i].gender << " ";
					rec << data[i].course << " ";
					rec << data[i].progress << "\n";
				rec.close();
			}
		}
	}

	delete[] data;

	if (!isSelect) cout << "\nThis coure is absent" << endl;
	if (!isExcellent && isSelect) cout << "\nThe excellents is absent" << endl;

	cout << "\nThe excellent";
	if (isSelect && isExcellent) viewData(FILE_2);
}

#endif