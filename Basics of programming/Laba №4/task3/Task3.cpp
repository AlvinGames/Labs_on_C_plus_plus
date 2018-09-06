#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, m, n;
	cout << "Input A:"; cin >> a;
	cout << "Input B:"; cin >> b;
	cout << "Input M:"; cin >> m;
	cout << "Input N:"; cin >> n;
	cout << "1) Z1=" << sqrt(2 * b + 2 * sqrt(b*b - 4))/(sqrt(b*b-4)+b+2) << "Z2=" << 1 / sqrt(b + 2) << endl;
	cout << "2) Z1=" << (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a)) << " Z2=" << (1 + sin(2*b)) / cos(2*b) << endl;
	cout << "3) Z1=" << ((m - 1)*sqrt(m) - (n - 1)*sqrt(n)) / (sqrt(pow(m, 3)*n) + n*m + pow(m, 2) - m) << "Z2=" << (sqrt(m) - sqrt(n)) / m << endl;
	system("pause");
	return 0;
}