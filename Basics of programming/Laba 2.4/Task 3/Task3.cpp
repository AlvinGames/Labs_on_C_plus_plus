/*�������� ���������� ����� (��� ���������).
��� ��������� ���� input.txt. ����������:
�	���������� � ����� ���� output1.txt ��� ��� ������, ������� � ����� ������ ������ �� ����� � ���������� �������� � ���;
�	���������� � ����� ���� output2.txt ��� ��� ������, ����� ������� ������ ��������� �����.*/

#include<iostream>
#include<fstream>
#include<string>

#define File_1 "input.txt"
#define File_1 "output1.txt"
#define File_2 "output2.txt"

using namespace std;

int main()
{
	int countOfString = 0;

	fstream input(File_1, ios_base::in);

	if (!input)
	{
		cout << "error_the_file_" << File_1 << "_doesn't_exist" << endl;
		system("pause");
		return 1;
	}

	//������� ���������� �����
		while (!input.eof())
		{
			string str;
			getline(input, str);
			countOfString++;
		}
	input.close();

	string *mas = new string[countOfString];

	//������ �� ����� � ������ �����
	input.open(File_1, ios_base::in);
		for (int i = 0; i < countOfString; i++)
		{
			getline(input, mas[i]);
		}
	input.close();

	//����� ������ � ��������� ���� output1
	fstream output_1(File_1, ios_base::out);

	if (!output_1)
	{
		cout << "error_the_file_" << File_1 << "_doesn't_exist" << endl;
		system("pause");
		return 1;
	}

	for (int i = 0; i < countOfString; i++)
	{
		output_1 << mas[i] << "\t#" << i + 1 << " size: " << size(mas[i]) << endl;
	}
	output_1.close();

	int sizeOfLine;
	cout << "Input the size of line: "; cin >> sizeOfLine;

	//����� ������ � ��������� ���� output2
	fstream output_2(File_2, ios_base::out);

	if (!output_2)
	{
		cout << "error_the_file_" << File_2 << "_doesn't_exist" << endl;
		system("pause");
		return 1;
	}

	for (int i = 0; i < countOfString; i++)
	{
		if (size(mas[i]) > sizeOfLine)
		{
			output_2 << mas[i] << endl;
		}
	}
	output_2.close();

	cout << "editing the file is complete" << endl;

	system("pause");
	return 0;
}