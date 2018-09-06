#include<iostream>

using namespace std;

int main()
{
	int N;
	int b = 0;
	cout << "Input N "; cin >> N;
	while (N % 10 == 0)
	{
		N /= 10;
	}
	while (N > 1)
	{
		if (N % 10 == 0)
		{
			b++;
		}
		N /= 10;
	}
	cout << b << endl;
	system("pause");
	return 0;
}