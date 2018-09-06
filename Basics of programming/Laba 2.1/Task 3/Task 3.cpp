#include<iostream>

using namespace std;

int main()
{
	int number;
	do
	{
		cout << "Input number of degree: ";
		cin >> number;
	} while (number > 32);

	// 1 <=> 00000001
	// 2 <=> 00000010
	// 4 <=> 00000100
	// 8 <=> 00001000
	// 2 in degree 2 = 1 << 2 <=> 00000100 = 4
	// 3 in degree 3 = 1 << 3 <=> 00001000 = 8

	int item = 1 << number;
	cout << "The number 2 in degree " << number << " = " << item << endl;

	system("pause");
	return 0;
}