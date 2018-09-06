#include <iostream>
#include <cmath>
using namespace std; 

double f(double x);

int main() {
	setlocale(LC_ALL, "Russian");
	double a;
	double b;
	double h;
	cout << "Введите границы отрезка" << endl;
	do
	{
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;

		if (a>b) cout << "Неверный ввод границ отрезка. Повторите ввод!" << endl;
	} while (a>b);

	cout << "Введите шаг вычислений" << endl;
	cout << "h=";
	cin >> h;

	for (double i = a; i <= b; i += h)
		cout << "f(" << i << ")=" << f(i) << endl;
	system("pause");
	return 0;
}

double f(double x) 
{
	if (x > 0) return -4;
	else if (x>=0 && x<=1) return x*x;
	return 2; }