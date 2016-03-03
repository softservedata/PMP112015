#include <iostream>
#include <cmath>

using namespace std;

int n,a,s=0,b;

int main()
{
	cout<<"n=";
	cin>>n;
	for(int i=0;i<n;i++)
	{
			cout<<"a ";
			cin>>a;
			b=sqrt(a);
			if((a>=0) && (b%2==0) && (b==sqrt(a)))
			{
				s=s+1;
			}
	}
	cout<<"s="<<s;
	system("pause");
	return 0;
}
