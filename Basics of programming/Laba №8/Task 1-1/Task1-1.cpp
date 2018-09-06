#include<iostream>
#include<cmath>
using namespace std;
double min(double a, double b)
{
	if (a < b) return a;
	else return b;
}
int main()
{
	double x, y, z, v, a, b;
	cout << "Input four numbers "; cin >> x >> y >> z >> v;
	a = min(x, y);
	b = min(z, v);
	cout << "Minimum number = " << min(a, b) << endl;
	system("pause");
	return 0;
}