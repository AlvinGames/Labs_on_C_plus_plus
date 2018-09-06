#include<iostream>

using namespace std;

struct Stack
{
	Stack *next;
	int inf;
};

void push(Stack* &next, int inf);
void pop(Stack* &next);
void peek(Stack *next);
void stackList(Stack *next);
bool isEmpty(Stack *next);

int main()
{
	const int size = 5;

	Stack *el = NULL;

	if (isEmpty(el)) cout << "Stack is empty" << endl;
	else cout << "Stack is not empty" << endl;

	cout << "Fill the stack: ";
	for (int i = 0; i < size; i++)
	{
		int x; cin >> x;
		push(el, x);
	}

	if (isEmpty(el)) cout << "Stack is empty" << endl;
	else cout << "Stack is not empty" << endl;

	cout << "#1 Your stack: ";
	stackList(el);
	
		cout << endl;

	cout << "#2 Your stack: ";
	for (int i = 0; i < size; i++)
	{
		peek(el);
		pop(el);
	}
		cout << endl;

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

void peek(Stack * next)
{
	int x = next->inf;
	cout << x << " ";
}

void stackList(Stack * next)
{
	while (next != NULL)
	{
		peek(next);
		next = next->next;
	}
}

bool isEmpty(Stack * next)
{
	if (next == NULL) return true;
	return false;
}
