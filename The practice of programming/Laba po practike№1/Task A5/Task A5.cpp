# include <iostream>
using namespace std;
int main()
{
	int  x, x1, x2;
	cout << "Input Six-digit number "; cin >> x;
	if (x/1000000==0 && x/100000!=0)
	{
		x1 = x / 1000;
		x2 = x % 1000 / 100;
		cout << x1 << " thousand" << endl;
		cout << x2 << " hundred" << endl;
	}
	else
	{
		cout << "Error" << endl;
	}
	system("pause");
	return 0;
}