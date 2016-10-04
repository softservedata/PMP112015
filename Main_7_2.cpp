#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	List list;
	List list2;
    list + 2.0;
	list + 1.5;
	list + 1.5;
	list + 9.0;
	list + 7.5;
	//cout << list;
	list2 = list;
	//list--;
	list2 + (1.6);
	//cout << list;
	cout <<"size= " <<list2.GetSize() << endl;
	cout << list2;
	cout << list2[6] << endl;
	List list3 = list2;
	list2 - 1;
	list2 - 1.6;
	list2 - 7.5;
	list2 - 1.5;
	//list2.Sort();
	//cout << list2;
	list3 - list2;
 	cout << list2;
	list3 - 1.5;
	cout << list3;
	system ("PAUSE");
	return 0;
}
