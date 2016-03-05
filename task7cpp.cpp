#include<iostream>
using namespace std;
void main()
{
	int n;
	int y = 0;
	cout << "Enter n" << endl;
	cin >> n;
	while (n != 0)
	{
		y = y * 10 + n % 10;
		n /= 10;
	}
	cout << y << endl;
}