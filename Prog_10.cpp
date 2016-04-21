Header.h
-------------------------------

class Set {

public:
	int i;
	Set** arr;
	Set() :i(0) { arr = new Set*[6]; }

	

	void add(Set a) 
	{
		arr[i] = &a;
		++i;
	}



};
class Graf {

public:
	int i;
	Set** arr2;
	int brr[6];
	int a_f_arr[6];
	Graf() :i(0) { arr2 = new Set*[6]; }

	void add(Set a) 
	{
		arr2[i] = &a;
		brr[i] = a.i;
	
		++i;
	}

};
class Versh1
{

public:
	int i;

	Versh1() :i(0) { }

	char a_arr[2];
	void add(char a)
	{
		a_arr[i]=a;
		++i;
	}


};
class Versh2
{

public:
	int i;

	Versh2() :i(0) { }

	char b_arr[2];
	void add(char a)
	{
		b_arr[i]=a;
		++i;
	}


};
class Versh3
{

public:
	int i;

	Versh3() :i(0) { }

	char c_arr[3];
	void add(char a)
	{
		c_arr[i]=a;
		++i;
	}


};
class Versh4
{

public:
	int i;

	Versh4() :i(0) { }

	char d_arr[3];
	void add(char a)
	{
		d_arr[i]=a;
		++i;
	}


};
class Versh5
{

public:
	int i;

	Versh5() :i(0) { }

	char e_arr[2];
	void add(char a)
	{
		e_arr[i]=a;
		++i;
	}


};
class Versh6
{

public:
	int i;

	Versh6() :i(0) { }

	char f_arr[2];
	void add(char a)
	{
		f_arr[i]=a;
		++i;
	}


};

--------------------------------

Main.cpp

--------------------------------

#include<iostream> 
#include"Header.h"

using namespace std;




