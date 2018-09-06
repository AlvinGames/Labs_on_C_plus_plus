#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int mark_1, mark_2, max, min, i=0;
	cout << "Input a mark "; cin >> mark_1 >> mark_2;
	int sum = mark_1;
	if (mark_1 > mark_2)
	{
		max = mark_1;
		min = mark_2;
	}
	else
	{
		max = mark_2;
		min = mark_1;
	}
	do
	{
		if (mark_2 > max)
		{
			max = mark_2;
		}
		else if (mark_2 < min)
		{
			min = mark_2;
		}
		sum += mark_2;
		mark_1 = mark_2;
		cin >> mark_2;
		if (mark_2!=0)
		{
			i++;
		}
	} while (mark_2 != 0);
	cout << "Your mark " << (sum - max - min) / i << endl;
	system("pause");
	return 0;
}