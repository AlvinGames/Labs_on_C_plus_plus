# include <iostream>
using namespace std;
int main()
{
	int x, x1, x2, x3, x4, x5;
	cout << "Input five-digit number "; cin >> x;
	if (x/100000==0 && x/10000!=0)
	{
		x1 = x / 10000;
		x2 = x % 10000 / 1000;
		x3 = x % 1000 / 100;
		x4 = x % 100 / 10;
		x5 = x % 10;
		cout << "Inverce number " << x5 * 10000 + x4 * 1000 + x3 * 100 + x2 * 10 + x1 << endl;
	}
	else
	{
		cout << "Error" << endl;
	}
	system("pause");
	return 0;
}