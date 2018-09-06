#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double i, n, sum=0;
	cout << "Input N "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		sum += 1 / (pow(2 * i + 1, 2));
	}
	cout << "Sum = " << sum << endl;
	system("pause");
	return 0;
}