#include <iostream>
#include "myclass.h"
using namespace std;

void main() {
	myclass f;
	f.read();
	cout << "output =";
	f.check();
	cout << endl;
}