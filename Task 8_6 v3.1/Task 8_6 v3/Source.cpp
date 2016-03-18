#include <iostream>
#include <iomanip> 
#include<Windows.h>
#include"InputMatrix.h"
#include"OutputtingMatrix.h"
#include"CheckingMatrix.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	InputMatrix();
	OutputtingMatrix();
	CheckingMatrix();

	

	system("pause");
}