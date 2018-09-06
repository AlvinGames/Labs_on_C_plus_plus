#include<iostream>

using namespace std;

int main()
{
	int number, mask;
	cout << "Input the number: "; cin >> number;
	cout << "Input shift number: "; cin >> mask;

	cout << "\nThe number before: " << number << endl;
	number &= (~0) << mask;
	cout << "The number after: " << number << endl;

	// 0 <=> 00000000
	// ~0 <=> 11111111
	// (~0) << 3 <=> 11111000
	// number &= (~0) << mask <=> number = number & (~0) << mask
	// example: 11001111 & 11111000 = 11001000

	system("pause");
	return 0;
}