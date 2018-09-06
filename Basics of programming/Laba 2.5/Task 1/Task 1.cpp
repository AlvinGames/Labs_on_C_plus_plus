//task1_main.cpp
//

#include<iostream>
#include"interface.h"

using namespace std;

int main()
{
	bool isWork = true;
	int operation;

	cout << "Welcom to the digital magazine of students:" << endl;

	while (isWork)
	{
		cout << "\nInput 1 create data of studets" << endl;
		cout << "Input 2 read data of students" << endl;
		cout << "Input 3 add data of student" << endl;
		cout << "Input 4 delete data of student" << endl;
		cout << "Input 5 edit data of student" << endl;
		cout << "Input 6 find data of student" << endl;
		cout << "Input 0 exit" << endl;
		
		cout << "\nYour operation: "; input(operation);

		switch (operation)
		{
		case 1: createData(); break;
		case 2: viewData(FILE_1); break;
		case 3: addData(); break;
		case 4: deleteData(); break;
		case 5: editData();  break;
		case 6: findData(); break;
		case 0: isWork = false; break;
		default: cout << "Sorry, you must input number from 0 to 6" << endl; continue;
		}
	}
	
	return 0;
}