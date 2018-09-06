# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	int number, x1, x2, x3, x4;
	cout << "input number "; cin >> number;
	x1 = number % 10;
	x2 = number % 100 / 10;
	x3 = number % 1000 / 100;
	x4 = number / 1000;
	cout << "composition=" << x1*x2*x3*x4 << endl;
		system("pause");
	return 0;
}