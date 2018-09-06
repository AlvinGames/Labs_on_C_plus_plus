# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	double a, stage1, stage2, stage3, stage4;
	cout << "input A "; cin >> a;
	stage1 = a*a;
	stage2 = stage1*stage1;
	stage3 = stage2*stage2;
	stage4 = stage3*stage1;
	cout << "number A in 8 degrees=" << stage3 << endl;
	cout << "number A in 10 degrees=" << stage4 << endl;
	system("pause");
	return 0;
}