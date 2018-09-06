#include<iostream>
#include<cmath>
using namespace std;
int max(int a, int b)
{
	if (a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	int x, y;
	cout << "Input two numbers "; cin >> x >> y;
	cout << "Z = " << max(x, 2 * y - x) + max(5 * x + 3 * y, y) << endl;
	system("pause");
	return 0;
}