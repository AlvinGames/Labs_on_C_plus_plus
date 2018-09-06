//Source_main.cpp
//

#include<iostream>
#include"interface.h"
#include"input.h"

using namespace std;

int main()
{
	bool isWork = true;
	int operation;

	cout << "Welcom to the digital directory:" << endl;

	unicRec(FILE);

	while (isWork)
	{
		cout << "\n1 create data of directory" << endl;
		cout << "2 read data of directory" << endl;
		cout << "3 add data of directory" << endl;
		cout << "4 delete data of directory" << endl;
		cout << "5 edit data of directory" << endl;
		cout << "6 find data of directory" << endl;
		cout << "7 remove data of directory" << endl;
		cout << "0 exit" << endl;

		cout << "\nYour operation: "; input(operation);

		switch (operation)
		{
		case 1: createData(FILE); break;
		case 2: viewData(FILE); break;
		case 3: addData(FILE); break;
		case 4: deleteData(FILE); break;
		case 5: editData(FILE);  break;
		case 6: findData(FILE); break;
		case 7: removeData(FILE); cout << "data is removed" << endl; break;
		case 0: isWork = false; break;
		default: cout << "Sorry, you must input number from 0 to 6" << endl; continue;
		}
	}

	return 0;
}