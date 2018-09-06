# include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Input three-digit number "; cin >> x;
	if (x / 1000 == 0 && x / 100 != 0)
	{
		cout << "First number = " << x / 100 << endl;
		cout << "Second number = " << x % 100 / 10 << endl;
		cout << "Third number = " << x % 10 << endl;
	}
	else
	{
		cout << "Error" << endl;
	}
	system("pause");
	return 0;
}