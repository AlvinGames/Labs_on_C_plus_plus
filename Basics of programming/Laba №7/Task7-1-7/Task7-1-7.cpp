#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i, m;
	for (i = 1; i < 6; i++)
	{
		for (m = 1; m <= i; m++)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}