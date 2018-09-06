#include<iostream>
#include<cmath>
using namespace std;
int time_convert(int hour, int minute)
{
	return hour * 60 + minute;
}
int main()
{
	int time_start_hour, time_start_minute, time_finish_hour, time_finish_minute;
	int	time_route, time_pause, time_full_route;
	int time_start, time_finish, time_step;

	cout << "Input time of start work "; cin >> time_start_hour >> time_start_minute;
	cout << "Input time of finish work "; cin >> time_finish_hour >> time_finish_minute;
	cout << "Input time of route "; cin >> time_route;
	cout << "Input time of pause "; cin >> time_pause;

	time_full_route = time_route + time_pause;
	time_start = time_convert(time_start_hour, time_start_minute);
	time_finish = time_convert(time_finish_hour, time_finish_minute);

	time_step = time_start;
	do
	{
		cout << time_step / 60 << " " << time_step % 60 << endl;
		time_step += time_full_route;
	} while (time_step < time_finish);
	system("pause");
	return 0;
}