#include<iostream>
#include<cmath>

using namespace std;

const double pi = 22 / 7.0;

double areaOfSphere(double radius);
double volumeOfSphere(double radius);

int main()
{
	setlocale(LC_ALL, ("Russian"));

	double radius;
	cout << "Enter sphere radius: ";

	while (!(cin >> radius) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "You have to enter number: ";
	}
	while (radius < 0)
	{
		cout << "Radius of the sphere can't be negative" << endl;
		cout << "Enter sphere radius repeatedly: ";
		while (!(cin >> radius) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "You have to enter number: ";
		}
	}

	cout << "Sphere surface area = " << areaOfSphere(radius) << endl;
	cout << "Sphere volume = " << volumeOfSphere(radius) << endl;

	system("pause");
	return 0;
}

double areaOfSphere(double radius)
{
	double area = 4 * pi*pow(radius, 2);
	return area;
}

double volumeOfSphere(double radius)
{
	double volume = 4 / 3 * pi*pow(radius, 3);
	return volume;
}
