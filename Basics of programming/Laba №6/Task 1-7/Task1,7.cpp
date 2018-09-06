#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	cout << "input a, b, c "; cin >> a >> b >> c;
	bool result1 = (a == -b);
	bool result2 = (b == -c);
	bool result3 = (c == -a);
	if (result1 || result2 || result3)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	system("pause");
	return 0;
}