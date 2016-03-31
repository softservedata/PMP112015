#include "Reading.h"
#include <iostream>
using namespace std;

void Reading(int arr[])
{
	char m[] = { 'A', 'B', 'C' };
	for (int i = 0; i < 3; i++)
	{
		cout << m[i]<<"=";
		cin >> arr[i];
	}

}