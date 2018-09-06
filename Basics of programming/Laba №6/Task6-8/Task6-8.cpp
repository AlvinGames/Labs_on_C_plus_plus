#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y;
	cout << "input X and Y "; cin >> x >> y;
	bool result1 = (x <= -40 || x >= 40);
	bool result2 = (y <= -40 || y >= 40);
	bool result3 = (x < -40 || x > 40);
	bool result4 = (y < -40 || y > 40);
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