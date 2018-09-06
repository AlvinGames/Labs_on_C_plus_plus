#include<iostream>

using namespace std;

void binary(int number);

int main()
{
	int number;
	cout << "Input number: "; cin >> number;

	binary(number);
	cout << endl;

	system("pause");
	return 0;
}

void binary(int number)
{
	int shift = 8 * sizeof(int) - 1;
	int mask = 1 << shift;
	cout << "Number " << number << " = ";
	for (int i = 0; i <= shift; i++)
	{
		cout << (number & mask ? '1' : '0');
		number <<= 1;
		if ((i + 1) % 8 == 0) cout << ' ';
	}
}
