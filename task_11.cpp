#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstring>

int _tmain(int argc, _TCHAR* argv[])
{

        char s[100];
        bool symm;
        int i, len;

        std::ifstream finp("input.txt");

        while(!finp.eof())
        {
                symm = true;
                finp >> s;
                len = strlen(s);
                for (i = 0; i < len/2; i++)
                {
                        if (s[i]!=s[len-1-i])
                        {
                                symm = false;
                                break;
                        }
                }
                if (symm)
                std::cout << s << std::endl;
        }

        finp.close();

        system("pause");
    return 0;


}
