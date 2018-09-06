#include<iostream>

using namespace std;

struct complex
{
	float re;
	float im;
};

complex read();
void print(complex number);
complex add(complex num1, complex num2);

int main()
{
	complex num1, num2;
	cout << "Input first number: " << endl;
	num1 = read();
	cout << "Input second number: " << endl;
	num2 = read();

	cout << "\nThe first number: " << endl;
	print(num1);
	cout << "The second number: " << endl;
	print(num2);
	
	complex sum = add(num1, num2);

	cout << "\nThe sum of two complex numbers = " << sum.re << " " << sum.im << endl;

	system("pause");
	return 0;
}

complex read()
{
	complex number;
	cout << "\tInput re number: "; cin >> number.re;
	cout << "\tInput im number: "; cin >> number.im;
	return number;
}

void print(complex number)
{
	cout << "\tThe re number = " << number.re << endl;
	cout << "\tThe im number = " << number.im << endl;
}

complex add(complex num1, complex num2)
{
	complex number;
	number.re = num1.re + num2.re;
	number.im = num1.im + num2.im;
	return number;
}