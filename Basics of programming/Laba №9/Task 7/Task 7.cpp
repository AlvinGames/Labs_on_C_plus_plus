#include <iostream>
using namespace std;

void matrix(int side, char x)
{
	for (int i = 0; i < side; i++)
	{
		for (int i = 0; i < side; i++)
		{
			cout << x << " ";
		}
		cout << endl;
	}
}
int main()
{
	int side; char x;
	cout << "Input side the matrix "; cin >> side;
	cout << "Input a simbol "; cin >> x;
	matrix(side, x);
	system("pause");
	return 0;
}