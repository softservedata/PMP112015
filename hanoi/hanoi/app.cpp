#include <iostream>
#include "hanoi.h"
#include "input.h"
using namespace std;

int main()
{
	int n=input();
	Queue a(n);
	for (int i = 0; i < n; i++)
	{
		a.push(1);
	}
	a.out(a);
	hanoi_towers(a, 1, 3, 2);
	system("pause");
}