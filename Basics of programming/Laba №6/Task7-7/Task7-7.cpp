#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int day, date, day1, month1, month;
	cout << "Input today date and number of days "; cin >> day1 >> month1 >> day;
	date = (month1 - 1)*30 + day1;
	date = date - day;
	if (date < 0)
	{
		date = 360 + date;
		month = date / 30;
		date = date % 30;
	}
	else
	{
		month = date / 30;
		date = date % 30;
	}
	switch (month)
	{
	case 0: cout << date << " January" << endl; break;
	case 1: cout << date << " February " << endl; break;
	case 2: cout << date << " March " << endl; break;
	case 3: cout << date << " April" << endl; break;
	case 4: cout << date << " May " << endl; break;
	case 5: cout << date << " June" << endl; break;
	case 6: cout << date << " Jule" << endl; break;
	case 7: cout << date << " August" << endl; break;
	case 8: cout << date << " September" << endl; break;
	case 9: cout << date << " October" << endl; break;
	case 10: cout << date << " Noveber" << endl; break;
	case 11: cout << date << " December" << endl; break;
	default: cout << "error" << endl;
	}
	system("pause");
	return 0;
}