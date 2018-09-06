#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y;
	cout << "input X and Y "; cin >> x >> y;
	bool result1 = (x >= -50 && x <= 50);
	bool result2 = (y >= -25 && y <= 25);
	bool result3 = (x > -50 && x < 50);
	bool result4 = (y > -25 && y < 25);
	if (result1 && result2)
	{
		if (result3 && result4)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "On border" << endl;
		}
	}
	else
	{
		cout << "no" << endl;
	}
	system("pause");
	return 0;
}