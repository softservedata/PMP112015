#include <iostream>
#include <iomanip> 
#include<Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
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

	
	
	// вивід на екран
	for (int rowNum = 0; rowNum < Sizer; rowNum++)
	{
		cout << " | ";
		for (int columnNum = 0; columnNum < Sizes; columnNum++)
		{
			cout << setw(4) << ourMatrix[rowNum][columnNum] << "  ";
		}
		cout << "|" << endl;
	}

	//підрахунок квадратних коренів
	int sum = 0;
	for (int rowNum = 0; rowNum < Sizer; rowNum++)
	{
		for (int columnNum = 0; columnNum < Sizes; columnNum++)
		{
			if ((sqrt(ourMatrix[rowNum][columnNum]) - int(sqrt(ourMatrix[rowNum][columnNum]))) == 0)
			{
				sum = sum + 1;
				cout << "Квадратні корені є в "<<rowNum+1<<"-ому рядку: ";
				cout << ourMatrix[rowNum][columnNum] << " " << endl;;
				
			}
		}


	}

	system("pause");
}