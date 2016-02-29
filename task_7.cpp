// All common multiples of two numbers (m,n)
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int n, m, k; // k - common multiple
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	for (k = 1; k < m*n; k++)
	{
		if (m % k == 0 && n % k == 0)
		{
			cout << k << endl;
		}
	}
	_getch();
	return 0;
}
