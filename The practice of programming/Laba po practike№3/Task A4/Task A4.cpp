#include<iostream>
#include<fstream>
using namespace std;

double med_of_temp(int A[]); //средняя температура за месяц
int num_of_pos_temp(int A[]); //сколько раз температура была выше нуля
int day_max_temp(int A[]); //день, когда температура была наибольшей
int day_min_temp(int A[]); //самый холодный день декабря
int first_day_pos_temp(int A[]); //день, когда первый раз температура поднялась выше нуля
int num_of_days_temp_more_s(int A[]); //сколько дней в декабре температура была выше средней
int num_convert_sign(int A[]); //сколько раз в декабре температура меняла знак
int temp_of_second_decad(int A[]); //минимальная температура второй декады (десятки) декабря

int main()
{
	int a, count = 0;
	int A[31];
	ifstream read("temperature.txt");
	if (!read)
	{
		cout << "File not found :(" << endl;
		return 1;
	}
	for (int i = 0; !read.eof() && i < 31; i++)
	{
		read >> A[i];
	}
	cout << "average temperature in a month = " << med_of_temp(A) << endl;
	cout << num_of_pos_temp(A) << " times temperature was above zero" << endl;
	cout << "in the " << day_max_temp(A) << "th day temperature was the greatest" << endl;
	cout << "in the " << day_min_temp(A) << "th day temperature was the smallest" << endl;
	cout << "in the " << first_day_pos_temp(A) << "th day the first time temperature has risen above zero" << endl;
	cout << num_of_days_temp_more_s(A) << " days in December temperature was higher than average" << endl;
	cout << num_convert_sign(A) << " times in December temperature changed a sign" << endl;
	cout << "minimum temperature of the second decade of December = " << temp_of_second_decad(A) << endl;
	system("pause");
	return 0;
}

double med_of_temp(int A[])
{
	int med = 0;
	for (int i = 0; i < 31; i++)
	{
		med += A[i];
	}
	return med/31;
}
int num_of_pos_temp(int A[])
{
	int num = 0;
	for (int i = 0; i < 31; i++)
	{
		if (A[i]>0)
		{
			num++;
		}
	}
	return num;
}
int day_max_temp(int A[])
{
	int max = A[0];
	int j;
	for (int i = 0; i < 31; i++)
	{
		if (A[i]>max)
		{
			max = A[i];
			j = i;
		}
	}
	return j+1;
}
int day_min_temp(int A[])
{
	int min = A[0];
	int j;
	for (int i = 0; i < 31; i++)
	{
		if (A[i]<min)
		{
			min = A[i];
			j = i;
		}
	}
	return j+1;
}
int first_day_pos_temp(int A[])
{
	int j;
	for (int i = 0; i < 31; i++)
	{
		if (A[i]>0)
		{
			j = i;
			break;
		}
	}
	return j+1;
}
int num_of_days_temp_more_s(int A[])
{
	int num = 0;
	for (int i = 0; i < 31; i++)
	{
		if (A[i]>med_of_temp(A))
		{
			num++;
		}
	}
	return num;
}
int num_convert_sign(int A[])
{
	int num = 0;
	for (int i = 0; i < 30; i++)
	{
		if (A[i]*A[i+1]<0)
		{
			num++;
		}
	}
	return num;
}
int temp_of_second_decad(int A[])
{
	int min = A[10];
	for (int i = 10; i < 20; i++)
	{
		if (A[i]<min)
		{
			min = A[i];
		}
	}
	return min;
}
