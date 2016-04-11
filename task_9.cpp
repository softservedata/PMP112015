// Stack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Stack.h"
#include <fstream>


int main()
{
	setlocale(LC_ALL, "Ukrainian");
    struct Item si;
    Stack stack;
	std::string s;

	std::ifstream finp("input.txt");
    
	while(!finp.eof())
	{
		finp >> s;
		//std::cout << s << std::endl;
		stack.push(s);
	}

	finp.close();

	std::ofstream fout("output.txt");
	
    while((si=stack.pop()).next)
    {
       fout << si.word << " ";
    }
	fout << si.word;

	fout.close();
    
	system("pause");
    return 0;
}





Stack.h
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

//using namespace std;

typedef struct Item* pItem;
struct Item
{
    std::string word;
    pItem next;
};

//-------------

class Stack
{
private:
   pItem stackp; 
public:
void push(std::string data)
{
    pItem newp =  new struct Item; 
    newp->word = data;
    newp->next = stackp;
    stackp = newp;
}
 
//-------------
struct Item pop()
{
	pItem  p = stackp->next;
	struct Item sI = *stackp;
    delete stackp;
    stackp = p;
	return sI;
}
Stack()
{
   stackp = NULL;
}


};
