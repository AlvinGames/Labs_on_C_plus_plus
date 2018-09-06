#include<iostream>

using namespace std;

int main()
{
	int number;
	cout << "Input number: ";
	cin >> number;

	cout << "The number in 8 bit sistem = ";

	for (int i = 7; i >= 0; i--)
	{
		cout << (number >> i & 1);
	}
	cout << endl;

	system("pause");
	return 0;
}