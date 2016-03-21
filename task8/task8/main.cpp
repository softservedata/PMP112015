#include <iostream>
#include"replace.h"
#include"moove.h"
#include"getamount.h"
#include"createmass.h"
#include"printmass.h"
using namespace std;
int main()
{
	int n,i,k; 
	n = getamount();
	int *a = new int[n];
	int *b = new int[n];
	a = createmass(n);
	printmass(a,n);
	a = replace(a,n);
	printmass(a,n);
	b = moove(a,n);
	printmass(b,n);
	system("pause");
}