#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	for (int i = 1; i <= 36; i++)
	{
		cout << (pow(2, 2 * i + 1) + 1) / 3 << endl;
	}
	system("pause");
	return 0;
}