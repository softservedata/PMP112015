#include<iostream>
#include"CheckingMatrix.h"
using namespace std;

void CheckingMatrix()
{
	//підрахунок квадратних коренів
	int sum = 0;
	for (int rowNum = 0; rowNum < Sizer; rowNum++)
	{
		for (int columnNum = 0; columnNum < Sizes; columnNum++)
		{
			if ((sqrt(ourMatrix[rowNum][columnNum]) - int(sqrt(ourMatrix[rowNum][columnNum]))) == 0)
			{
				sum = sum + 1;
				cout << "Квадратні корені є в " << rowNum + 1 << "-ому рядку: ";
				cout << ourMatrix[rowNum][columnNum] << " " << endl;;

			}
		}
	}
}