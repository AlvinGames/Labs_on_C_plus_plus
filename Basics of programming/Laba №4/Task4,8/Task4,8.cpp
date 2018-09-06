#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int time, second, minute, hour;
	cout << "input time in seconds "; cin >> time;
	hour = time / 3600;
	minute = time % 3600 / 60;
	second = time % 3600 % 60;
	cout << "Time " << hour << " hour " << minute << " minute " << second << " second " << endl;
	system("pause");
	return 0;
}