#include <iostream>
#include "Node.h"
#include "Stack.h"
using namespace std;
void main()
{
	int n, j=0;
	char el;
	char cn[20];
	Node* MyStack = new Node();
	cout << "Enter amount of small letters  ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter small letter  ";
		cin >> el;
		if (!isnCons(el))
		{
			push(MyStack, el);
		}
		else
		{
			cn[j] = el;
			j++;
		}
	}
	for (int i = 0; i < j; i++)
	{
		cout << cn[i] << " ";
	}
	delete[] cn;
	for (int i = 0; i < (n-j); i++)
	{
		MyStack = pop(MyStack);
	}
}
