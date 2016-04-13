#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
	SetElements Set(0);
	int x;
	int element;
	int *array;
	int *mas;
	cout << "1.Add Element" << endl << "2.Delete Element" << endl << "3.Existance of element" << endl << "4.Show set" <<endl << "5.Add Set" << endl << "6.Delete Set"<< endl << "7.Fibonate" << endl  << "0.Exit"<<endl;
	do{
		cout << "Operation:" ;
		cin >> x;
		cout << endl;
		switch (x) {
		case 1:
			cout << "Element:" ;
			cin >> element;
			if (Set.Add(element))
				cout << "Element is already in set" << endl;
			else
				Set.Add(element);
			Set.BubbleSorting();
			cout << endl;
			break;
		case 2:
			cout << "Element:";
			cin >> element;

			if (Set.Delete(element))
				cout << "There's no such element in set" << endl;
			else
				Set.Delete(element);
			Set.BubbleSorting();
			cout << endl;
			break;
		case 3:
			cout << "Element:";
			cin >> element;
			cout << Set.IsExist(element)<<endl;
			cout << endl;
			break;
		case 4:
			Set.Show();
			cout << endl;
			break;
		case 5:
		{
			cout << "Amount of Elements:";
			cin >> element;
			int *array = new int[element];
			InputArrayElements(element, array);
			for (int i = 0; i < element; i++)
			{
				Set.Add(array[i]);
			}
			delete[] array;
			cout << endl;
			Set.BubbleSorting();
			break;
		}
		case 6:
		{
			cout << "Amount of Elements:";
			cin >> element;
			int *mas = new int[element];
			InputArrayElements(element, mas);
			for (int i = 0; i < element; i++)
			{
				Set.Delete(mas[i]);
			}
			delete[] mas;
			cout << endl;
			Set.BubbleSorting();
			break;
		}
		case 7:
			Set.Fibonate();
			Set.BubbleSorting();
			break;
		}

		cout << "1.Add Element" << endl << "2.Delete Element" << endl << "3.Existance of element" << endl << "4.Show set" << endl << "5.Add Set" << endl << "6.Delete Set" << endl << "7.Fibonate" << endl << "0.Exit" << endl;

		

	} while (x != 0);

	system("PAUSE");
	return 0;



}