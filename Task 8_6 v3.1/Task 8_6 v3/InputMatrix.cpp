#include<iostream>
#include"InputMatrix.h"
using namespace std;

void InputMatrix()

{
	int Sizer;
	int Sizes;
	cout << "Кількість рядків:\n";
	cin >> Sizer;
	cout << "Кількість стовпців:\n";
	cin >> Sizes;

	int** ourMatrix = new int*[Sizer];
	for (int i = 0; i < Sizer; i++)
		ourMatrix[i] = new int[Sizes];

	cout << "Заповніть матрицю " << Sizer << 'х' << Sizes << " числами построково.\n";
	for (int rowNum = 0; rowNum < Sizer; rowNum++)
	{
		for (int columnNum = 0; columnNum < Sizes; columnNum++)
		{
			cout << rowNum + 1 << "-ий рядок ";
			cout << columnNum + 1 << "-ий стовпчик: ";
			cin >> ourMatrix[rowNum][columnNum];
		}
		cout << endl;
	}
}