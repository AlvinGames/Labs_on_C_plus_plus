#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void fillMas(double matrix[8][8]);
void outMas(double matrix[8][8]);
void additionMas(double matrix1[8][8], double matrix2[8][8], double matrix3[8][8]);

int main()
{
	srand(time(NULL));

	double A[8][8];
	double B[8][8];

	fillMas(A);
	fillMas(B);

	cout << "Your first massiv:" << endl;
	outMas(A);
	cout << "Your second massiv:" << endl;
	outMas(B);

	double C[8][8];
	additionMas(C, A, B);

	cout << "Your result massiv:" << endl;
	outMas(C);

	system("pause");
	return 0;
}

void fillMas(double matrix[8][8])
{
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			matrix[i][j] = rand() % 91 + 10;
}
void outMas(double matrix[8][8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout.width(4);
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void additionMas(double matrix1[8][8], double matrix2[8][8], double matrix3[8][8])
{
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			matrix1[i][j] = matrix2[i][j] + matrix3[i][j];
}