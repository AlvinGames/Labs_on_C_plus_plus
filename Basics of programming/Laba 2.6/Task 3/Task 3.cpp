#include<iostream>
#include<string>

using namespace std;

struct Stack
{
	Stack *next;
	int inf;
};

void push(Stack *& next, int inf);
int pop(Stack *& next);

int main()
{
	string line;
	cout << "Input character string: "; cin >> line;

	Stack *el = NULL;

	for (int i = 0; line[i] != '\0'; i++)
	{
		if (line[i] >= '0' && line[i] <= '9') push(el, line[i] - '0');

		else if (line[i] == '+')
		{
			int x = pop(el);
			int y = pop(el);
			cout << "x = " << x << " y = " << y << endl;
			push(el, x + y);
		}

		else if (line[i] == '-')
		{
			int x = pop(el);
			int y = pop(el);
			cout << "x = " << x << " y = " << y << endl;
			push(el, x - y);
		}

		else if (line[i] == '*')
		{
			int x = pop(el);
			int y = pop(el);
			cout << "x = " << x << " y = " << y << endl;
			push(el, x * y);
		}

		else if (line[i] == '/')
		{
			int x = pop(el);
			int y = pop(el);
			cout << "x = " << x << " y = " << y << endl;
			push(el, x / y);
		}
	}

	cout << "Result = " << pop(el) << endl;
	
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
int pop(Stack *& next)
{
	if (next != NULL)
	{
		int x = next->inf;
		Stack *dv = next;
		next = next->next;
		delete dv;
		return x;
	}
}
