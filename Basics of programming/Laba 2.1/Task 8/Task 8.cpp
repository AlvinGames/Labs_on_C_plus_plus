#include<iostream>

using namespace std;

int main()
{
	int number, position;
	cout << "Input number: ";
	cin >> number;
	cout << "Input number of bits position: ";
	cin >> position;

	// example: number = 3, position = 1
	// 3 <=> 00000011
	// 3 >> 1 <=> 00000001
	// 00000001 & 00000001 = 00000001

	int IbitValue = (number >> position) & 1;

	cout << "The value of bit = " << IbitValue << endl;

	system("pause");
	return 0;
}