#include "String.hpp"

namespace std
{
	String::String() 
	:	size	(0), 
		str		(nullptr)
	{
	}

	String::String(const unsigned int length)
	:	size	(length),
		str		(new char[size + 1])
	{
		this->str[size] = '\0';
	}

	String::String(const char* str)
	:	size	(strlen(str)),
		str		(new char[size + 1])
	{
		for (int i = 0; i < size; i++)
		{
			this->str[i] = str[i];
		}
		this->str[size] = '\0';
	}

	String::String(const String& other) 
	:	size	(other.size),
		str		(new char[size + 1])
	{
		for (int i = 0; i < size; i++)
		{
			this->str[i] = other.str[i];
		}
		this->str[size] = '\0';
	}

	String::String(String &&other)
	:	size	(other.size),
		str		(other.str)
	{
		other.str = nullptr;
	}

	String::~String()
	{
		delete[] this->str;
	}

	String & String::operator=(const String & other)
	{
		if (this != &other)
		{
			delete[] this->str;

			this->size = strlen(other.str);
			this->str = new char[size + 1];

			for (int i = 0; i < size; i++)
			{
				this->str[i] = other.str[i];
			}
			this->str[size] = '\0';
		}
		return *this;
	}

	String & String::operator=(const char * other)
	{
		delete[] this->str;

		this->size = strlen(other);
		this->str = new char[size + 1];

		for (int i = 0; i < size; i++)
		{
			this->str[i] = other[i];
		}
		this->str[size] = '\0';

		return *this;
	}

	String & String::operator+=(const String & other)
	{
		return *this = *this + other;
	}

	char & String::operator[](const int index)
	{
		if (index < 0 || index > this->size - 1)
			throw std::out_of_range("this symbol does not exist");

		return this->str[index];
	}

	const char& String::operator[](const int index) const
	{
		if (index < 0 || index > this->size - 1)
			throw std::out_of_range("this symbol does not exist");

		return this->str[index];
	}

	int String::length() const
	{
		return this->size;
	}

	String operator + (const String& left, const String& right)
	{
		String concat;
		concat.size = left.size + right.size;
		concat.str = new char[concat.size + 1];

		int i;
		for (i = 0; i < left.size; i++)
		{
			concat.str[i] = left.str[i];
		}
		for (int j = 0; j < right.size; j++, i++)
		{
			concat.str[i] = right.str[j];
		}
		concat.str[concat.size] = '\0';

		return concat;
	}

	String operator + (const String& left, const char* right)
	{
		String concat;
		int sizeOfRight = strlen(right);

		concat.size = left.size + sizeOfRight;
		concat.str = new char[concat.size + 1];

		int i;
		for (i = 0; i < left.size; i++)
		{
			concat.str[i] = left.str[i];
		}
		for (int j = 0; j < sizeOfRight; j++, i++)
		{
			concat.str[i] = right[j];
		}
		concat.str[concat.size] = '\0';

		return concat;
	}

	String operator + (const char* left, const String& right)
	{
		String concat;
		int sizeOfLeft = strlen(left);

		concat.size = sizeOfLeft + right.size;
		concat.str = new char[concat.size + 1];

		int i;
		for (i = 0; i < sizeOfLeft; i++)
		{
			concat.str[i] = left[i];
		}
		for (int j = 0; j < right.size; j++, i++)
		{
			concat.str[i] = right.str[j];
		}
		concat.str[concat.size] = '\0';

		return concat;
	}

	const bool operator == (const String& left, const String& right)
	{
		if (left.size != right.size) return false;

		for (int i = 0; i < left.size; i++)
		{
			if (left.str[i] != right.str[i]) return false;
		}
		return true;
	}

	const bool operator != (const String& left, const String& right)
	{
		return !(left == right);
	}

	std::ostream& operator << (std::ostream& out, const String& line)
	{
		out << line.str;
		return out;
	}

	std::istream& operator >> (std::istream& in, String& line)
	{
		delete line.str;

		//void* p;
		//in >> p;

		//line.size = int(in.rdbuf()->in_avail() - 1);

		char mas[100000];

		gets_s(mas);
		line.size = strlen(mas);

		line.str = new char[line.size + 1];

		//in.rdbuf()->sgetn(line.str, line.size);
		line = mas;
		line.str[line.size] = '\0';

		in.clear();

		return in;
	}

}