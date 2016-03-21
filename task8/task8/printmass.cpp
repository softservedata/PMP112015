#include <iostream>
#include "printmass.h"
using namespace std;
void printmass(int *a,int n)
{
	int i; 
	for (i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}