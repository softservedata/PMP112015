#include<iostream>
#include"OutputtingMatrix.h"
using namespace std;

void OutputtingMatrix()
{
	// ���� �� �����
	for (int rowNum = 0; rowNum < Sizer; rowNum++)
	{
		cout << " | ";
		for (int columnNum = 0; columnNum < Sizes; columnNum++)
		{
			cout << setw(4) << ourMatrix[rowNum][columnNum] << "  ";
		}
		cout << "|" << endl;
	}
}