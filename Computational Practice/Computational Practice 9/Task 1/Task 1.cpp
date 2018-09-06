//Task1_main.cpp
//

#include<iostream>
#include<string>
#include<fstream>
#include<cmath>

using namespace std;

#define FILE "equation.dat"

string equalLine();
int* coefficients(string);
double differential(int, int, int);

int main()
{
	int a, b, c;
	string equation = equalLine();

	int *mas = coefficients(equation);
	a = mas[0]; b = mas[1]; c = mas[2];

	cout << "a = " << a << " b = " << b << " c = " << c << endl;

	double D = differential(a, b, c);

	cout << "Differential = " << D << endl;

	if (D > 0)
	{
		double x1, x2;
		x1 = (double(-b) + sqrt(D)) / (double)(2 * a);
		x2 = (double(-b) - sqrt(D)) / (double)(2 * a);

		cout << "x1 = " << x1 << " x2 = " << x2 << endl;
	}
	else if (D == 0)
	{
		double x = double(-b) / (double)(2 * a);
		cout << "x = " << x << endl;
	}
	else
	{
		cout << "roots are absent" << endl;
	}

	system("pause");
	return 0;
}

string equalLine()
{
	string equation;

	ifstream file(FILE);
	if (!file) {
		cout << "The file " << FILE << "is absent." << endl;
		system("pause");
		exit(true);
	}
	file >> equation;
	file.close();

	return equation;
}

int* coefficients(string line)
{
	int *mas = new int[3];
	mas[0] = 0;
	mas[1] = 0;
	mas[2] = 0;

	bool flag1 = false;
	bool flag2 = false;

	for (int i = 0; i < line.length(); i++)
	{
		if(!flag1) if (line[i] == '^' && line[i+1] == '2') mas[0] = 1;
		if(!flag2) if (line[i] == 'x' && line[i + 1] != '^') mas[1] = 1;

		if (line[i] >= '1' && line[i] <= '9')
		{
			bool flag = false;

			if (i != 0)
				if (line[i - 1] == '-') flag = true;

			int sizeNumber = 0;

			for (int j = i; line[j] >= '0' && line[j] <= '9'; j++)
			{
				sizeNumber++;
			}

			int number = 0;

			for (int j = sizeNumber - 1; j >= 0; j--)
			{
				number += (line[i] - '0')*pow(10, j);
				i++;
			}
						
			if(flag) number *= -1;

			if (line[i] == '*')
			{
				if (line[i + 2] == '^')
				{
					mas[0] = number; flag1 = true;
				}
				else { mas[1] = number; flag2 = true; }
			}
			else mas[2] = number;
		}
		else if (line[i] == '^') line[i + 1] = '!';
	}
	if (mas[0] == 0)
	{
		cout << "This equation isn't square!" << endl;
		system("pause");
		exit(true);
	}
	return mas;
}

double differential(int a, int b, int c)
{
	double D = double(pow(b, 2) - 4 * a * c);
	return D;
}