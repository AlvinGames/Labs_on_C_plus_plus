#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double i, n, sum=0;
	cout << "Input N "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		sum += (i + 1) / i;
	}
	cout << "Sum = " << sum << endl;
	system("pause");
	return 0;
}