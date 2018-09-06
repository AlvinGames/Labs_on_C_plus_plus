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
		bool result1 = (x<0 && x>-r && y>0 && y<r && r*r>=pow(x+r,2)+y*y);
		bool result2 = (x>0 && x<r && y<0 && y>-r && r*r>=pow(x-r,2)+y*y);
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