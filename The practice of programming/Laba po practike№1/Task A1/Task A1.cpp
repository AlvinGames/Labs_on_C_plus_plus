#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Input X "; cin >> x;
	cout << "Y=" << 2 * pow(x,4) - 3 * pow(x,3) + 4 * pow(x,2) - 5 * x + 6 << endl;
	system("pause");
	return 0;
}