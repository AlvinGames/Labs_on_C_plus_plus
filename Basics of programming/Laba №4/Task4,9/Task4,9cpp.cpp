#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int h, m, s, p, q, r, time1, time2, time3, hour, minute, second;
	cout << "input time: hour minute second "; cin >> h >> m >> s;
	cout << "input time interval: hour minute second "; cin >> p >> q >> r;
	time1 = h * 3600 + m * 60 + s;
	time2 = p * 3600 + q * 60 + r;
	time3 = time1 + time2;
	hour = time3 / 3600 % 24;
	minute = time3 % 3600 / 60;
	second = time3 % 3600 % 60;
	cout << "Time " << hour << " hour " << minute << " minute " << second << " second " << endl;
	system("pause");
	return 0;
}