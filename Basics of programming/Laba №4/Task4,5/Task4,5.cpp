# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	double radius1, radius2, square1, square2;
	const double pi = 22/7;
	cout << "input R and r "; cin >> radius1 >> radius2;
	square1 = pi*radius1*radius1;
	square2 = pi*radius2*radius2;
	cout << "Square=" << square1 - square2 << endl;
	system("pause");
	return 0;
}