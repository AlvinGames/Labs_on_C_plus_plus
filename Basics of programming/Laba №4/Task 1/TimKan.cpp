#include <iostream>

using namespace std;

int main()
{
	int x, f, y;

	cout << "Input X:"; cin >> x;
	cout << "Input Y:"; cin >> y;
	cout << "X=" << x << endl;
	cout << "Y=" << y << endl;
	f = 22/x + 22%y;
	cout << "f=" << f << endl;
	system("pause");

	return 0;
}