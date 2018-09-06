# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	double x1, x2, x3, y1, y2, y3, sideA, sideB, sideC, p;
	cout << "Input cordinates (X1,Y1) "; cin >> x1 >> y1;
	cout << "Input cordinates (X2,Y2) "; cin >> x2 >> y2;
	cout << "Input cordinates (X3,Y3) "; cin >> x3 >> y3;
	sideA = sqrt(pow(x1 - x2, 2) + sqrt(pow(y1 - y2, 2)));
	sideB = sqrt(pow(x2 - x3, 2) + sqrt(pow(y2 - y3, 2)));
	sideC = sqrt(pow(x3 - x1, 2) + sqrt(pow(y3 - y1, 2)));
	p = (sideA + sideB + sideC) / 2;
	cout << "Perimeter=" << sideA + sideB + sideC << endl;
	cout << "Square=" << sqrt(p*(p - sideA)*(p - sideB)*(p - sideC)) << endl;
	system("pause");
	return 0;
}