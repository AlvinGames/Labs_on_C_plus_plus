#pragma once

#ifndef TIME_HPP
#define TIME_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include<iostream>

namespace lab
{
	typedef unsigned int Uint32;

	class Time
	{
	public:
		explicit Time();
		explicit Time(Uint32 second, Uint32 minute = 0U, Uint32 hour = 0U);

		Uint32 asSeconds() const;

		Time& operator += (const Time& rigth);
		Time& operator -= (const Uint32 second);
		
		friend Time operator + (const Time& left, const Time& right);
		friend Time operator + (const Time& left, const Uint32 second);
		friend Time operator + (const Uint32 second, const Time& right);
		friend Time operator - (const Time& left, Uint32 second);
		friend Time operator - (const Time& left, const Time& right);
		friend std::ostream& operator << (std::ostream& out, const Time& t);

	private:
		Uint32 second;
		Uint32 minute;
		Uint32 hour;

	};

	Time operator + (const Time& left, const Time& right);
	Time operator + (const Time& left, const Uint32 second);
	Time operator + (const Uint32 second, const Time& right);
	Time operator - (const Time& left, Uint32 second);
	Time operator - (const Time& left, const Time& right);
	std::ostream& operator << (std::ostream& out, const Time& t);

} // namespace lab

#endif // !TIME_HPP


