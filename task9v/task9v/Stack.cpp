#include <iostream>
#include "Stack.h"

using namespace std;

struct DoubleList
{
	int data;
	DoubleList * next;
	DoubleList * prev;
};
DoubleList *head = NULL;
DoubleList *newCell = NULL;
DoubleList *current = NULL;
DoubleList *last = NULL;


void PUSH(int value)
{
	if (head != NULL)
	{
		newCell = new DoubleList;
		newCell->data = value;
		newCell->next = NULL;
		newCell->prev = current;
		current->next = newCell;
		last = newCell;
		current = newCell;
	}
	else

	{
		newCell = new DoubleList;
		newCell->data = value;
		head = newCell;
		newCell->next = NULL;
		newCell->prev = NULL;
		current = newCell;
		last = head;
	}
}





//void POP(void)
//{
//	
//	if (head == NULL)
//	{
//		cout << "Empty stack";
//	}
//	DoubleList *p, *p1;
//	p = head;
//	p1 = p->next;
//	while (p1->next != NULL)
//	{
//		p = p1;
//		p1 = p1->next;
//	}
//	p->next = NULL;
//	delete p1;
//
//}

void Show(void)
{
	struct DoubleList *info;
	info = head;
	if (head == NULL)
	{
		cout << "Empty stack";
	}
	while (info)
	{
		cout << info->data << " ";
		info = info->next;
	}
	cout << "\n";
}



void Destroy(void)
{
	
		DoubleList * p, *p1;
		p = head;
		p1 = p->next;
		while (p1 != NULL)
		{
			p = p1;
			p1 = p1->next;
			delete p;
		}
	
}