#include<iostream>
using namespace std;
bool isPrime(int n)
{
	if (n > 1)
	{
		for (int i = 2; i < n; i++)
			if (n % i == 0)
				return false;
		return true;
	}
	return false;
}
int** readGroups()
{
	int m, n;
	cout << "Enter how many groups (2-10)" << endl;
	cin >> m;
	cout << "Enter how many numbers in group(4-50)" << endl;
	cin >> n;
	int **groups;
	groups = new int*[m + 1];
	groups[m] = NULL;
	for (int i = 0; i < m; i++) {
		groups[i] = new int[n + 1];
		groups[i][n] = NULL;
	}

	for (int i = 0; i < m; i++)
	{
		cout << "Enter numbers (100-999) for group " << i + 1 << endl;
		for (int j = 0; j < n; j++)
		{
			cin >> groups[i][j];
		}
	}
	return groups;


}
int MaxPrime(int** gr)
{

	int imax = 0;
	int max = 0;

	int** groups = gr;
	for (int i = 0; groups[i] != NULL; i++) {
		int temp = 0;
		for (int j = 0; groups[i][j] != NULL; j++) {
			if (isPrime(groups[i][j]) == true) {
				temp++;
			}
		}
		if (temp > max) {
			max = temp;
			imax = i;
		}
	}
	return imax;
}
void outres(int** gr, int m)
{
	int** group = gr;
	int maxi = m;
	for (int i = 0; group[maxi][i] != NULL; i++)
		cout << group[maxi][i] << " ";
}
void main()
{
	int** groups = readGroups();
	int imax = MaxPrime(groups);
	outres(groups, imax);
	system("pause");
}