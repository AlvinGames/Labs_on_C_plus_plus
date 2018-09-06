#include<ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	FILE *f; int dat;
	srand(time(NULL));
	int n = rand() % 30 + 1;
	cout << "File name? ";
	char s[20];
	cin.getline(s, 20);
	f = fopen(s, "wb");
	for (int i = 1; i <= n; i++)
	{
		dat = rand() % 101 - 50;
		cout << dat << " ";
		fwrite(&dat, sizeof(int), 1, f);
	}
	cout << endl;
	fclose(f);
	system("PAUSE");
	return EXIT_SUCCESS;
}