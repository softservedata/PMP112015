#include<iostream>
using namespace std;
void main(){
	char mystring[253];
	char newstring[253];
	cout << "Enter string "<<endl;
	gets_s (mystring);
	char* a= new char[4];
	a[0] = 'p';
	a[1] = 'h';
	a[2] = 'f';
	a[3] = '\0';
	int j = 0;
	for (int i = 0; i < strlen(mystring); i++)
	{
		if (mystring[i] == a[0] || mystring[i + 1] == a[1])
		{
			newstring[j] = a[2];
			j++;
		}
		else if (mystring[i] != a[1])
		{
			newstring[j] = mystring[i];
			j++;
		}
	}
	newstring[j] = a[3];
	cout << newstring;
}