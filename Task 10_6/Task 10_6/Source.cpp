#include <iostream>
#include <string>
#include "NewResult.h"
#include "Class.h"
#include "algorithm"
using namespace std;

int Diam()
{
	
	int n;
	//int **a = new int *[n];
	int **edge = new int *[n];
	for (int i = 0; i < n; i++)
		edge[i] = new int[n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			edge[i][j] = a[i][j];
			if (!edge[i][j])
				edge[i][j] = 10000;
		}
	}
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (i != j)
					edge[i][j] = min(edge[i][j], edge[i][k] + edge[k][j]);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (edge[i][j] == 10000)
				edge[i][j] = 0;
		}
	}
	int max = edge[0][1];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++) {
			if (edge[i][j] > max)
				max = edge[i][j];
		}
	}
	cout << max;
	return max;
	delete[] edge;
}

int main()
{
char t, l;
cout << "input first element ( a,b,c,d or e )  ";
cin >> t;
cout << "input second element ( a,b,c,d or e , obviosly , it should not be equal first ) ";
cin >> l;
NewResult(t, l);


cout << "Max:"<<Diam() ;
system("pause");
}