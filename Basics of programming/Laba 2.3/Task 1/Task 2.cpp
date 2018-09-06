#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

struct AEROFLOT
{
	int Flight;
	string startingPoint;
	string finishingPoint;
	string typeOfPlane;
	int timeOfPath;
	int ticketPrice;

	AEROFLOT();
	void outputDataOfStruct();
};

void outputData(AEROFLOT *data, int countFlight, int timeOfPause);//������� ������ �� �������
int indexOfFlight(AEROFLOT *data, int size, string finalPoint);//���������� ������ ����� �� �������� �������� �����
int indexOfFlight(AEROFLOT *data, int size, int numOfFlight);//���������� ������ ����� �� �������� ������ �����
void sortPrice(AEROFLOT *data, int size);//��������� ������ � ������ �� ����������� ���� ������
void sortFinalPoint(AEROFLOT *data, int size);//��������� ������ � ������ �� �������� �������� ������� ����������
void editOfData(AEROFLOT *data, int indexOfFlight);//����������� ���� �� �������

int main()
{
	int const timeOfPause = 250;
	int countFlight;
	

	cout << "Input count of flights: "; cin >> countFlight;
		cout << endl;

	AEROFLOT *dataOfFlight = new AEROFLOT[countFlight];

	//����� ������ �� �������
	outputData(dataOfFlight, countFlight, timeOfPause);
	
	int command;
	string finalPoint;
	int searchFlight;
	int index;
	do
	{
		
		cout << "If you want to search flight on finishing point input 1" << endl;
		cout << "If you want to sort flights by the price input 2" << endl;
		cout << "If you want to sort flights by the finishing point input 3" << endl;
		cout << "If you want to edit flights input 4" << endl;
		cin >> command;

		switch (command)
		{
		case 0: cout << "Have a good day" << endl; break;
		case 1:
			//����� ������ �� ������ ����������
			cout << "*Flight search/n Input finishing point: " << endl;
			cin >> finalPoint;
			//����� ������ ����� �� ������
			cout << "\nData of your search:" << endl;
			searchFlight = indexOfFlight(dataOfFlight, countFlight, finalPoint);
			dataOfFlight[searchFlight].outputDataOfStruct();
			break;
		case 2:
			//���������� ������ ������ �� ����������� ���� ������
			sortPrice(dataOfFlight, countFlight);
			outputData(dataOfFlight, countFlight, timeOfPause);
			break;
		case 3:
			//���������� ������ ������ �� �������� �������� ����� ����������
			sortFinalPoint(dataOfFlight, countFlight);
			outputData(dataOfFlight, countFlight, timeOfPause);
			break;
		case 4:
			//�������������� ������ ����� �� ��� ������
			int numOfFlight;
			cout << "Input number of flight which you want to edit: "; cin >> numOfFlight;
			index = indexOfFlight(dataOfFlight, countFlight, numOfFlight);
			editOfData(dataOfFlight, index);
			break;
		default: cout << "Error! unknown the command" << endl; break;
		}
	} while (command);
	return 0;
}

AEROFLOT::AEROFLOT()
{
	cout << "Input number of flight: "; cin >> Flight;
	cout << "Input starting point: "; cin >> startingPoint;
	cout << "Input finishing point: "; cin >> finishingPoint;
	cout << "Input type of plane: "; cin >> typeOfPlane;
	cout << "Input time of path: "; cin >> timeOfPath;
	cout << "Input price of ticket: "; cin >> ticketPrice;
		cout << endl;
}

void AEROFLOT::outputDataOfStruct()
{
	cout << "Number of the flight:\t\t\t" << Flight << endl;
	cout << "Starting point:\t\t\t" << startingPoint << endl;
	cout << "Finishing point:\t\t\t" << finishingPoint << endl;
	cout << "Type of the plane\t\t\t" << typeOfPlane << endl;
	cout << "Time of path\t\t\t" << timeOfPath << endl;
	cout << "Price of the ticket\t\t\t" << ticketPrice << endl;
		cout << endl;
};

void outputData(AEROFLOT *data, int countFlight, int timeOfPause)
{
	for (int i = 0; i < countFlight; i++)
	{
		Sleep(timeOfPause);
		data[i].outputDataOfStruct();
	}
}

int indexOfFlight(AEROFLOT * data, int size, string finalPoint)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i].finishingPoint == finalPoint)
		{
			return i;
		}
	}
}

int indexOfFlight(AEROFLOT * data, int size, int numOfFlight)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i].Flight == numOfFlight)
		{
			return i;
		}
	}
}

void sortPrice(AEROFLOT * data, int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (data[j].ticketPrice < data[min].ticketPrice)
			{
				min = j;
			}
		}
		AEROFLOT empty = data[min];
		data[min] = data[i];
		data[i] = empty;
	}
}

void sortFinalPoint(AEROFLOT * data, int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = 0; j < size; j++)
		{
			if (data[j].finishingPoint[1] < data[min].finishingPoint[1])
			{
				min = j;
			}
		}
		AEROFLOT empty = data[min];
		data[min] = data[i];
		data[i] = empty;
	}
}

void editOfData(AEROFLOT * data, int indexOfFlight)
{
	data[indexOfFlight] = AEROFLOT();
		cout << endl;
}
