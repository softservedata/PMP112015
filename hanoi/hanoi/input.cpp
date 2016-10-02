#include <iostream>
#include"input.h"
using namespace std;
int input()
{
	int n;
	cout << "input number of disks (1-10)  " << endl;
	cin >> n;
	if ((n < 1) || (n>10))
	{
		cout << "incorrect data..." << endl << "Loading default value..." << "n=3" << endl;
		return 3;
	}
	return n;
}
