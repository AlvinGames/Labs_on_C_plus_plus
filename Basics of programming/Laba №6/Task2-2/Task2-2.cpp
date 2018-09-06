#include <iostream>
#include <cmath>
using namespace std;
double main()
{
int x, y, r=15;
cout << "input X and Y "; cin >> x >> y;
bool result1 = (y <= fabs(x));
bool result2 = (r >= sqrt(x*x + y*y));
bool result3 = (y < fabs(x));
bool result4 = (r > sqrt(x*x + y*y));
if (result1 && result2)
{
	if (result3 && result4)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "error" << endl;
	}
}
else
{
	cout << "false" << endl;
}
system("pause");
return 0;
}