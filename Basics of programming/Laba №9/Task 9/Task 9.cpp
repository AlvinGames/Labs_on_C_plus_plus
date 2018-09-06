#include<iostream>
#include<cmath>
using namespace std;
void Function(int n);
int main()
{
	int n;
	cout << "Input n "; cin >> n;
	Function(n);
	system("pause");
	return 0;
}
void Function(int n)
{
	int number = 0;
	int j = 0;
	
	for (int i = n - 1; i >= 0; i--) //ввод первого возрастающего числа
	{
		j++;
		number += j*pow(10, i);
	}
	int a; //ввод переменной равной количеству цифр n-разрядного числа
	do
	{
		int bool_ = true; //по умолчанию число является возрастающим
		int control_number = number; //контрольное сохранение числа
		int x, y; //x - предыдущая цифра числв, y - следующая цифра числа
		do
		{
			x = control_number % 10;
			control_number /= 10;
			y = control_number % 10;
			if (x <= y) //проверка возрастания цифр числа
			{
				bool_ = false; //в противном случае число не является возрастающим
				break;
			}
			y = x; //следующая цифра становится предыдущей
		} while (control_number != 0);
		if (bool_) //логическая проверка возрастания числа
		{
			cout << number << endl; //в случае истины выводит само значение числа
		}
		number++; // повышение данного числа на 1
		a = log10(number) + 1; // расчёт разряда числа
	} while (a == n); //проверка непревышение a-разрядного числа разряда n
}
