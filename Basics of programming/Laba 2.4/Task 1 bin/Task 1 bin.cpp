/*���������� ����� f � ����� (�������� �� ����) �����,
������ ����� ������� ��, ������� ��������. �������� ���� g,
� ������� �� ���� �� ���� �������� ����� ���������� ��������
(��������� ������� ���������� �����).*/

#include<iostream>
#include<fstream>

using namespace std;

#define File_1 "f.txt"
#define File_2 "g.txt"

bool function(int number);

int main()
{
	int count1 = 0;
	int empty;

	//������������ ���������� ��������
	fstream out(File_1, ios_base::in);

	while (!out.eof())
	{
		out >> empty;
		count1++;
	}
	out.close();

	cout << "count = " << count1 << endl;

	//������� ����������� ������
	int *mas = new int[count1];

	//������������ ������� � ������
	out.open(File_1, ios_base::in);
	for (int i = 0; i < count1; i++)
	{
		out >> mas[i];
	}
	out.close();

	for (int i = 0; i < count1; i++)
		cout << mas[i] << " ";
	cout << endl;

	//��������� � ���� ������ � �������� ����
	fstream in(File_2, ios_base::out | ios_base::binary);
		in.write((char*)&mas[0], sizeof(mas[0]));
	for (int i = 1; i < count1; i++)
	{
		if (function(mas[i - 1]) != function(mas[i]))
			in.write((char*)&mas[i], sizeof(mas[i]));
	}
	in.close();
	
	//������� ������� ��� ����������� �� ��������� �����
	in.open(File_2, ios_base::in | ios_base::binary);
	while (!in.eof())
	{
		in.read((char*)&empty, sizeof(empty));
		cout << empty << " ";
	}
	in.close();
	
	system("pause");
	return 0;
}

bool function(int number)
{
	if (number % 2 == 0) return false;
	return true;
}