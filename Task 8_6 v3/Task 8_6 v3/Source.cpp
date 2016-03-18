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

	//��������� ���������� ������
	int sum = 0;
	for (int rowNum = 0; rowNum < Sizer; rowNum++)
	{
		for (int columnNum = 0; columnNum < Sizes; columnNum++)
		{
			if ((sqrt(ourMatrix[rowNum][columnNum]) - int(sqrt(ourMatrix[rowNum][columnNum]))) == 0)
			{
				sum = sum + 1;
				cout << "�������� ����� � � "<<rowNum+1<<"-��� �����: ";
				cout << ourMatrix[rowNum][columnNum] << " " << endl;;
				
			}
		}


	}

	system("pause");
}