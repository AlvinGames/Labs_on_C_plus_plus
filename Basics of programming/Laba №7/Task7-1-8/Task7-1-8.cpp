#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i, m;
	for (i = 6; i < 11; i++)
	{
		for (m = 10; m >= i; m--)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}