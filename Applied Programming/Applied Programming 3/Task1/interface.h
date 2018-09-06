//#pragma once
//

#ifndef INTERFACE_H
#define INTERFACE_H

#include<iostream>
#include<fstream>
#include<list>
#include<vector>
#include"input.h"
#include"directory.h"

using namespace std;

#define FILE "data.txt"

int number = 0;

void unicRec(string file)
{
	fstream rec(file, ios_base::in);
	while (!rec.eof())
	{
		Directory data;
		rec >> data.num;
		rec >> data.name;
		rec >> data.surname;
		rec >> data.mobilePhone;
		rec >> data.telePhone;
		mobileNum.push_back(data.mobilePhone);
	}
	
	rec.close();
}

void unicRemove()
{
	for (auto it = mobileNum.begin(); it != mobileNum.end();)
		it = mobileNum.erase(it);
}

void recordFile(string file, Directory *data, int count)
{
	fstream rec(file, ios_base::out);
	for (int i = 0; i < count; i++)
	{
		rec << data[i].num << " ";
		rec << data[i].name << " ";
		rec << data[i].surname << " ";
		rec << data[i].mobilePhone << " ";
		rec << data[i].telePhone << "\n";
	}
	rec.close();
}

void createData(string file)
{
	unicRemove();

	int count;

	cout << "\nInput the size of the directory: ";
	input(count);
	while (count < 1) {
		cout << "You must input number is more than 1: ";
		input(count);
	}

	Directory *data = new Directory[count];

	for (int i = 0; i < count; i++) { number = i + 1; data[i].order(number); data[i].fill(); }

	recordFile(file, data, count);

	delete[] data;
}

int countRecord(string file)
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

Directory *checkData(string file, int count)
{
	Directory *data = new Directory[count];

	fstream rec(file, ios_base::in);
	for (int i = 0; i < count; i++)
	{
		rec >> data[i].num;
		rec >> data[i].name;
		rec >> data[i].surname;
		rec >> data[i].mobilePhone;
		rec >> data[i].telePhone;
	}
	rec.close();

	return data;
}

void viewData(string file)
{
	int count = countRecord(file);
	Directory *data = checkData(file, count);

	cout.width(3); cout << "\nNum";
	cout.width(10); cout << "Name";
	cout.width(15); cout << "Surename";
	cout.width(13); cout << "Mobile phone";
	cout.width(10); cout << "Telephone";
	cout << endl;

	for (int i = 0; i < count; i++)
	{
		cout.width(3); cout << data[i].num;
		cout.width(10); cout << data[i].name;
		cout.width(15); cout << data[i].surname;
		cout.width(13); cout << data[i].mobilePhone;
		cout.width(10); cout << data[i].telePhone << endl;
	}

	delete[] data;
}

void addData(string file)
{
	Directory data;
	if (number == 0) number = countRecord(file) + 1;
	else number++;

	data.order(number);
	data.fill();

	fstream rec(file, ios_base::app);
	rec << data.num << " ";
	rec << data.name << " ";
	rec << data.surname << " ";
	rec << data.mobilePhone << " ";
	rec << data.telePhone << "\n";
	rec.close();
}

void deleteData(string file)
{
	unicRemove();

	number--;
	list<Directory> data;

	fstream rec(file, ios_base::in);
	for (int i = 0; i < countRecord(file); i++)
	{
		Directory empty;
		string number;
		rec >> empty.num;
		rec >> empty.name;
		rec >> empty.surname;
		rec >> empty.mobilePhone;
		rec >> empty.telePhone;

		data.push_back(empty);
	}
	rec.close();

	int number;
	cout << "\nInput number of subscriber: "; input(number);

	bool isSelect = false;
	list<Directory>::iterator it = data.begin();
	//list<string>::iterator it2 = mobileNum.begin();

	for (it; it != data.end();)
	{
		if (it->num == number)
		{
			isSelect = true;
			it = data.erase(it);
			//it2 = mobileNum.erase(it2);
		}
		else { it++; /*it2++;*/ }
	}

	if (!isSelect) cout << "\nThis subscriber is absent" << endl;

	int i = 1;
	for (it = data.begin(); it != data.end(); it++)
	{
		it->num = i;
		i++;
	}

	rec.open(file, ios_base::out);
	for (it = data.begin(); it != data.end(); it++)
	{
		rec << it->num << " ";
		rec << it->name << " ";
		rec << it->surname << " ";
		rec << it->mobilePhone << " ";
		rec << it->telePhone << "\n";
	}
	rec.close();

	unicRec(FILE);

	for (auto it = mobileNum.begin(); it != mobileNum.end(); it++)
		cout << *it << endl;
}

void editData(string file)
{
	int count = countRecord(file);
	Directory *data = checkData(file, count);

	int number;
	cout << "\nInput numner of subscriber: "; input(number);

	for (int i = 0; i < count; i++)
	{
		if (data[i].num == number)
		{
			for (auto it = mobileNum.begin(); it != mobileNum.end();)
			{
				if (*it == data[i].mobilePhone) it = mobileNum.erase(it);
				else it++;
			}
			data[i].fill();
		}
	}

	recordFile(file, data, count);

	delete[] data;

	unicRemove();
	unicRec(FILE);
}

void removeData(string file)
{
	fstream rec(file, ios_base::out);
	rec.close();
}

void findData(string file)
{
	int count = countRecord(file);
	Directory *data = checkData(file, count);

	int number;
	cout << "\nInput number of subscriber: "; input(number);

	bool isSelect = false;
	bool isExcellent = false;

	for (int i = 0; i < count; i++)
	{
		if (data[i].num == number)
		{
			isSelect = true;

			cout << "Your subscriber:" << endl;
			cout << data[i].name << " ";
			cout << data[i].surname << " ";
			cout << data[i].mobilePhone << " ";
			cout << data[i].telePhone << "\n";
		}
	}

	delete[] data;

	if (!isSelect) cout << "\nThis subscriber is absent" << endl;
}

#endif