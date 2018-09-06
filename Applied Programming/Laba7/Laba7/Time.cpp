#include "Time.hpp"

namespace lab
{
	Time::Time() : Time(0)
	{

	}

	Time::Time(Uint32 second, Uint32 minute, Uint32 hour)
	{
		this->second	= second;
		this->minute	= (minute + this->second / 60);
		this->hour		= (hour + this->minute / 60);

		this->second	%= 60;
		this->minute	%= 60;
		this->hour		%= 12;
	}

	Uint32 Time::asSeconds() const
	{
		return this->hour * 3600 + this->minute * 60 + this->second;
	}

	Time & Time::operator+=(const Time & rigth)
	{
		return *this = *this + rigth;
	}

	Time & Time::operator-=(const Uint32 second)
	{
		return *this = *this - second;
	}

	Time operator+(const Time & left, const Time & right)
	{
		return Time(left.asSeconds() + right.asSeconds());
	}

	Time operator+(const Time & left, const Uint32 second)
	{
		return Time(left.asSeconds() + second);
	}

	Time operator+(const Uint32 second, const Time & right)
	{
		return Time(second + right.asSeconds());
	}

	Time operator-(const Time & left, Uint32 second)
	{
		if(left.asSeconds() > second) return Time(left.asSeconds() - second);
		else return Time();
	}

	Time operator-(const Time & left, const Time & right)
	{
		int second = static_cast<int>(left.asSeconds()) - static_cast<int>(right.asSeconds());

		return Time((Uint32)second * (second < 0 ? -1 : 1));
	}

	std::ostream & operator<<(std::ostream & out, const Time & t)
	{
		{
			out
				<< (t.hour	 < 10 ? "0" : "") << t.hour << ":"
				<< (t.minute < 10 ? "0" : "") << t.minute << ":"
				<< (t.second < 10 ? "0" : "") << t.second;

			return out;
		}
	}

}
