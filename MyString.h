#include<iostream>
#include<stdlib.h>
using namespace std;

#ifndef MYSRTING_H

class MyString
{
private:
	int maxn;
	char *name;
public:
	MyString()
	{
		this->maxn=1;
		this->name = new char[maxn];
		this->name[0]='\0';
		//cout<<"ndefault constructor done"<<endl;
	}
	MyString(int maxn)
	{
		this->maxn=maxn;
		this->name = new char[maxn];
		for (int i=0; i<maxn; i++)
		{
			this->name[i]='/0';
		}
		
	}
	MyString(MyString &string)
	{

		this->name = new char[string.maxn];
		for (int i = 0; i<string.maxn; i++) name[i] = string.name[i];
	}
	~MyString()
	{
		delete[] name;

	}
	void read()
	{
		cout<<"input row = ";
		cin.ignore();
		cin.getline(name,maxn);
	}
	void print()
	{
		cout << "row is:" << name << endl;
	}
	void  BubbleSorting(char *array, int size)
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

	bool RowsAreEquals(char * array1, char *array2,int size)
	{
		bool equality = true;
		for (int i = 0; i < size; i++)
		{
			if (array1[i] != array2[i])
			{
				equality = false;
				break;
			}
		}
		return equality;
	}

	void AlphabetWordsPrinting()
	{
		char tmpstring_sorted[253] = "";
		char tmpstring_not_sorted[253] = "";
		int t = 0;
		cout << "Result:";
		for (int i = 0; i < maxn + 1; i++)
		{
			if (name[i] == '\0' || name[i] == ' ')
			{
				BubbleSorting(tmpstring_sorted, t);
				if (RowsAreEquals(tmpstring_not_sorted, tmpstring_sorted, t))
				{
					for (int i = 0; i < t; i++)
						cout << tmpstring_not_sorted[i];
					cout << " ";
					t = 0;
					char *tmpstring_sorted = new char[253]; tmpstring_sorted = "";
					char *tmpstring_not_sorted = new char[253]; tmpstring_not_sorted = "";


				}
				t = 0;
				char *tmpstring_sorted = new char[253]; tmpstring_sorted = "";
				char *tmpstring_not_sorted = new char[253]; tmpstring_not_sorted = "";
			}
			else
			{

				tmpstring_sorted[t] = name[i];
				tmpstring_not_sorted[t] = name[i];
				t++;

			}
		}

	}
};

#define MYSRTING_H
#endif
