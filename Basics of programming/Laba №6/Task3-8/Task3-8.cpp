#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "input quantity of petals "; cin >> n;
	bool result = (n%2==0);
	if (result)
	{
		cout << "doesn't love" << endl;
	}
	else
	{
		cout << "loves" << endl;
	}
	system("pause");
	return 0;
}