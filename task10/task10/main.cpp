#include<iostream>
using namespace std;
class setelem
{
private:
	int*a;
	int n;
	int k;
public:
	setelem(int count=50)
	{
		k=0;
		n=count;
		a=new int[n];
		for (int i=0;i<n;i++) 
		{a[i]=0;}
	};
	~setelem()
	{
		delete a;
	};
	int give(int m)
	{
		return(a[m]);
	};
	int givenumber()
	{
		return(k);
	};
	void minus(setelem sub)
	{
		int m=sub.givenumber(),x;
		cout<<"result: ";
		for (int i=0;i<k;i++)
		{
			x=1;
			for (int j=0;j<m;j++)
			{
				if((a[i]==sub.give(j))||(sub.give(j)==(a[i]%10)*10+a[i]/10))
				{x=0;}
			}
			if(x)
			{cout<<"("<<a[i]/10<<" "<<a[i]%10<<")"<<" ";}
		}
		cout<<"\n";
	};
    bool add(int elem)
	{
		
		bool exist=false;
		for (int i=0;i<k;i++)
		{
			if(a[i]==elem)
			{
				exist=true;
			    break;
			}
		}
		if (!exist)
		{
			a[k]=elem;
			k++;
		}
		return exist;
	};
	void show ()
	{
		int i;
		for(i=0;i<k;i++)
		{cout<<"("<<a[i]/10<<" "<<a[i]%10<<")"<<" ";}
		cout<<"\n";
	};
};
int main()
{
	setelem g1,g2;
	g1.add(12);
	g1.add(23);
	g1.add(34);
	g2.add(13);
	g2.add(32);
	g2.add(21);
	g1.show();
	g2.show();
	g1.minus(g2);
	system("pause");
}