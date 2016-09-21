#include <iostream>
#include<string.h>
#include"ira.h"

using namespace std;

    Str::Str(){
        len = 10;
        s = new char[len];

    }
    Str::Str(char* _s, int _len){
        len = _len;
        s = new char[len];
        for(int i(0); i < len; ++i){
            s[i] = _s[i];

        }


    }
    void Str::read(ifstream& f){
        len = 257;
        s = new char[len];
        f.getline(s , 256);



    }
    void Str::zmin(){
        int len1 = strlen(s);
        char* sn = new char[len1];
        int k1 = 0;
        for(int i(0); i < len1; ++i){
            if((s[i] == 'p') && (s[i + 1] == 'h')){

                sn[i - k1 ] = 'f';
                k1++;
                i++;

            }
            else sn[i - k1] = s[i];
        }
        for(int i(0); i < len; ++i){
            s[i] = sn[i];

        }


    }
    void Str::print()const{
        cout << "str is:" << endl;
        cout << s << endl;
        cout << "len of this str is: " << endl;
        cout << len << endl;


    }
    Str::~Str(){
        delete[]s;
    }

int main()
{
    ifstream f("ira.txt" , ios_base::in);
    Str k;
    k.read(f);
    k.print();
    k.zmin();
    k.print();
    system("pause");
    return 0;
}


#include<iostream>
#include<fstream>


using namespace std;

class Str{
private:
    char* s;
    int len;
public:

    Str();
    Str(char* , int);
    void read(ifstream&);
    void zmin();
    void print()const;
    ~Str();



};
vdhsph ph bhjdsjk ph1

