#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ukr");
	map<string, string>::iterator it;
	map<string, string>::iterator it2;
	map <string, string> name_tel =
	{
		{ "Мама", "123" },
		{ "Тато", "40" },
	};
	map <string, string> tel_name =
	{
		{ "156", "Брат" },
		{ "40", "Тато", },
		{ "1499", "Адам", },
	};
	for (it = name_tel.begin(); it != name_tel.end(); ++it) {
		cout << it->first << ":" << it->second << endl;
	}
	cout <<"~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (it = tel_name.begin(); it != tel_name.end(); ++it) {
		cout << it->first << ":" << it->second << endl;
	}
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	
	for (it2 = tel_name.begin(); it2 != tel_name.end();++it2)
	{
		name_tel.insert(pair<string,string>(it2->second, it2->first));
	}
	for (it = name_tel.begin(); it != name_tel.end(); ++it) {
		cout << it->first << ":" << it->second << endl;
	}
	system("pause");
}