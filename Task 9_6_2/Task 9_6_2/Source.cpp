#include <iostream>
#include <cstdlib>
#include"Stack.h"
#include"Push.h"
#include"Pop.h"
#include"Show.h"
using namespace std;

/*const int N = 100;

struct STACK {

	int arr[N];
	int count;

};

void Initial(STACK *ps)
{

	ps->count = 0;

}*/





/*void Push(STACK *ps)
{
	cout << "Enter elment: ";
	int el;
	cin >> el;
	ps->arr[ps->count] = el;
	ps->count++;
}*/


/*void Pop(STACK *ps)
{
	ps->count--;
}*/

/*void Show(STACK *ps)
{
	for (int i = 0; i<ps->count; i++)
		cout << ps->arr[i] << " ";
}*/

int main()
{

	STACK s;
	Initial(&s);
	char otv;
	do
	{
		cout << "1. Add element to the top of the stack" << endl
			<< "2. Delete element from the top of the stack" << endl
			<< "3. Print elements of the stack " << endl
			<< "4. Check wether stack is empty" << endl
			<< "5. Check wether stack is full " << endl
			<< "0. Close" << endl
			<< " = ";
		cin >> otv;
		switch (otv)
		{
		case '1':

				Push(&s);
				cout << endl << "Element added" << endl;
			
			break;

		case '2':

				Pop(&s);
				cout << endl << "Element deleted" << endl;
			
			break;

		case '3':

				cout << endl << "Element(s) of the stack: " << endl;
				Show(&s);
				cout << endl;
			
			break;

		case '4':
			int k;
			if (s.count == 0)
				cout << endl << "Stack is empty" << endl;
			else
				cout << endl << "In the stack is " << s.count << " element(s)" << endl;
			break;

		case '5':

			if (s.count == N)
				cout << endl << "Stack is full" << endl;
			else
				cout << endl << "You can add " << N - s.count << " element(s)" << endl;
			break;

		case '0':

			break;

		default:

			cout << endl << "Error!" << endl;
			break;

		}

	} while (otv != '0');
	cin.get();

}