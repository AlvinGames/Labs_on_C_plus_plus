#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long value1 = 200000, value2;
	long *ptr;
	ptr = &value1;
	cout << "*ptr = " << *ptr << endl;
	value2 = *ptr;
	cout << "value2 = *ptr" << endl;
	cout << "value2 = " << value2 << endl;
	cout << "&value1 = " << &value1 << endl;
	cout << "ptr = " << ptr << endl;
	system("pause");
	return 0;
}