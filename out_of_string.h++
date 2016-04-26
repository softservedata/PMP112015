#include"iostream"
#include<iomanip>
using namespace std; 

char findch(char ma[], char a)
{
	int i = 0;
	while (ma[i] != '\0')
	{
		if (ma[i] == a)
			return ma[i];
		else
			i++;
	}
	return NULL;
}

int main()
{
	setlocale(LC_ALL, "ukr");
	char pokazz[] = "Ще не вмерла України , нi слава , нi воля !";
	int L = strlen(pokazz);
	const int MAx = 99;
	char str_dop[MAx];
	int L2, q, k = 0;
	int count = 0;
	for (int j = 0;j < L;j++)
	{
		if (pokazz[j] == ' ')
		{
			q = j;
			for (int j = 0;j < q - k;j++)
			{
					str_dop[j] = pokazz[count];
					count++;
			}
			count++;
			str_dop[q - k] = '\0';
			k = count;
			L2 = strlen(str_dop);
			cout << "Вивiд стрiчки до пробiлу :" << str_dop << "\nДовжина цiєї стрiчки :" << L2 << endl;
			if (L2 != 1 && L2 % 2 != 0)
			{
				for (int j = 0; j < L / 2 + 1; j++)
				{
					if (j == L2 / 2)
					{
						cout << "Елемент , який знаходиться посерединi стрiчки : " << str_dop[j] << "\n__________________________\n\n";
					}
				}
			}
			else
			{
				if (L2 % 2 == 0)
					cout << "Ця стрiчка має парну довжину !" << "\n_____________________________\n\n";
				else if (L2 == 1)
					cout << "Ця стрiчка має незадовiльну одиничну довжину !" << "\n__________________________\n\n";
			}
			for (int j = 0; j < q;j++)
			{
				str_dop[j] = NULL;
			}	
		}
	}
	system("pause");
	return 0; 
}
