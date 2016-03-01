#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	int number, first;
	int last, count = 0;
	int centr;

	cout << "Type the number:";
	cin >> number;

	if (number >= 10)
	{
		last = number % 10;
		first = number;
		while (first>10)
		{
			first /= 10; count++;
		}
		centr = ((number % int(pow(10, count))) / 10) * 10;
		cout << "result:" << last*pow(10, count) + centr + first << endl;
	}
	else
		cout << "result:" << number << endl;


	system("PAUSE");
}