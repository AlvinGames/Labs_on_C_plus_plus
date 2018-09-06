#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num, bool_1, bool_2=true;
	int Place_1[1], Place_2[1], Place_3[1], Place_4[1], Place_5[1];
	int Place_6[1], Place_7[1], Place_8[1], Place_9[1], Place_10[1];
	Place_1[0] = 0;
	Place_2[0] = 0;
	Place_3[0] = 0;
	Place_4[0] = 0;
	Place_5[0] = 0;
	Place_6[0] = 0;
	Place_7[0] = 0;
	Place_8[0] = 0;
	Place_9[0] = 0;
	Place_10[0] = 0;
	do
	{
		if (Place_1[0] == 0 || Place_2[0] == 0 || Place_3[0] == 0 || Place_4[0] == 0 || Place_5[0] == 0 || 
			Place_6[0] == 0 || Place_7[0] == 0 || Place_8[0] == 0 || Place_9[0] == 0 || Place_10[0] == 0)
		{
			cout << "Welcome to the airport" << endl;
			cout << "Input 1, please, for smoker\nInput 2, please, for non-smoker" << endl;
			cin >> num; cout << "\n";
			do
			{
				switch (num)
				{
				case 1:
					bool_1 = false;
					if (Place_1[0] == 0)
					{
						Place_1[0] = 1;
						cout << "Thank you for purchase\nYour place is number 1\n" << endl;
					}
					else if (Place_2[0] == 0)
					{
						Place_2[0] = 1;
						cout << "Thank you for purchase\nYour place is number 2\n" << endl;
					}
					else if (Place_3[0] == 0)
					{
						Place_3[0] = 1;
						cout << "Thank you for purchase\nYour place is number 3\n" << endl;
					}
					else if (Place_4[0] == 0)
					{
						Place_4[0] = 1;
						cout << "Thank you for purchase\nYour place is number 4\n" << endl;
					}
					else if (Place_5[0] == 0)
					{
						Place_5[0] = 1;
						cout << "Thank you for purchase\nYour place is number 5\n" << endl;
					}
					else
					{
						if (Place_6[0] == 0 || Place_7[0] == 0 || Place_8[0] == 0 || Place_9[0] == 0 || Place_10[0] == 0)
						{
							cout << "Places for smokers have come to an end. Would you like to choose the place for non-smoking?" << endl;
							cout << "If you agree input 1\nElse if you don't agree input 2" << endl;
							int bool_;
							do
							{
								int num_1;
								cin >> num_1; cout << "\n";
								switch (num_1)
								{
								case 1:
									bool_ = false;
									bool_1 = true;
									num = 2;
									break;
								case 2:
									bool_ = false;
									cout << "Thank you that have addressed\nthe following flight will take place in 3 hours\n" << endl;
									break;
								default:
									bool_ = true;
									cout << "You must inut 1 or 2" << endl;
									break;
								}
							} while (bool_);
						}
						
					}
					break;
				case 2:
					bool_1 = false;
					if (Place_6[0] == 0)
					{
						Place_6[0] = 1;
						cout << "Thank you for purchase\nYour place is number 6\n" << endl;
					}
					else if (Place_7[0] == 0)
					{
						Place_7[0] = 1;
						cout << "Thank you for purchase\nYour place is number 7\n" << endl;
					}
					else if (Place_8[0] == 0)
					{
						Place_8[0] = 1;
						cout << "Thank you for purchase\nYour place is number 8\n" << endl;
					}
					else if (Place_9[0] == 0)
					{
						Place_9[0] = 1;
						cout << "Thank you for purchase\nYour place is number 9\n" << endl;
					}
					else if (Place_10[0] == 0)
					{
						Place_10[0] = 1;
						cout << "Thank you for purchase\nYour place is number 10\n" << endl;
					}
					else
					{
						if (Place_1[0] == 0 || Place_2[0] == 0 || Place_3[0] == 0 || Place_4[0] == 0 || Place_5[0] == 0)
						{
							cout << "Places for non-smokers have come to an end. Would you like to choose the place for smoking?" << endl;
							cout << "If you agree input 1\nElse if you don't agree input 2" << endl;
							int bool_;
							do
							{
								int num_2;
								cin >> num_2; cout << "\n";
								switch (num_2)
								{
								case 1:
									bool_ = false;
									bool_1 = true;
									num = 1;
									break;
								case 2:
									bool_ = false;
									cout << "Thank you that have addressed\nthe following flight will take place in 3 hours\n" << endl;
									break;
								default:
									bool_ = true;
									cout << "You must inut 1 or 2" << endl;
									break;
								}
							} while (bool_);
						}
					}
					break;
				default:
					bool_1 = true;
					cout << "You must input 1 or 2" << endl;
					cin >> num; cout << "\n";
					break;
				}
			} while (bool_1);
		}
		else
		{
			bool_2 = false;
			cout << "Sorry, there are no places" << endl;
		}
	} while (bool_2);
	system("pause");
	return 0;
}