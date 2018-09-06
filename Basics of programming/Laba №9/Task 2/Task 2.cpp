#include<iostream>
using namespace std;
void swap(int x, int y) // данная программа не работает так как функция swap не возвращает значения перменных x и y
{
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 3; int b = 5;
	cout << "a=" << a << " b=" << b << endl;
	swap(a, b); //а тем более не присваивает никакой переменной значение функции
	cout << "a=" << a << " b=" << b << endl;
	system("pause");
	return 0;
}
