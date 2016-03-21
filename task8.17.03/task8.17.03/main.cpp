#include<iostream>
#include<string>
#include"ReadGroups.h"
#include"OutResult.h"
#include"ReadAndCalculate.h"
using namespace std;
int main()
{
	int m;
	m = ReadGroups();
	ReadAndCalculate(m);
	system("pause");
}