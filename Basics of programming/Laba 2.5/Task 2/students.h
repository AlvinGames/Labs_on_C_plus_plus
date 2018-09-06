//#pragma once
//

#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<fstream>
#include<string>
#include"input.h"

using namespace std;

struct Students
{
	int num;
	string name;
	string surname;
	string patronymic;
	int age;
	string gender;
	int course;
	double progress;

	void numberStudent(int number);
	void fill();
};

void Students::numberStudent(int number) { num = number; }

void Students::fill()
{
	int n; //number of gender
	cout << "\nInput name of student: "; cin >> name;
	cout << "Input surname of student: "; cin >> surname;
	cout << "Input patronomic of student: "; cin >> patronymic;
	cout << "Input age of student: "; input(age);
	cout << "Select gender of student:\n1 - man\n2 - woman" << endl;
	do { input(n); } while (n != 1 && n != 2); gender = (n == 1) ? ("man") : ("woman");
	cout << "Input number of course: "; input(course);
	cout << "Input progress of student: "; input(progress);
}

#endif