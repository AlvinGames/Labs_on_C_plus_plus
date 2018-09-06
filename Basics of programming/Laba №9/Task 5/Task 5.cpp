#include <iostream>
#include<cmath>
using namespace std;
void Invert(int &n)
{
	int j, result = 0;
	j = log10(n);
	for (int i = j; i >= 0; i--)
	{
		result += (n % 10)*pow(10, i);
		n /= 10;
	}
	n = result;
}
int invert(int n)
{
	int j, result=0;
	j = log10(n);
	for (int i = j; i >= 0; i--)
	{
		result += (n % 10)*pow(10, i);
		n /= 10;
	}
	return result;
}
int main()
{
	int n;
	cout << "Input a number "; cin >> n;
	cout << "inverce of nuber = " << invert(n) << endl;
	Invert(n);
	cout << "Inverce of number = " << n << endl;
	system("pause");
	return 0;
}