#ifndef HEADER_H
#define HEADER_H
#include <iostream>

using namespace std;

class strin
{
private:
	char String[253];
public:
	strin()
	{
		char a[253] = "/0";
		strcpy_s(String, a);
	}
	strin(char a[253])
	{ 
		strcpy_s(String, a);
	}
	void set_string()
	{
		cout << "Input string. ";
		gets_s(String);
	}
	~strin(){ cout << "\nÄĺńňđęóęňîđ\n"; }
	void show();
};
#endif

int main()
{
	setlocale(LC_ALL, "Russian");
	strin string;
	string.set_string();
	string.show();
	system("pause");
	return 0;
}

void strin::show()
{
	char letters[253];
	int number[253];
	int k = 0;
	for (int i = 0; i < 253; ++i)
	{
		int l = 0;
		for (int m = 0; m < k; ++m)
		{
			if (String[i] == letters[m])
			{
				l++;
			}
		}
		if (l == 0)
		{
			letters[k] = String[i];
			int a = 0;
			for (int j = i; j < 253; ++j)
			{
				if (String[i] == String[j])
				{
					a++;
				}
			}
			number[k] = a;
			k++;
		}
	}
	for (int i = 0; i < k - 2; ++i)
	{
		for (int j = 0; j < k - 3; ++j)
		{
			if (int(letters[j]) > int(letters[j + 1]))
			{
				swap(letters[j], letters[j + 1]);
				swap(number[j], number[j + 1]);
			}
		}
	}
	for (int i = 0; i < k - 2; ++i)
	{
		cout << letters[i] << " - " << number[i] << endl;
	}
}
