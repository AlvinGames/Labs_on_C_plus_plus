//#pragma once
//

#ifndef INPUT_H
#define INPUT_H

#include<iostream>
#include<string>
#include<cmath>

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
void input(double &data)
{
	while (!(cin >> data) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "You must input the number: ";
	}
}
double getNumber(string strNumber)
{
	int length = size(strNumber);
	double number = 0;
	bool point = false, integer = true;
	int pos1 = 0, pos2 = -1;

	for(int i = 0; i < length; i++)//проверка на целочисленность значения
	{
		if (strNumber[i] == '.')
		{
			integer = false;
		}
	}

	if(!integer) for (pos1; strNumber[pos1] != '.'; pos1++);//нахождение количества цифр до точки
	else pos1 = length;
	if (strNumber[0] == '-') pos1--;

	for (int i = 0; i < length; i++)
	{
		bool num = (strNumber[i] >= '0' && strNumber[i] <= '9');

		if (num && !point)//конвертация цифр до точки
		{
			number += (strNumber[i] - '0') * pow(10, pos1 - 1);
			pos1--;
		}

		if (strNumber[i] == '.') point = true;

		if (num && point)//конвертация цифр после точки
		{
			number += (strNumber[i] - '0') * pow(10, pos2);
			pos2--;
		}
	}

	if (strNumber[0] == '-') number *= -1;

	return number;
}

#endif