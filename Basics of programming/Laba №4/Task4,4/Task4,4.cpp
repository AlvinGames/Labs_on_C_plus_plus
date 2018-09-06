# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	double x1, x2, y1, y2;
	cout << "input cordinates (X1,Y1) "; cin >> x1 >> y1;
	cout << "input cordinates (X2,Y2) "; cin >> x2 >> y2;
	cout << "length = " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
	system("pause");
	return 0;
}