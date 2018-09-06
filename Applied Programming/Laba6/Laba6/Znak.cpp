#include "Znak.hpp"

namespace lab
{
	Znak::Znak() : Znak("noName", 1, 1, 1, 11)
	{

	}

	Znak::Znak(
		const std::String&	name,
		Uint32				zodiak,
		Uint32				day,
		Uint32				month,
		Uint32				year
	)
	:	name(name),
		zodiak(zodiak)
	{
		this->bday[Date::day]		= day;
		this->bday[Date::month]		= month;
		this->bday[Date::year]		= year;
	}

	std::ostream & operator<<(std::ostream & out, const Znak & item)
	{
		out
			<< item.name << " N_";
			//<< item.zodiak				

		switch (item.zodiak)
		{
		case 0: out << "овен"; break;
		case 1: out << "телец"; break;
		case 2: out << "близнецы"; break;
		case 3: out << "рак"; break;
		case 4: out << "лев"; break;
		case 5: out << "дева"; break;
		case 6: out << "весы"; break;
		case 7: out << ""; break;
		case 8: out << ""; break;
		case 9: out << ""; break;
		case 10: out << ""; break;
		case 11: out << ""; break;
		case 12: out << ""; break;
		case 13: out << ""; break;
		}
			out << " " << (item.bday[Date::day]		< 10 ? "0" : "")
			<< item.bday[Date::day]		<< "/" << (item.bday[Date::month]	< 10 ? "0" : "")
			<< item.bday[Date::month]	<< "/" << (item.bday[Date::year]	< 10 ? "0" : "")
			<< item.bday[Date::year];

		return out;
	}

}

