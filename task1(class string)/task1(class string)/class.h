#pragma once
#include<iostream>
using namespace std;
class myString
{
private:
	int s;
	char* str;
public:
	myString(int s=253)
	{
		this->s = s;
		this->str = new char[s];
		this->str[0] = '\0';
		cout << "\nConstructor DEFAULT";
	}
	myString(myString& temp)
	{
		this->s = temp.s;
		this->str = new char[s];
		this->str[0] = '\0';
		cout << "\nConstructor COPY";
	}
	~myString()
	{
		delete[] str;
		cout << "\ndestructor done\n";
	}
	void read()
	{
		cout << "\ninput row = ";
		cin.getline(str, s);
	}
	void print()
	{
		cout << "\nrow is: " << str << endl;
	}
	myString change(myString &temp)
	{
		this->str = temp.str;
		int i = strlen(str);
		for (int j = 0; j < i; j++)
		{
			while (((str[j] == ' ') && (str[j + 1] == ' ')) || ((str[j] == ' ') && (str[j - 1] == ' ')))
			{
				i = strlen(str);
				for (int z = j; z < i - 1; z++)
				{
					str[z] = str[z + 1];
				}
				str[i - 1] = '\0';
				break;
			}
		}
		return *this;
	}
	/*void change()
	{
		int i = strlen(str);
		for (int j = 0; j < i; j++)
		{
			while (((str[j] == ' ')&&(str[j+1]==' '))||( (str[j] == ' ') && (str[j - 1] == ' ')))
			{
				i = strlen(str);
				for (int z = j; z < i - 1; z++)
				{
					str[z] = str[z + 1];
				}
				str[i-1] = '\0';
				break;
			}
		}
	}*/
};