#include <iostream>
using namespace std;



void BubbleSorting (char *array,int size)
{
	int tmp;
	bool exit = false;
	while (!exit)
	{
		exit = true;
		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				exit = false;
			}
		}
	}
}

int main()
{
	char string[253];
	cout << "String:";
	cin.getline(string, 253);
	char tmpstring[253]="";
	int t = 0;
	int length = strlen(string);
	cout << "Result:";
	for (int i = 0; i < length+1; i++)
	{
		if (string[i] == '\0' || string[i] == ' ')
		{
			BubbleSorting(tmpstring, t);
			for (int i = 0; i < t; i++)
				cout << tmpstring[i];
			cout << " ";
			t = 0;
			char *tmpstring = new char[253];

			tmpstring = "";
		}
		else
		{
			
			tmpstring[t] = string[i];
			t++;

		}
	}
	cout << endl;
	system("PAUSE");
	return 0;
}