#include<iostream>

using namespace std;

int main()
{
	int number1, number2;
	do
	{
		cout << "Input two numbers of degree: ";
		cin >> number1 >> number2;
	} while (number1 > 31 || number2 > 31);
	
	// 1 <=> 00000001
	// 2 <=> 00000010
	// 4 <=> 00000100
	// 8 <=> 00001000
	// 2 in degree 2 = 1 << 2 <=> 00000100 = 4
	// 3 in degree 3 = 1 << 3 <=> 00001000 = 8

	int item1;
	item1 = 1 << number1;
	cout << "\nThe number 2 in degree " << number1 << " = " << item1 << endl;

	int item2;
	item2 = 1 << number2;
	cout << "The number 2 in degree " << number2 << " = " << item2 << endl;
	
	// example: 4+8 <=> 00000100 | 00001000 = 00001100 <=> 12

	int sum = 1 << number1 | 1 << number2;
	cout << "The sum = " << sum << endl;

	system("pause");
	return 0;
}