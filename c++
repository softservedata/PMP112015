cpp files : 
 1. 
 #include<iostream> 
 #include<string> 
 #include"ReadGroups.h" 
 #include"allif.h" 
 #include"ReadandCalculateNumbers.h" 
 using namespace std; 
 int main() 
 { 
 	int k; 
 	k = ReadGroups(); 
 	ReadandCalculateNumbers(k); 
 	system("pause"); 
 } 
 2. 
 #include <iostream> 
 using namespace std; 
 int ReadGroups() 
 { 
 	int t; 
 	cout << "input how many groups (2-10)  "; 
 	cin >> t; 
 	return (t); 
 } 
 3. 
 #include<iostream> 
 #include<string> 
 #include"ReadandCalculateNumbers.h" 
 #include"allif.h" 
 using namespace std; 
 int ReadandCalculateNumbers(int m) 
 { 
 	for (int i = 1; i <= m; i++) 
 	{ 
 		int n, p, pos, neg; 
 		double spos, sneg; 
 		cout << "how many numbers in this group (4-50) ?  "; 
 		cin >> n; 
 		pos = 0; 
 		neg = 0; 
 		spos = 0; 
 		sneg = 0; 
 		for (int j = 1; j <= n; j++) 
 		{ 
 			cout << "print number  "; 
 			cin >> p; 
 			if (p > 0) 
 			{ 
 				pos = pos + 1; 
 				spos = spos + p; 
 			} 
 			if (p < 0) 
 			{ 
 				neg = neg + 1; 
 				sneg = sneg + p; 
 			} 
 		} 
 		cout << allif(pos, neg, spos, sneg) << endl; 
 
 
 	} 
 	return 0; 
 } 
 4. 
 #include<iostream> 
 #include<string> 
 #include"allif.h" 
 using namespace std; 
 string allif(int pos, int neg, double spos, double sneg) 
 { 
 	if (pos > neg) 
 	{ 
  cout << "sum of all positive numbers =  " << spos; 
 	} 
 	if (neg > pos) 
 	{ 
 		cout << "sum of all negative numbers =  " << sneg; 
 	} 
 	if (neg == pos) 
 	{ 
 		cout << "quantity of positive numbers = quantity of negative numbers ( or all are zeros ) "; 
 	} 
 	return " "; 
 } 
 
 header files: 
 1. 
 #ifndef READGROUPS_H 
 #define READGROUPS_H 
 using namespace std; 
 int ReadGroups(); 
 #endif 
 2. 
 #ifndef READANDCALCULATENUMBERS_H 
 #define READANDCALCULATENUMBERS_H 
 using namespace std; 
 int ReadandCalculateNumbers(int m); 
 #endif 
 3. 
 #ifndef ALLIF_H 
 #define ALLIF_H 
 #include<string> 
 using namespace std; 
 string allif(int pos, int neg, double spos, double sneg); 
 #endif 
