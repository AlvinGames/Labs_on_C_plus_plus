#include<iostream>

using namespace std;

int main()
{
	int number, position;
	cout << "Input number: ";
	cin >> number;
	cout << "Input number of bits position: ";
	cin >> position;

	// position #0 -> ~00000001 = 11111110 <=> ~(1 << 0)
	// position #1 -> ~00000010 = 11111101 <=> ~(1 << 1)
	// position #2 -> ~00000100 = 11111011 <=> ~(1 << 2)
	// position #3 -> ~00001000 = 11110111 <=> ~(1 << 3)

	// example: number = 3, position = 0
	// 
	// 3 & 0 <=> 00000011 & 11111110 = 00000010

	int mask = ~(1 << position);
	number &= mask;

	cout << "The number = " << number << endl;

	system("pause");
	return 0;
}