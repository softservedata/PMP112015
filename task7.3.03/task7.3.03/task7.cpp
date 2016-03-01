#include<iostream>
using namespace std;
void main()
{
	double n;
	cout << "n=";
	cin >> n;
	int a = 2;
	while (a <= n)
	{
		a = a*2;
	}
	cout << a;
}