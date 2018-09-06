//binary_float_main.cpp
//

#include<iostream>

using namespace std;

void binary(int num);

int main()
{
	float number;
	cout << "Input the number: "; cin >> number;

	int number_int = *((int*)&number);

	cout << "Number " << number << " = ";
	binary(number_int);
		cout << endl;

	system("pause");
	return 0;
}

void binary(int num)
{
	int shift = 8 * sizeof(float) - 1;
	int mask = 1 << shift;
	for (int i = 0; i <= shift; i++)
	{
		cout << (num & mask ? '1' : '0');
		num <<= 1;
		if ((i + 1) % 8 == 0) cout << ' ';
	}
}