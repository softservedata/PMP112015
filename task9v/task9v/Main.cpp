#include <iostream>
#include "Stack.h"
#include "createsort.h"

using namespace std;

int main()
{
	int n,i;
	cout<<"n=";
	cin>>n;
	
	createsort(n);
	Show();
	Destroy();
	system("PAUSE");
	return 0;

}