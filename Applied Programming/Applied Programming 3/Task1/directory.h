//#pragma once
//

#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
#include<list>
#include"input.h"

using namespace std;

list<string> mobileNum;

struct Directory
{
	int num;
	string name;
	string surname;
	string mobilePhone;
	string telePhone;

	void order(int number);
	void fill();
};

void Directory::order(int number) { num = number; }

void Directory::fill()
{
	cout << "\nInput name of subscriber: "; cin >> name;
	cout << "Input surname of subscriber: "; cin >> surname;
	cout << "Input mobile phone: ";
	bool uniqueness = true;
	do
	{
		if (!uniqueness) cout << "\nThis number already exists\nTry again: ";
		uniqueness = true;
		input(mobilePhone, 12);
		for (auto it = mobileNum.begin(); it != mobileNum.end(); it++)
			if (*it == mobilePhone) 
				uniqueness = false;
	} while (!uniqueness);
	mobileNum.push_back(mobilePhone);
	cout << "Inpute home telephone: "; input(telePhone, 5);
}

#endif