#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int day, month;
	cout << "inpute date: day, mont "; cin >> day >> month;
	bool result1 = (
		month == 1 ||
		month == 3 ||
		month == 5 ||
		month == 7 ||
		month == 8 ||
		month == 10 ||
		month == 12 &&
		day >= 1 &&
		day <= 31
		);
	bool result2 = (
		month == 4 ||
		month == 6 ||
		month == 9 ||
		month == 11 &&
		day >= 1 &&
		day <= 30
		);
	bool result3(month == 2 && day>=1 && day<=29);
	if (result1 || result2 || result3)
	{
		cout << "yes, this date exists" << endl;
	}
	else
	{
		cout << "error, this date doesn't exist" << endl;
	}
	system("pause");
	return 0;
}