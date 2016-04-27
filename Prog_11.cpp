#include<iostream>

using namespace std;

void main()
{

	int m=0;//zminna dlya 'while'
	char str[253];
	char space=' ';

	gets_s(str);
	int lenstr=strlen(str);
	cout<<str<<strlen(str)<<endl;
	do{
		for(int i=0;i<strlen(str);++i)
		{
			if(str[i]==space && str[i+1]==space)
			{

				for (int j = i; j < strlen(str); ++j)
					{
					  str[j] = str[j + 1];
					}
				strlen(str)-1;
				str[strlen(str)]='\0';
			}
		}
		++m;
	}
	while(m<lenstr);
	if(str[0]==space)
	{
		for(int j=0;j<lenstr;++j)
		{
			str[j]=str[j+1];
		}
		lenstr--;
	}

	cout<<str<<strlen(str)<<endl;
	system("pause");
}
