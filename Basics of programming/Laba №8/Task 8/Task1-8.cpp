#include<iostream>
#include<cmath>
using namespace std;
double mix(double x, int n)
{
	return pow(x, n) / n;
}
int main()
{
	double x;
	cout << "Input a number "; cin >> x;
	cout << mix(x, 2) + mix(x, 4) + mix(x, 6) << endl;
	system("pause");
	return 0;
}