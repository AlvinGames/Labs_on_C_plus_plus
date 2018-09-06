//Laba5_main.cpp
//

#include<iostream>

using namespace std;

template<int size1, int size2>
void output(unsigned (&mas)[size1][size2]);

template<int size1, int size2>
void best(unsigned(&mas)[size1][size2]);

int main()
{
	unsigned progress[5][3]
	{
		1,2,3,
		4,5,6,
		1,9,6,
		6,8,6,
		5,8,4
	};

	output(progress);
	cout << endl;

	best(progress);


	system("PAUSE");
	return EXIT_SUCCESS;
}

template<int size1, int size2>
void output(unsigned(&mas)[size1][size2])
{
	for (int i = 0; i < size1; i++)
	{
		cout << "Plyer number " << i + 1 << " - results: ";

		for (int j = 0; j < size2; j++)
		{
			cout << mas[i][j] << " ";
		}

		cout << endl;
	}
}

template<int size1, int size2>
void best(unsigned(&mas)[size1][size2])
{
	int sportsman = 0;
	int numOfResult = 0;
	unsigned result = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mas[i][j] > result)
			{
				sportsman = i;
				numOfResult = j;
				result = mas[i][j];				
			}
		}
	}

	cout << "Best:" << endl;
	cout << "Player number " << sportsman + 1 << endl;
	cout << "Result number: " << numOfResult + 1 << " = " << result << endl;
}