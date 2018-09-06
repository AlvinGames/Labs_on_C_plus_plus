#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int mark;
	cout << "input mark "; cin >> mark;
	if (mark >= 90 && mark <= 100)
	{
		mark = 1;
	}
	else if (mark >= 70 && mark <= 89)
	{
		mark = 2;
	}
	else if (mark >= 50 && mark <= 69)
	{
		mark = 3;
	}
	else
	{
		mark = 4;
	}
	switch (mark)
	{
	case 1: cout << "Excellent" << endl; break;
	case 2: cout << "Good" << endl; break;
	case 3: cout << "alright" << endl; break;
	case 4: cout << "unsatisfactorily" << endl; break;
	default: cout << "error" << endl;
	}
	system("pause");
	return 0;
}