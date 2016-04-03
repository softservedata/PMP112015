#include <iostream>
#include <cstdlib>
#include"Stack.h"
#include"Show.h"

using namespace std;

void Show(STACK *ps)
{
	for (int i = 0; i<ps->count; i++)
		cout << ps->arr[i] << " ";
}