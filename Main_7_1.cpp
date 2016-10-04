#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	int size;
	cout << "Size=";
	cin >> size;
	//MyString *Row = new MyString(size);
	//MyString *Row2 = new MyString(*Row);
	MyString Row(10);
	MyString Row2(Row);
	Row.read();
	Row.AlphabetWordsPrinting();
	//Row->print();
	system("PAUSE");
	return 0;
}