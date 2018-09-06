#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ("Russian"));

	cout << "У вас есть три попытки чтобы попасть в мишень." << endl;

	for (int i = 3; i > 0; i--)
	{
		int pointX, pointY;
		cout << "Введите координаты точки: ";
		cin >> pointX >> pointY;

		//нестрогая проверка координат
		bool inside1 = pointX <= 50 && pointX >= -50;
		bool inside2 = pointY <= 25 && pointY >= -25;

		//строгая проверка координат
		bool inside3 = pointX < 50 && pointX > -50;
		bool inside4 = pointY < 25 && pointY > -25;

		if (inside1 && inside2)//нестрогая проверка попадания в цель или в границу цели
		{
			if (inside3 && inside4)//строгая проверка попадания в цель
			{
				cout << "\nТочка попала в мишень.\n" << endl;
				break;
			}
			else//иначе принимается значение попадания на границу цели
			{
				cout << "\nТочка попала на границу мишени." << endl;
				cout << "У вас на одну попытку больше!\n" << endl;
				i++;
			}
		}
		//иначе принимается значение промаха
		else
		{
			cout << "\nТочка не попала в пределы мишени." << endl;
			if (i == 2)
			{
				cout << "У вас осталось " << i - 1 << " попыткa.\n" << endl;
			}
			else if (i == 1)
			{
				cout << "У вас осталось " << i - 1 << " попыток.\n" << endl;
			}
			
			else
			{
				cout << "У вас осталось " << i - 1 << " попытки.\n" << endl;
			}
		}
	}

	cout << "Игра окончена" << endl;

	system("pause");
	return 0;
}