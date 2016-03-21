Array.cpp  // Створює масив символів
#include <iostream>
#include<string>
#include"Array.h"
using namespace std;
string Array(int n, char*a)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]  ";
		cin >> a[i];
	}
	return a;  
}



Result.cpp //Виводить потрібні значення на екран
#include <iostream>
#include<string>
#include"Array.h"
#include"Change.h"
using namespace std;
string Result(int n, char*a)
{
	for (int i = 0; i < n; i++)
	{
		cout << Change(a[i])<<","; 
	}
	return " ";
}






Array.h
#ifndef ARRAY_H
#define ARRAY_H
#include<string>
using namespace std;
string Array(int n, char*a);
#endif

Change.h
#ifndef CHANGE_H
#define CHANGE_H
#include<string>
using namespace std;
string Change(char l);
#endif

ReadGroups.h
#ifndef READGROUPS_H
#define READGROUPS_H
using namespace std;
void ReadGroups();
#endif

Result.h
#ifndef RESULT_H
#define RESULT_H
#include<string>
using namespace std;
string Result(int n, char*a);
#endif


Main.cpp: //Основна функція.

#include <iostream>
#include<string>
#include "ReadGroups.h"
#include "Array.h"
#include "Change.h"
#include "Result.h"
using namespace std;
int main()
{
	ReadGroups(); 
}

ReadGroups.cpp :
#include <iostream>
#include <string>
#include "ReadGroups.h"
#include "Array.h"
#include "Change.h"
#include "Result.h"
using namespace std;
void ReadGroups()
{
	int t;
	cout << "input how many groups (2-10)  ";
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int k;
		char*a;
		cout << "how many symbols (4-50) ?   ";
		cin >> k;
		a = new char[k];
		Array(k, a); 
		Result(k, a);
	}
}

Change.cpp :
#include <iostream>
#include<string>
#include"Change.h"
using namespace std;
string Change(char l)
{
	if ((int(l)>=-96)&&(int(l)<=-81))
	    cout<<char(int(l)-32);
	if ((int(l)>=-32) && (int(l)<=-17))
		cout << char(int(l)- 80);
	if (int(l)==-13)
		cout << char(int(l) - 1);
	if (int(l) == -11)
		cout << char(int(l) - 1);
	if ((int(l)>=-128) && (int(l)<=-113))
		cout << char(int(l) + 32);
	if ((int(l)>=-112) && (int(l)<=-97))  
		cout << char(int(l) + 80);
	if (int(l) == -14)
		cout << char(int(l) + 1);
	if (int(l) == -12)
		cout << char(int(l) + 1);
	if (int(l) <= -129)
		cout << l;
	if ((int(l) >= -80) && (int(l) <= -33))
		cout << l;
	if ((int(l) >= -22) && (int(l) <= -21))
		cout << l;
	if (int(l) == -19)
		cout << l;
	if ((int(l) >= -16)&& (int(l) != -11) && (int(l) != -12) && (int(l) != -13) && (int(l) != -14))
		cout << l;
    return ",";
}
