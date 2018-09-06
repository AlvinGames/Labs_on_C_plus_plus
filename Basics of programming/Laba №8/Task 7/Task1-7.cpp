#include<iostream>
#include<cmath>
using namespace std;
double mix(double n)
{
	return sqrt(n) + n;
}
int main()
{
	cout << mix(6) / 2 + mix(13) / 2 + mix(21) / 2;
	system("pause");
	return 0;
}