sets.h
#include "stdafx.h"
#include <iostream>
using namespace std;
 
class Set
{
    static const int max_power = 1000; 
    char set [max_power]; 
    int power; 
public:
    Set () : power(0) {}; 
    Set (const Set& s); 
    Set (int p); 
    Set (const char* str);
    ~Set () {}; 
 
    Set& operator = (const Set& s); 
    Set& operator += (const char e);
    bool In (char e) const;
    
    friend Set operator - (const Set &p1, const Set &p2); 
    friend Set operator * (const Set &p1, const Set &p2); 
    friend Set operator + (const Set &p1, const Set &p2); 
    friend istream & operator >> ( istream & in, Set & p );
    friend ostream & operator << ( ostream & out, const Set & p );  
};
 


 
Set::Set (const Set& s)
{
    power = s.power; //копируем мощность
    memcpy (set, s.set, sizeof(char)*power); //копируем данные
}
 
Set::Set (int p)
{
    if (p>max_power) { 
        power = 0; 
        return;
    }
    power = p; 
    for (int i = 0; i<p; i++) 
        set[i] = ' '+i;
}
 
Set::Set (const char* str)
{
    power = 0; 
    int len = strlen (str); 
    if (len > max_power) return; 
    for (int i = 0; i<len; i++) 
        *this+=str[i];
}
 
Set& Set::operator = (const Set& s)
{ 
    power = s.power;
    memcpy (set, s.set, sizeof(char)*power);
    return *this;
}
 
Set& Set::operator += (const char e)
{
    if (power+1>max_power || In(e)) return *this; 
    set[power] = e; 
    power++; 
}
 
bool Set::In (char e) const
{
    for (int i = 0; i<power; i++) 
        if (set[i] == e) return true; 
    return false; //
}
    
Set operator - (const Set &p1, const Set &p2)
{
    Set tmp; 
    for (int i = 0; i<p1.power; i++) 
        if (!p2.In(p1.set[i])) tmp+=p1.set[i]; 
    return tmp; 
}
 
Set operator * (const Set &p1, const Set &p2)
{
    Set tmp;
    for (int i = 0; i<p1.power; i++)
        if (p2.In(p1.set[i])) tmp+=p1.set[i];
    return tmp;
}
 
Set operator + (const Set &p1, const Set &p2)
{
    Set tmp;
    for (int i = 0; i<p1.power; i++) 
        tmp+=p1.set[i]; 
    for (int i = 0; i<p2.power; i++)
        tmp+=p2.set[i];
    return tmp;
}
 
istream & operator >> ( istream & in, Set & p )
{
    cout << "Enter power: ";
    in >> p.power;
    cout << "Enter chars: ";
    for (int i=0; i<p.power; i++)
        in >> p.set[i];
    return in;
}
 
ostream & operator << ( ostream & out, const Set & p )
{
    out << "{ ";
    for (int i = 0; i<p.power-1; i++)
        out << p.set[i] << ", ";
    out << p.set[p.power-1] << " }";
    return out;
}







Sets.cpp
#include "stdafx.h"
#include <cstdlib>
#include "sets.h"
#include <fstream>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	char *consonants = "бвгґджзйклмнпрстфхцчшщь";
	char *louds = "аеєіїиоуюя";
	int c=0, l=0;

	Set cons(consonants), loud(louds);

	std::string s, wrd;

	std::ifstream finp("input.txt");
    s = "";
	while(!finp.eof())
	{
		finp >> wrd;
		//std::cout << s << std::endl;
		s+=wrd;
	}
	finp.close();

	for (int i=0; i<s.length(); i++)
	{
		if (cons.In(s[i])) c++;
        if (loud.In(s[i])) l++;
	}

	std::cout << "Louds = " << l << std::endl;
	std::cout << "Consonants = " << c << std::endl;


	system("pause");
	return 0;
}
