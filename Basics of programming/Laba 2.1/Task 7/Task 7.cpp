#include<iostream>

using namespace std;

int main()
{
	int number, position;
	cout << "Input number: ";
	cin >> number;
	cout << "Input number of bits position: ";
	cin >> position;

	//  0 <=> 00000000
	// ~0 <=> 11111111
	// ~0 >> 5 = 00000111

	int mask = (~0) >> position;
	number &= mask;

	cout << "The number = " << number << endl;

	system("pause");
	return 0;
}