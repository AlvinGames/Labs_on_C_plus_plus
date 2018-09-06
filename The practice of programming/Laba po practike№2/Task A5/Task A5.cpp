#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n1 = 0, n2 = 0, n3 = 0; //счётчики скорости схождения
	int i1 = 2, i2 = 3, i3 = 2;
	double pi_1 = 1 / (i1*(i1 + 1)*(i1 + 2)), pi_2 = 1, pi_3 = 1;
	double x_1_1 = 1, x_1_2 = 1 / (i1*(i1 + 1)*(i1 + 2));
	double x_2_1 = 1, x_2_2 = 1;
	double x_3_1 = 1, x_3_2 = 1;
	const double eps = 0.00000001;
	do
	{
		n1++;
		i1 += 2;
		x_1_1 = x_1_2;
		x_1_2 = pow(-1, n1) / (i1*(i1 + 1)*(i1 + 2));
		pi_1 += x_1_2;
	} while (fabs(x_1_1 - x_1_2) > eps);
	cout << "pi_1 = " << 3 + 4 * pi_1 << " and speed_______" << n1 << endl;
	do
	{
		n2++;
		x_2_1 = x_2_2;
		x_2_2 = pow(-1, n2) / i2;
		i2 += 2;
		pi_2 += x_2_2;
	} while (fabs(x_2_1 - x_2_2) > eps);
	cout << "pi_2 = " << pi_2 * 4 << " and speed_______" << n2 << endl;
	do
	{
		n3++;
		x_3_1 = x_3_2;
		x_3_2 = 1 / pow(i3, 2);
		i3++;
		pi_3 += x_3_2;

	} while (fabs(x_3_1 - x_3_2) > eps);
	cout << "pi_3 = " << sqrt(6 * pi_3) << " and speed_______" << n3 << endl;
	system("pause");
	return 0;
}