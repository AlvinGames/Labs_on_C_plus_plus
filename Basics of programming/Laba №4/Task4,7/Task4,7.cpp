#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;
	cout << "Input volume in bytes="; cin >> a;
	cout << "volume in Mb=" << a / pow(10, 6) << endl;
	cout << "volume in Gb=" << a / pow(10, 9) << endl;
	cout << "volume in Tb=" << a / pow(10, 12) << endl;
	system("pause");
	return 0;
}