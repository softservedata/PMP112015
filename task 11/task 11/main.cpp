#include <iostream>
using namespace std;
void main()
{
	char s[253];
	int max1=0, max2=0, min1=0, min2=253, a=0, b=0, c=0, d=0;
	cout << "enter a string ";
	cin.getline(s, 253);
	int size = strlen(s);
	for (int i = 0; i < size; i++)
	{
		if (s[i] == ' '| s[i] == '.')
		{
			b = i;
			d = i;
			if ((b - a) > (max2 - max1))
			{
				max2 = b;
				max1 = a;
				
			}
			a = b+1;
			if ((d - c) < (min2 - min1))
			{
				min2 = d;
				min1 = c;
			}
			c = d+1;
		}
	}
	cout << "max ";
	for (max1; max1 < max2; max1++)
	{
		cout << s[max1];
	}
	cout << endl << "min ";
	for (min1; min1 < min2; min1++)
	{
		cout << s[min1];
	}
	cout << endl;
	system("pause");
}