#include "IsTriangle.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;


string IsTriangle(int a, int b, int c)
{
	if (a + c < b || c + b < a || a + b < c)
	{
		return "Not possible to create triangle";
	}
	else
	{
		return "Possible to create triangle";
	}

}