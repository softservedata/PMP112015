#include <iostream>
#include "Stack.h"
#include "createsort.h"

using namespace std;

void createsort(int n)
{
	int i;
	int*a=new int[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"a"<<i<<"=";
		cin>>a[i];}

	for(i=0;i<n;i++)
	{
		if (a[n-1-i]%2==0)
		{PUSH(a[n-1-i]);}
	}
	for(i=0;i<n;i++)
	{
		if (a[n-i-1]%2!=0)
		{PUSH(a[n-i-1]);}
	}
}