#include <iostream>
#include "moove.h"
using namespace std;
int* moove( int *a, int n)
{
	int i,k;
	int *b = new int[n];
	cout<<"k=";
	cin>>k;
	k=k%5;
	if (k>0)
	{
        for (i=0;i<n;i++)
		{
             if (i<k)
			 {b[i]=a[i+n-k];}
             else
			 {b[i]=a[i-k];}
		}
	}
    else
	{
         k=abs(k);
         for (i=0;i<n;i++)
		 {
              if (i+k<n)
			  {b[i]=a[i+k];}
              else
			  {b[i]=a[i+k-n];}
		 }
	}
	return(b);
}