#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int bool1_1, bool2_1;
	int bool1, bool2, bool3 = false, bool4 = true;
	int control_a, control_b, a, b; // a && b-два рядом стоящие числа в числой последовательности
	int i = 0, n1 = 0, n2 = 0; // i-счётчик количества изменения знака перед цифрой (+||-), n-счётчик ненулевых элементов
	do
	{
		cout << "Input first number "; cin >> a;
		cout << "Input second number "; cin >> b;
		control_a = a;
		control_b = b;
		do
		{
			if (control_a % 10 != 0)
			{
				n1++;
			}
			control_a /= 10;
		} while (control_a != 0); // подсчёт количества ненулеых элементов числа А
		do
		{
			if (control_b % 10 != 0)
			{
				n2++;
			}
			control_b /= 10;
		} while (control_b != 0); // подсчёт количества ненулеых элементов числа Б
		bool zero = (a % 10 == 0 && b % 10 == 0); // проверка окончания числа А и Б на 0
		bool unzero = (n1 > 1 && n2 > 1); // проверка на наличие больше чем одного ненулевого элемента числа А и Б
		if (zero)
		{
			bool1 = true;
		}
		else
		{
			bool1 = false;
			cout << "Error_zero:a&&b%==0" << endl; // локальная ошибка zero
		}
		if (unzero)
		{
			bool2 = true;
		}
		else
		{
			bool2 = false;
			cout << "Error_unzero:n1&&n2>1" << endl; // локальная ошибка unzero
		}
		if (bool1 && bool2)
		{
			do
			{
				if (a==b)
				{
					bool3 = true;
				} // проверка на равность двух переменных числовой последавательности
				if (a>b)
				{
					bool4 = false;
				} // провека возрастания числовой последовательности
				bool result1 = (a > 0 && b < 0);
				bool result2 = (a < 0 && b > 0);
				if (result1 || result2)
				{
					i++;
				} // подсчёт количества изменения знака элементов числовой последовательности
				a = b;
				do
				{
					cout << "Input next number "; cin >> b; // повторный ввод следующего элемента числвой последавательности
					control_b = b;
					do
					{
						if (control_b % 10 != 0)
						{
							n2++;
						}
						control_b /= 10;
					} while (control_b != 0);
					bool zero_1 = (b % 10 == 0);
					bool unzero_1 = (n2 > 1);
					if (zero_1)
					{
						bool1_1 = true;
					}
					else
					{
						bool1_1 = false;
						cout << "Error_zero_1:b%==0" << endl; // локальная ошибка zero_1
					}
					if (unzero_1)
					{
						bool2_1 = true;
					}
					else
					{
						bool2_1 = false;
						cout << "Error_unzero_1:n2>1" << endl; // локальная ошибка unzero_1
					}
				} while (!bool1_1 || !bool2_1);
			} while (b != 0);
		}
		else
		{
			cout << "Error_global:bool1||bool2" << endl; // глобальная ошибка bool1 || bool2
		}
	} while (!bool1 || !bool2);
	if (bool3)
	{
		cout << "yes, there are two square costing numbers" << endl;
	}
	else
	{
		cout << "no, there aren't two square costing numbers" << endl;
	}
	cout << i << endl;
	if (bool4)
	{
		cout << "yes, this numerical sequence increases " << endl;
	}
	else
	{
		cout << "no, this numerical sequence doesn't increase" << endl;
	}
	system("pause");
	return 0;
}