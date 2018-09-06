#include<iostream>

using namespace std;

int main()
{
	int number, position;
	cout << "Input number: ";
	cin >> number;
	cout << "Input number of bits position: ";
	cin >> position;

	// position #0 -> 00000001 = 1 <=> 1 << 0
	// position #1 -> 00000010 = 2 <=> 1 << 1
	// position #2 -> 00000100 = 4 <=> 1 << 2
	// position #3 -> 00001000 = 8 <=> 1 << 3

	// example: number = 2, position = 0
	// 2 | 0 <=> 00000010 | 00000001 = 00000011

	int mask = 1 << position;
	number |= mask;

	cout << "The number = " << number << endl;

	system("pause");
	return 0;
}