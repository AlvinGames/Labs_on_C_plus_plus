//Laba6_main.cpp
//

#include<iostream>
#include"Znak.hpp"
#include"Functional.hpp"

//using namespace std;
using namespace lab;

int main()
{
	setlocale(LC_ALL, "RU");

	Znak book[3];

	std::cout << "Fill the massià" << std::endl;
	input(book);

	sortMas(book,sort::byZodiak);

	std::cout << "Your massif" << std::endl;
	output(book);

	while (true)
	{
		Uint32 month;

		std::cout << "Input number of month: ";
		input(month);

		std::cout << "searching signs:" << std::endl;
		search(book, month);
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}


