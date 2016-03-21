#include <iostream>
#include "createmass.h"
using namespace std;
int* createmass(int n)
{
	int i; 
	int *a=new int[n];
	for (i = 0; i < n; i++)
	{
		cout<<"a"<<i+1<<"=";
		cin>>a[i];
	}
	return(a);
}