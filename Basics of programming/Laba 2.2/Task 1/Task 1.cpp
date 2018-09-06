#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

struct Data
{
	struct Money
	{
		int ruble;
		int kopeck;
	}money;
	struct Time
	{
		int hour;
		int minute;
		int second;
	}time;
	struct Date
	{
		int date;
		int month;
		int year;
	}date;
	struct Address
	{
		int index;
		string city;
		string street;
		int house;
		int apartment;

	}address;
	struct Student
	{
		string lastName;
		int numRecBook;
		int mark;
	}student;
	struct Exstate
	{
		string subject;
		int group;
		int dateExam;
		Student student[5];
	}exstate;
};

void InputData(Data *data);
void OutputData(Data data);

int main()
{
	Data dataBase;

	InputData(&dataBase);

	cout << "Your data:" << endl;
	OutputData(dataBase);

	system("pause");
	return 0;
}

void InputData(Data *data)
{
	//data of money
	{cout << "Input the price in rubles: "; cin >> data->money.ruble;
	cout << "Input the price in kopeck: "; cin >> data->money.kopeck;
		cout << endl; }

	//data of time
	{cout << "Input the time in hour: "; cin >> data->time.hour;
	cout << "Input the time in minute: "; cin >> data->time.minute;
	cout << "Input the time in seond: "; cin >> data->time.second;
		cout << endl; }

	//data of date
	{cout << "Input the date: "; cin >> data->date.date;
	cout << "Input the month: "; cin >> data->date.month;
	cout << "Input the year: "; cin >> data->date.year;
		cout << endl; }

	//data of address
	{cout << "Input the index: "; cin >> data->address.index;
	cout << "Input the name of city: "; cin >> data->address.city;
	cout << "Input the name of the street: "; cin >> data->address.street;
	cout << "Input the number of house: "; cin >> data->address.house;
	cout << "Input the number of apartment: "; cin >> data->address.apartment;
		cout << endl; }

	//data of subject
	{cout << "Input the subject: "; cin >> data->exstate.subject;
	cout << "Input the number of group: "; cin >> data->exstate.group;
	cout << "Input the date of examenation: "; cin >> data->exstate.dateExam;
		cout << endl; }

	//data of students
	for (int i = 0; i < 5; i++)
	{
		cout << "Student number " << i + 1 << endl;

		cout << "Input the last name: ";
		cin >> data->exstate.student[i].lastName;

		cout << "Input the number of record book: ";
		cin >> data->exstate.student[i].numRecBook;

		cout << "Input the mark: ";
		cin >> data->exstate.student[i].mark;
		cout << endl;
	}
}

void OutputData(Data data)
{
	Sleep(250);
	//data of money
	{cout << "Money in roble = " << data.money.ruble;
	cout << " and int kopeck = " << data.money.kopeck << endl;
		cout << endl; }

	Sleep(250);
	//data of time
	{cout << "Time: " << data.time.hour << " hours ";
	cout << data.time.minute << " minutes ";
	cout << data.time.second << " seconds " << endl;
		cout << endl; }

	Sleep(250);
	//data of date
	{cout << "Date: " << data.date.date;
	cout << " month: " << data.date.month;
	cout << " year: " << data.date.year << endl;
		cout << endl; }

	Sleep(250);
	//data of adress
	{cout << "Adress:" << endl;
	cout << "\tindex: " << data.address.index << endl;
	cout << "\tcity: " << data.address.city << endl;
	cout << "\tstreet: " << data.address.street << endl;
	cout << "\thouse number " << data.address.house << endl;
	cout << "\tapartment number " << data.address.apartment << endl;
		cout << endl; }

	Sleep(250);
	//data of exstate
	{cout << "Name of subject: " << data.exstate.subject << endl;
	cout << "Nmber of group: " << data.exstate.group << endl;
	cout << "Date of examenation: " << data.exstate.dateExam << endl;
		cout << endl; }

	Sleep(250);
	//data of students
	for (int i = 0; i < 5; i++)
	{
		cout << "Student number " << i + 1 << endl;
		cout << "Lastname: " << data.exstate.student[i].lastName << endl;
		cout << "Number of record book: " << data.exstate.student[i].numRecBook << endl;
		cout << "Mark: " << data.exstate.student[i].mark << endl;
		cout << endl;
	}
}