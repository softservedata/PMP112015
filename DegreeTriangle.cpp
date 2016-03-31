#include <string>
#include "DegreeTriangle.h"
using namespace std;



string DegreeTriangle(int a, int b, int c)
{
	if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
	{
		return  "Triangle is right" ;
    }
	else if (a*a + b*b<c*c || b*b + c*c < a*a || c*c + a*a < b*b)
	{
		return "Triangle is obtuse" ;
	}
	else if (a*a + b*b > c*c && b*b + c*c > a*a && c*c + a*a>b*b)
	{
		return "Triangle is acute" ;
	}


}



