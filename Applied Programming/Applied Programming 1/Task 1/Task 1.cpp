#include<iostream>

using namespace std;

int main()
{
	int number;
	cout << "Input number: "; cin >> number;

	if (number % 3 == 0)
	{
		cout << "The number " << number << " is multiple 3, ";
	}
	if (number % 5 == 0)
	{
		cout << " the number " << number << " is multiple 5" << endl;
	}

	system("pause");
	return 0;
}