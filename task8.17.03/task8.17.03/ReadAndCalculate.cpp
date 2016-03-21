#include<iostream>
#include<string>
#include"ReadAndCalculate.h"
#include"OutResult.h"
using namespace std;
int ReadAndCalculate(int m)
{
	int n;
	cout << "how many numbers in this group (4-50) ?  ";
	cin >> n;
	for (int i = 1; i <= m; i++)
	{
		int spos;
		float a;
		spos = 0;
		for (int j = 1; j <= n; j++)
		{
			cout << "print number  ";
			cin >> a;
			if (a > 0)
			{
				spos = spos + 1;	
			}
		}
		cout << OutResult(spos) << endl;

	}
	return 0;
}