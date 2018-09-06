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

#endif