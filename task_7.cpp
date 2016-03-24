#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	unsigned int n, a, s = 0, l = 0;
	cout << "n = ";
	cin >> n;
	for (int k = 1; k <= n; k++)
	{
		cout << "a = ";
		cin >> a;
		if (a % 5 == 0 && a % 3 != 0)
		{
			s = s + a;
			l++;
		}
	}
	cout << "Sum = " << s << endl << "Amount = " << l << endl;
	system("pause");
}
