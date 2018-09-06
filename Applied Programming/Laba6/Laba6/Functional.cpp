#include "Functional.hpp"

namespace lab
{
	extern const unsigned int size = 3;

	namespace sort
	{
		lambda byName	= [](const Znak& left, const Znak& right)->bool { return left.getName()[0]	< right.getName()[0];	};
		lambda byZodiak = [](const Znak& left, const Znak& right)->bool { return left.getZodiak()	< right.getZodiak();	};
		lambda byDay	= [](const Znak& left, const Znak& right)->bool { return left.getDay()		< right.getDay();		};
		lambda byMonth	= [](const Znak& left, const Znak& right)->bool { return left.getMonth()	< right.getMonth();		};
		lambda byYear	= [](const Znak& left, const Znak& right)->bool { return left.getYear()		< right.getYear();		};
		lambda byDate	= [](const Znak& left, const Znak& right)->bool { return left.getDate()		< right.getDate();		};
	}

	void input(lab::Znak * mas)
	{
		using std::cout;
		using std::cin;
		using std::endl;

		for (int i = 0; i < size; i++)
		{
			std::String str;
			std::String	zodiak;
			Uint32		day;
			Uint32		month;
			Uint32		year;

			Uint32 znak = 0;



			cout << "Input name: ";						cin >> str;			mas[i].setName		(str);
			cout << "Input number of sign zodiak: ";	cin >> (zodiak);		
			
			if (zodiak == "овен") znak = 0;
			if (zodiak == "телец") znak = 1;
			if (zodiak == "близнецы") znak = 2;
			if (zodiak == "рак") znak = 3;
			if (zodiak == "лев") znak = 4;
			if (zodiak == "дева") znak = 5;
			if (zodiak == "весы") znak = 6;
			if (zodiak == "скорпион") znak = 7;
			if (zodiak == "змееносец") znak = 8;
			if (zodiak == "стрелец") znak = 9;
			if (zodiak == "козерог") znak = 10;
			if (zodiak == "водолей") znak = 11;
			if (zodiak == "рыбы") znak = 12;
			if (zodiak == "весы") znak = 13;
			
			mas[i].setZodiak	(znak);
			cout << "Input number of day: ";			input(day);			//
			cout << "Input number of month: ";			input(month);		//
			cout << "Input number of year: ";			input(year);		mas[i].setDate		(day, month, year);

			cout << endl;
		}
	}

	void output(const lab::Znak * mas)
	{
		using std::cout;
		using std::endl;

		for (int i = 0; i < size; i++)
		{
			cout << "# Sign number " << i << " #" << endl;
			cout << mas[i] << endl << endl;
		}
	}

	void sortMas(lab::Znak * mas, lab::lambda less)
	{
		for (int i = 0; i < size; i++)
		{
			int min = i;
			for (int j = i + 1; j < size; j++)
			{
				if (less(mas[j], mas[min])) min = j;
			}
			std::swap(mas[i], mas[min]);
		}
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

	void search(const Znak * mas, Uint32 month)
	{
		using std::cout;
		using std::endl;

		bool isExist = false;

		for (int i = 0; i < size; i++)
		{
			if (mas[i].getMonth() == month)
			{
				isExist = true;
				cout << "# Sign number " << i << " #" << endl;
				cout << mas[i] << endl << endl;
			}
		}

		if (!isExist) cout << "Signs not found" << endl;
	}
}
