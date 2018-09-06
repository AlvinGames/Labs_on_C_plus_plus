#include<iostream>

using namespace std;

int main()
{
	for (int i = 1; i < 6; i++)
	{
		for (int m = 7; m >= i; m--)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}