#include <string>
#include "TypeTriangle.h"
using namespace std;



string TypeTriangle(int a, int b, int c)
{
	if (a == b && c == b && a == c)
	{
		return "Triangle is equilateral";
	}
	else if (a == b || a == c || c == b)
	{
		return "Triangle is isosceles";
	}
	else
	{

		return "Triangle is scalene";
	}
}