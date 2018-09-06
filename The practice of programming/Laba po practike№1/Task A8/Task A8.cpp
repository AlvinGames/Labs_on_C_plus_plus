#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m, n;
	cout << "Input M and N "; cin >> m >> n;
	m = m + n;
	n = m - n;
	m = m - n;
	cout << "M = " << m << endl;
	cout << "N = " << n << endl;
	system("pause");
	return 0;
}