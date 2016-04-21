#include <iostream>
using namespace std;

char line[253];
char replace[759];

int main()
{
	cout << "Line:";
	cin.getline(line, 253);
	int n = strlen(line);
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (line[i] == 'x')
		{
			replace[j] = 'i';
			replace[j + 1] = 'k';
			replace[j + 2] = 's';
			j = j + 3;
		}
		else
		{
			replace[j] = line[i];
			j++;
		}
	}
	cout << "Replaced line:";
	for (int i = 0; i < j; i++)
	{
		cout << replace[i];
	}

	cout << endl;
	system("pause");
	return 0;
}