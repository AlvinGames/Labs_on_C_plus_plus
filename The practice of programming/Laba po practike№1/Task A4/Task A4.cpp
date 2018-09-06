# include <iostream>
using namespace std;
int main()
{
	int x, x1, x2, x3, x4;
	cout << "Input fàour-digit number "; cin >> x;
	if (x / 10000 == 0 && x / 1000 != 0)
	{
		x1 = x / 1000;
		x2 = x % 1000 / 100;
		x3 = x % 100 / 10;
		x4 = x % 10;
		cout << "Sum = " << x1 + x2 + x3 + x4 << endl;
	}
	else {
		cout << "Error" << endl;
	}
	system("pause");
	return 0;
}