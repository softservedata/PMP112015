#include<iostream>
#include"CheckingMatrix.h"
using namespace std;

void CheckingMatrix()
{
	//��������� ���������� ������
	int sum = 0;
	for (int rowNum = 0; rowNum < Sizer; rowNum++)
	{
		for (int columnNum = 0; columnNum < Sizes; columnNum++)
		{
			if ((sqrt(ourMatrix[rowNum][columnNum]) - int(sqrt(ourMatrix[rowNum][columnNum]))) == 0)
			{
				sum = sum + 1;
				cout << "�������� ����� � � " << rowNum + 1 << "-��� �����: ";
				cout << ourMatrix[rowNum][columnNum] << " " << endl;;

			}
		}
	}
}