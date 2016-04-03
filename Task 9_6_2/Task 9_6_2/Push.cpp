#include <iostream>
#include <cstdlib>
#include"Stack.h"
#include"Push.h"
using namespace std;


void Push(STACK *ps)
{
	cout << "Enter elment: ";
	int el;
	cin >> el;
	ps->arr[ps->count] = el;
	ps->count++;
}