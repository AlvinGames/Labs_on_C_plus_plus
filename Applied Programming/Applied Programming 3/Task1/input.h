//#pragma once

#ifndef INPUT_H
#define INPUT_H

#include<iostream>
#include<string>

using namespace std;

void input(int &data)
{
	while (!(cin >> data) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "You must input the integer number: ";
	}
}
void input(string &number, int length)
{
	bool format;
	do
	{
		format = true;
		cin >> number;
		while (number.length() != length)
		{
			cout << "\nwrong format of phone!" << endl;
			cout << "try again input number of mobile phone: ";
			cin >> number;
		}
		int size = number.length();
		for (int i = 0; i < size; i++)
		{
			bool telephone = number[i] >= '0' && number[i] <= '9';
			if (!telephone)
			{
				cout << "\nwrong format of phone!" << endl;
				cout << "try again input number of mobile phone: ";
				format = false;
				break;
			}
		}
	} while (!format);
}

#endif