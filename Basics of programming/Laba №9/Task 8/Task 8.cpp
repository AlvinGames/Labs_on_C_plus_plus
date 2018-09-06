#include<iostream>
#include<cmath>
using namespace std;

void F(int number, int &first, int &last)
{
	int n = log10(number);
	first = number / pow(10,n);
	last = number % 10;
}
int main()
{
	int number, first=0, last=0;
	cout << "Input a number "; cin >> number;
	F(number, first, last);
	cout << "senior figure " << first << endl;
	cout << "younger figure " << last << endl;
	system("pause");
	return 0;
}