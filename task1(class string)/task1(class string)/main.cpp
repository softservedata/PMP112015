#include<iostream>
#include "class.h"
using namespace std;
void main()
{
	myString *str1 = new myString();
	myString *str2 = new myString();
	str1->read();
	str1->print();
	str2->change(*str1);
	str2->print();
	system("pause");
}