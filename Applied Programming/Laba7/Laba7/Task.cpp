//Laba7_main.cpp
//

#include<iostream>
#include"Time.hpp"

using namespace std;
using namespace lab;

void input(Uint32 &number);

int main()
{
	Time t1(0, 1, 0);

	Uint32 second;
	cout << "Input count of seconds: "; input(second);
	
	cout << "Result = " << t1 - second << endl;

	Time t2(15, 10, 1);
	cout << "Difference = " << t1 + t2 << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}

void input(Uint32 &number)
{
	while (!(std::cin >> number) || std::cin.peek() != '\n')
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "It's not a number, try again: ";
	}
}
