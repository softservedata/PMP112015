#include <iostream>
#include <ñstlib>
using namespace std;


int main()
{
	int  S=0;
	int n;
		cout << "n=";
	    cin >> n;
	int* m = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Element number " << i + 1 << "=";
		cin >> m[i];
	}

	for (int j = 1; j < n - 1; j++)
	{
		if (m[j] < ((m[j - 1] + m[j + 1]) / 2))
		{
			S = S + 1;
		}


	}
	    cout << S << endl;

		system("color F0");
		system("PAUSE");
		return 0;
}
