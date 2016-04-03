#include<iostream>
#include <cstdlib>
#include"Stack.h"
#include"Pop.h"
using namespace std;

void Pop(STACK *ps)
{
	ps->count--;
}