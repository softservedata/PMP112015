#include<iostream>
using namespace std;

class firstclass
{
public:
	char **arr;
	int rozmir;
	int i;
	int*elemntuStri4ku;
	firstclass(int n)
	{
		elemntuStri4ku = new int;
		arr = new char*[n];
		rozmir = n;
		for (int i = 0; i < n; ++i) 
		{
			arr[i] = new char[256];
			cin.getline(arr[i], 256);
			
		}
		elemntuStri4ku = new int[sizeof(arr[0])/sizeof(char)];
	}
	void perevirka() 
	{
		for (int i = 0; i < sizeof(arr[0]) / sizeof(char); ++i) 
		{
			elemntuStri4ku[i] = (int)arr[0][i];
			
		}
		
		for (int i = 1; i < rozmir; ++i) {
			for (int j = 0; j < sizeof(arr[i]) / sizeof(char); ++j) 
			{	
				for (int k = 0; k < sizeof(arr[0]) / sizeof(char); ++k)
				{
					if ((int)arr[i][j] == elemntuStri4ku[k]) { cout << "RESULT:" << arr[i] << endl; ++i; }
				}
			}
		
		}


	}



};




void main() {
	firstclass A(5);
	A.perevirka();
	


}
