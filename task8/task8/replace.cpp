#include <iostream>
#include "replace.h"
using namespace std;
int* replace(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if ((a[i] % 3 == 0) || (a[i] % 10 == 3))
	    {
			a[i] = -3;
	    }
	}
	return(a);
}