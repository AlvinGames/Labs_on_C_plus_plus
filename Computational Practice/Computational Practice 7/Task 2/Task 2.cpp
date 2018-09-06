#include<iostream>
#include<string>

using namespace std;

int main()
{
	string S, S0;

	cout << "Input the line: "; getline(cin, S);

	cout << "Input the substring: "; getline(cin, S0);

	int count = 0;

	for (int i = 0; i < S.length(); ++i)
		if (S[i] == S0[0])
			if (S.substr(i, S0.length()) == S0)
			{
				count++;
				i += S0.length() - 1;
			}

	cout << "number of occurrence of sublines = " << count << endl;

	system("pause");
	return 0;
}