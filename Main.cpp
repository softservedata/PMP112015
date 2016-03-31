#include <iostream>
#include <cstdlib>
#include "DegreeTriangle.h"
#include "TypeTriangle.h"
#include "IsTriangle.h"
#include "Reading.h"
#include <string>
using namespace std;



int main()
{
	int  arr[3];
	Reading(arr);
	  if (IsTriangle(arr[0], arr[1], arr[2]) == "Possible to create triangle")
	{
	cout << IsTriangle(arr[0], arr[1], arr[2])<<endl;
    cout << TypeTriangle(arr[0], arr[1], arr[2]) << endl;
	cout << DegreeTriangle(arr[0], arr[1], arr[2]) << endl;
	 }
	else
	{
		cout << IsTriangle(arr[0], arr[1], arr[2])<<endl;
	}
    system ("PAUSE");
	return 0;
}