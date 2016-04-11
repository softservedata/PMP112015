#include <iostream>
#include "Node.h"
#include "Stack.h"
using namespace std;

void push(Node *Stack, char el)
{
	Node *t = new Node;
	t->el = el;
	t->l = Stack;
	Stack = t;
}

char pop(Node *Stack)
{
	char i = Stack->el;
	Node *t = Stack;
	Stack = Stack->l;
	delete t;
	return i;
}

bool isEmpty(Node *Stack)
{
	return Stack == NULL ? true : false;
}

bool isnCons(char el)
{
	bool ans = false;
	char ncons[] = { "aeiouy" };
	for (int i = 0; i < 6; i++)
	{
		if (el == ncons[i])
		{
			ans = true;
		}
	}
	return ans;
}