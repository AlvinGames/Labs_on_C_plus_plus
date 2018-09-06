#pragma once

#ifndef ZNAK_HPP
#define ZNAK_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include"String.hpp"

namespace lab
{
	typedef unsigned int Uint32;

	enum Date
	{
		day = 0,	//day of date
		month,		//moth of date
		year		//year of date
	};

	class Znak
	{
	public:
		Znak();
		Znak(
			const std::String&	name,
			Uint32				zodiak,
			Uint32				day,
			Uint32				month,
			Uint32				year
		);

		//Accessors
		//======================================================================================//
		inline void setName(const std::String& name)		{ this->name = name;				}
		inline void setZodiak(Uint32 zodiak)				{ this->zodiak = zodiak;			}
		inline void setDate(
			Uint32 day,	
			Uint32 month,
			Uint32 year
		)
		{
			this->bday[Date::day]		= day;
			this->bday[Date::month]		= month;
			this->bday[Date::year]		= year;
		}
		
		inline const std::String&	getName()	const		{ return this->name;				}
		inline const Uint32			getZodiak()	const		{ return this->zodiak;				}
		inline const Uint32			getDay()	const		{ return this->bday[Date::day];		}
		inline const Uint32			getMonth()	const		{ return this->bday[Date::month];	}
		inline const Uint32			getYear()	const		{ return this->bday[Date::year];	}
		inline const Uint32			getDate()	const
		{
			return 
				this->bday[Date::year]	* 10000 + 
				this->bday[Date::month] * 100	+ 
				this->bday[Date::day];
		}
		//======================================================================================//

		friend std::ostream& operator << (std::ostream& out, const Znak& item);

	private:
		std::String		name;
		Uint32			zodiak;
		Uint32			bday[3];
	};

	std::ostream& operator << (std::ostream& out, const Znak& item);

} // namespace lab

#endif // !ZNAK_HPP


