/* омпоненты файла f Ц целые (отличные от нул€) числа,
четных чисел столько же, сколько нечетных. ѕолучить файл g,
в котором не было бы двух соседних чисел одинаковой четности
(сохранить пор€док следовани€ чисел).*/

#include<iostream>
#include<fstream>

using namespace std;

#define File_1 "f.txt"
#define File_2 "g.txt"

bool function(int number);

int main()
{
	int count = 0;
	int empty;
	fstream out(File_1, ios_base::in);
	while (!out.eof())
	{
		out >> empty;
		count++;
	}
	out.close();

	int *mas = new int[count];

	out.open(File_1, ios_base::in);
	for (int i = 0; i < count; i++)
	{
		out >> mas[i];
	}
	out.close();

	fstream in(File_2, ios_base::out);
	in << mas[0] << " ";
	for (int i = 1; i < count; i++)
	{
		if (function(mas[i - 1]) != function(mas[i]))
			in << mas[i] << " ";
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
