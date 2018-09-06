#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, y, r, i = 0;
	do
	{
		cout << "Input cordinate X , Y and radius "; cin >> x >> y >> r;
		i++;
		bool result1 = (x<0 && y > 0 && r*r <= pow(x + r, 2) + pow(y - r, 2));
		bool result2 = (r*r >= x*x + y*y && x > 0 && y < 0);
		if (result1 || result2)
		{
			cout << "Successful shot" << endl;
		}
		else
		{
			cout << "Fail shot" << endl;
		}
	} while (i<10);
	cout << "there are no cartridges" << endl;
system("pause");
return 0;
}