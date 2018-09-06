#include <iostream>
using namespace std;
bool simple(int n)
{
	int j = 0;
	bool result = true;
	for (int i = 1; i <= n; i++)
	{
		if (n%i==0)
		{
			j++;
		}
		if (j>2)
		{
			result = false;
			break;
		}
	}
	return result;
}
int main()
{
	bool bool1;
	int s = 0;
	for (int i = 1; i <= 10000; i++)
	{
		bool1 = simple(i);
		if (bool1)
		{
			s++;
			cout << i << endl;
		}
	}
	cout << s << endl;
	system("pause");
	return 0;
}