#include <iostream>
using namespace std;

void binary(int num);

int main()
{
	bool b = true;
	cout << "BOOL true = ";
	int k = *((int*)&b);

	binary(k);
	cout << endl;

	b = false;
	cout << "BOOL false = ";
	k = *((int*)&b);

	binary(k);
	cout << endl;

	system("pause");
	return 0;
}

void binary(int num)
{
	int sdvig = 8 * sizeof(bool) - 1;
	int maska = 1 << sdvig;
	for (int i = 0; i <= sdvig; i++)
	{
		cout << (num & maska ? '1' : '0');
		num <<= 1;
	}
}