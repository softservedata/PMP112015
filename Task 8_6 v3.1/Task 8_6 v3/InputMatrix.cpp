#include<iostream>
#include"InputMatrix.h"
using namespace std;

void InputMatrix()

{
	int Sizer;
	int Sizes;
	cout << "ʳ������ �����:\n";
	cin >> Sizer;
	cout << "ʳ������ ��������:\n";
	cin >> Sizes;

	int** ourMatrix = new int*[Sizer];
	for (int i = 0; i < Sizer; i++)
		ourMatrix[i] = new int[Sizes];

	cout << "�������� ������� " << Sizer << '�' << Sizes << " ������� ����������.\n";
	for (int rowNum = 0; rowNum < Sizer; rowNum++)
	{
		for (int columnNum = 0; columnNum < Sizes; columnNum++)
		{
			cout << rowNum + 1 << "-�� ����� ";
			cout << columnNum + 1 << "-�� ��������: ";
			cin >> ourMatrix[rowNum][columnNum];
		}
		cout << endl;
	}
}