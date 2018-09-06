//Найти сумму всех двузначных целых положительных чисел и вывести её на экран.

#include<iostream>

using namespace std;

int main()
{
	int sumOfNumbers = 0;

	for (int i = 10; i < 100; i++)
	{
		sumOfNumbers += i;
	}

	cout << "Сумма всех положительных двузначныз чисел = " << sumOfNumbers << endl;

	system("pause");
	return 0;
}