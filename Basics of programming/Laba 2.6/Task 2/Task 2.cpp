#include<iostream>
#include<string>

using namespace std;

struct Stack
{
	Stack *next;
	int inf;
};

void push(Stack *& next, int inf);
void pop(Stack *& next);

int main()
{
	string line;
	cout << "Input character string: "; cin >> line;

	Stack *el = NULL;

	bool flag = true;
	for (int i = 0; line[i] != '\0' && flag; i++)
	{
		if (line[i] == '(' || line[i] == ')')
			if (line[i] == '(') push(el, line[i]);
			else if (line[i] == ')' && el != NULL) pop(el);
			else flag = false;

		else if (line[i] == '[' || line[i] == ']')
			if (line[i] == '[') push(el, line[i]);
			else if (line[i] == ']' && el != NULL) pop(el);
			else flag = false;

		else if (line[i] == '{' || line[i] == '}')
			if (line[i] == '{') push(el, line[i]);
			else if (line[i] == '}' && el != NULL) pop(el);
			else flag = false;

		else if (line[i] == '<' || line[i] == '>')
			if (line[i] == '<') push(el, line[i]);
			else if (line[i] == '>' && el != NULL) pop(el);
			else flag = false;
	}

	if (flag && el == NULL) cout << "Good" << endl;
	else cout << "Bad" << endl;

	system("pause");
	return 0;
}

void push(Stack *& next, int inf)
{
	Stack *dv = new Stack;
	dv->inf = inf;
	dv->next = next;
	next = dv;
}
void pop(Stack *& next)
{
	if (next != NULL)
	{
		Stack *dv = next;
		next = next->next;
		delete dv;
	}
}