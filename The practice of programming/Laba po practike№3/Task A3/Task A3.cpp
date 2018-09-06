#include<iostream>
#include<fstream>
using namespace std;

bool Nat(int a);

int main()
{
	int a, count=0;
	ifstream in_1("mass.txt");
	if (!in_1)
	{
		cout << "File not found :(" << endl;
		return 1;
	}
	while (!in_1.eof())
	{
		in_1 >> a;
		count++;
	}
	cout << "Size of massif = " << count << endl;
	int *A = new int[count];
	ifstream in_2("mass.txt");
	for (int i = 0; !in_2.eof() && i < count; i++)
	{
		in_2 >> A[i];
	}
	for (int i = 0; i < count; i++)
	{
		if (Nat(A[i]))
		{
			cout << A[i] << endl;
		}
	}
	system("pause");
	return 0;
}
bool Nat(int a)
{
	bool N = true;
	int j = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a%i == 0)
		{
			j++;
		}
		if (j>2)
		{
			N = false;
			break;
		}
	}
	return 0;
}