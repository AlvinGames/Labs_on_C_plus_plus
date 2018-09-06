//Laba4_main.cpp
//

#include<iostream>
#include"String.hpp"

using namespace std;

String substring(const char* str, int position, int length);
String substring(String str, int position, int length);

int main()
{
	//String str = "Hello World";
	
	cout << "Input  string: ";
	String str;
	cin >> str;

	//cout << str.length() << endl;

	cout << "Input position: ";
	int position;
	cin >> position;

	cout << "Input length: ";
	int length;
	cin >> length;

	cout << substring(str, position, length) << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}

String substring(const char * str, int position, int length)
{
	return substring(String(str), position, length);
}

String substring(String str, int position, int length)
{
	if (length >= 0)
	{
		if (position < 0 || str.length() < length) return "";

		String newString(length);

		int j = position;

		for (int i = 0; i < length; i++, j++)
		{
			newString[i] = str[j];
		}

		return newString;
	}
	else
	{
		if (str.length() < -length) return "";

		String newString(-length);

		int j = str.length() + length;

		for (int i = 0; i < -length; i++, j++)
		{
			newString[i] = str[j];
		}

		return newString;
	}
	
}
