#include<iostream>
using namespace std;
void swap(int x, int y) // ������ ��������� �� �������� ��� ��� ������� swap �� ���������� �������� ��������� x � y
{
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 3; int b = 5;
	cout << "a=" << a << " b=" << b << endl;
	swap(a, b); //� ��� ����� �� ����������� ������� ���������� �������� �������
	cout << "a=" << a << " b=" << b << endl;
	system("pause");
	return 0;
}