void main() {

	Set a; Versh1 A;
	Set b; Versh2 B;
	Set c; Versh3 C;
	Set d; Versh4 D;
	Set e; Versh5 E;
	Set f; Versh6 F;
	Set a_arr;
	Graf g;
	
	#pragma region Dodavannya vershun v mnojunu
	a.add(b); A.add('b');
	a.add(c); A.add('c');

	b.add(a); B.add('a');
	b.add(c); B.add('c');
	
	c.add(a); C.add('a');
	c.add(b); C.add('b');
	c.add(d); C.add('d');

	d.add(c); D.add('c');
	d.add(e); D.add('e');
	d.add(f); D.add('f');

	e.add(d); E.add('d');
	e.add(f); E.add('f');

	f.add(d); F.add('d');
	f.add(e); F.add('e');


	g.add(a);
	g.add(b);
	g.add(c);
	g.add(d);
	g.add(e);
	g.add(f);
	#pragma endregion
	
	int nepozn[6]={1,2,3,4,5,6};	
	int pozn[6];
	int numbNextVersh=0;
	int count1=1;



	pozn[0]=nepozn[0];
	nepozn[0]=0;
	
		#pragma region Sumijni z A

			int j=0;
			do
			{
				for(int i=0;i<2;++i)
				{
				if(A.a_arr[i]=='b')
					{
						pozn[1]=nepozn[1];
						nepozn[1]=0;
						++count1;
						continue;
					}
				if(A.a_arr[i]=='c')
					{
						pozn[2]=nepozn[2];
						nepozn[2]=0;
						++count1;
						continue;
					}
				if(A.a_arr[i]=='d')
					{
						pozn[3]=nepozn[3];
						nepozn[3]=0;
						++count1;
						continue;
					}
				if(A.a_arr[i]=='e')
					{
						pozn[4]=nepozn[4];
						nepozn[4]=0;
						++count1;
						continue;
					}
				if(A.a_arr[i]=='f')
					{
						pozn[5]=nepozn[5];
						nepozn[5]=0;
						++count1;
						continue;
					}
				}
				++j;
			}

			while(j<2);
			#pragma endregion
		#pragma region nextVersh
			for(int i=1;i<6;++i)
			{

				if(nepozn[i]!=0)
				{
					pozn[i]=nepozn[i];
					nepozn[i]=0;
					numbNextVersh=i;  //Наступна вершина під номером "i"
					break;
				}
		
			}
			#pragma endregion
	
	if(count1==2)
	{
		#pragma region Sumijni z B
	j=0;
	do
	{
		for(int i=0;i<2;++i)
		{
		if(B.b_arr[i]=='b')
			{
				pozn[1]=nepozn[1];
				nepozn[1]=0;
				++count1;
				continue;
			}
		if(B.b_arr[i]=='c')
			{
				pozn[2]=nepozn[2];
				nepozn[2]=0;
				++count1;
				continue;
			}
		if(B.b_arr[i]=='d')
			{
				pozn[3]=nepozn[3];
				nepozn[3]=0;
				++count1;
				continue;
			}
		if(B.b_arr[i]=='e')
			{
				pozn[4]=nepozn[4];
				nepozn[4]=0;
				++count1;
				continue;
			}
		if(B.b_arr[i]=='f')
			{
				pozn[5]=nepozn[5];
				nepozn[5]=0;
				++count1;
				continue;
			}
		}
		++j;
	}

	while(j<2);
	#pragma endregion
		#pragma region nextVersh
	for(int i=2;i<6;++i)
	{

		if(nepozn[i]!=0)
		{
			pozn[i]=nepozn[i];
			nepozn[i]=0;
			numbNextVersh=i;  //Наступна вершина під номером "i"
			break;
		}
		
	}
#pragma endregion
	}
	if(count1==3)
	{
		#pragma region Sumijni z C
	j=0;
	do
	{
		for(int i=0;i<3;++i)
		{
		if(C.c_arr[i]=='b')
			{
				pozn[1]=nepozn[1];
				nepozn[1]=0;
				++count1;
				continue;
			}
		if(C.c_arr[i]=='c')
			{
				pozn[2]=nepozn[2];
				nepozn[2]=0;
				++count1;
				continue;
			}
		if(C.c_arr[i]=='d')
			{
				pozn[3]=nepozn[3];
				nepozn[3]=0;
				++count1;
				continue;
			}
		if(C.c_arr[i]=='e')
			{
				pozn[4]=nepozn[4];
				nepozn[4]=0;
				++count1;
				continue;
			}
		if(C.c_arr[i]=='f')
			{
				pozn[5]=nepozn[5];
				nepozn[5]=0;
				++count1;
				continue;
			}
		}
		++j;
	}

	while(j<2);
	#pragma endregion
		#pragma region nextVersh
	for(int i=3;i<6;++i)
	{

		if(nepozn[i]!=0)
		{
			pozn[i]=nepozn[i];
			nepozn[i]=0;
			numbNextVersh=i;  //Наступна вершина під номером "i"
			break;
		}
		
	}
#pragma endregion
	}
	if(count1==4)
	{
		#pragma region Sumijni z D
	j=0;
	do
	{
		for(int i=0;i<3;++i)
		{
		if(D.d_arr[i]=='b')
			{
				pozn[1]=nepozn[1];
				nepozn[1]=0;
				++count1;
				continue;
			}
		if(D.d_arr[i]=='c')
			{
				pozn[2]=nepozn[2];
				nepozn[2]=0;
				++count1;
				continue;
			}
		if(D.d_arr[i]=='d')
			{
				pozn[3]=nepozn[3];
				nepozn[3]=0;
				++count1;
				continue;
			}
		if(D.d_arr[i]=='e')
			{
				pozn[4]=nepozn[4];
				nepozn[4]=0;
				++count1;
				continue;
			}
		if(D.d_arr[i]=='f')
			{
				pozn[5]=nepozn[5];
				nepozn[5]=0;
				++count1;
				continue;
			}
		}
		++j;
	}
	while(j<2);
	#pragma endregion
		#pragma region nextVersh
	for(int i=4;i<6;++i)
	{

		if(nepozn[i]!=0)
		{
			pozn[i]=nepozn[i];
			nepozn[i]=0;
			numbNextVersh=i;  //Наступна вершина під номером "i"
			break;
		}
		
	}
#pragma endregion
	}
	if(count1==5)
	{
		#pragma region Sumijni z E
	j=0;
	do
	{
		for(int i=0;i<2;++i)
		{
		if(E.e_arr[i]=='b')
			{
				pozn[1]=nepozn[1];
				nepozn[1]=0;
				++count1;
				continue;
			}
		if(E.e_arr[i]=='c')
			{
				pozn[2]=nepozn[2];
				nepozn[2]=0;
				++count1;
				continue;
			}
		if(E.e_arr[i]=='d')
			{
				pozn[3]=nepozn[3];
				nepozn[3]=0;
				++count1;
				continue;
			}
		if(E.e_arr[i]=='e')
			{
				pozn[4]=nepozn[4];
				nepozn[4]=0;
				++count1;
				continue;
			}
		if(E.e_arr[i]=='f')
			{
				pozn[5]=nepozn[5];
				nepozn[5]=0;
				++count1;
				continue;
			}
		}
		++j;
	}

	while(j<2);
	#pragma endregion
		#pragma region nextVersh
	for(int i=5;i<6;++i)
	{

		if(nepozn[i]!=0)
		{
			pozn[i]=nepozn[i];
			nepozn[i]=0;
			numbNextVersh=i;  //Наступна вершина під номером "i"
			break;
		}
		
	}
#pragma endregion
	}
	if(count1==6)
	{
		#pragma region Sumijni z F
	j=0;
	do
	{
		for(int i=0;i<2;++i)
		{
		if(F.f_arr[i]=='b')
			{
				pozn[1]=nepozn[1];
				nepozn[1]=0;
				++count1;
				continue;
			}
		if(F.f_arr[i]=='c')
			{
				pozn[2]=nepozn[2];
				nepozn[2]=0;
				++count1;
				continue;
			}
		if(F.f_arr[i]=='d')
			{
				pozn[3]=nepozn[3];
				nepozn[3]=0;
				++count1;
				continue;
			}
		if(F.f_arr[i]=='e')
			{
				pozn[4]=nepozn[4];
				nepozn[4]=0;
				++count1;
				continue;
			}
		if(F.f_arr[i]=='f')
			{
				pozn[5]=nepozn[5];
				nepozn[5]=0;
				++count1;
				continue;
			}
		}
		++j;
	}

	while(j<2);
	#pragma endregion
		#pragma region nextVersh
	for(int i=6;i<6;++i)
	{

		if(nepozn[i]!=0)
		{
			pozn[i]=nepozn[i];
			nepozn[i]=0;
			numbNextVersh=i;  //Наступна вершина під номером "i"
			break;
		}
		
	}
#pragma endregion
	}

	#pragma region Perevirka na mostu
	int count=0;
	for(int i=0;i<6;++i)
	{
		if(nepozn[i]!=0)
		{
			++count;
		}

	}
	if(count==0)
	{
		cout<<"Nemaye mostiv!"<<endl;
	}
	else
	
	{
		cout<<"Ye mist!"<<endl;
		//cout<<"Mist mij vershunamu: "<<nepozn[numbNextVersh]<<" i "<<nepozn[numbNextVersh+1]<<endl;
	}
	#pragma endregion
	

	system("pause");
}
