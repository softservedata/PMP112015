#include <iostream>
using namespace std;


#ifndef MYCLASS_H

class myclass {
private:
	int n;
	char* str;
public:
	myclass() {
		n = 255;
		this->str = new char[n];
		for (int i = 0; i<n; i++)
		{
			this->str[i] = '\0';
		}
	}
	void read()
	{
		cout << "input str =";
		cin.getline(str, n);
	}
	void check() {
		int c = 1;
		int i = 0, k = 0, j = 0;
		while (str[0] == ' ') {
			for (i = 0; i < strlen(str) - 1; i++) {
				str[i] = str[i + 1];

			}
			str[i] = '\0';
		}


		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == ' ' && str[i + 1] == ' ') {
				for (j = i; j < strlen(str); j++) {
					str[j] = str[j + 1];
				}
				str[j] = '\0';
				i--;
			}
		}

		for (int k = 0; k < strlen(str);) {
			int temp = k;
			for (int i = k + 1; i < strlen(str) + 1; i++) {
				if ((str[i] == ' ') || (str[i] == '\0')) {
					temp = i;
					break;
				}
			}
			bool equal = true;
			int i = k, j = temp - 1;
			for (; i <= j; i++, j--) {
				if (str[i] != str[j]) {
					equal = false;
					break;
				};

			}
			if (equal) {
				c = 0;
				for (i = k, j = temp; i < j; i++) {
					cout << str[i];
				};
				cout << " ";
			};
			k = temp + 1;
		}
		if (c == 1)cout << "zodnogo probila\n";
	}
	~myclass(){
		delete[] str;
		cout << "\n Destructor Done!\n";
	}
};

#define MYCLASS_H
#endif