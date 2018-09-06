#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, x, y, d ;
	cout << "input A:"; cin >> a;
	cout << "input B:"; cin >> b;
	cout << "input C:"; cin >> c;
	cout << "input X:"; cin >> x;
	cout << "input Y:"; cin >> y;
	cout << "input D:"; cin >> d;
	cout <<"1 function="<< b + sqrt(b*b + 4 * a*c)/2*a-a*a*a*c+1/b*b << endl;
	cout <<"2 function=" << a/b*b/d-(a*b-c)/c*d << endl;
	cout <<"3 function=" << (x + y) / (y + 1) - (x*y - 12) / (34 + x) << endl;
	cout <<"4 function=" << (sin(x)+cos(y))/(cos(x)-sin(y))*tan(x*y) << endl;
	cout <<"5 function=" << x - x*x*x / 3 + x*x*x*x*x / 5 << endl;
	cout <<"6 function=" << log(fabs(cos(x)))/log(cos(1+x*x)) << endl;
	cout <<"7 function=" << pow(3,x) - 4 * x + (y - sqrt(fabs(x))) << endl;
	cout <<"8 function=" << x*log(x) + y / cos(x) - x / 3 << endl;
	cout <<"9 function" << (exp(x) - y*y + 12 * x*y - 3 * x*x) / (18 * y - 1) << endl;
	system("pause");
	return 0;
}