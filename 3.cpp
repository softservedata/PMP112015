Main.cpp:

#include <iostream>
#include"Fibonachi.h"
using namespace std;

void main()
{
Fibonachi a(255); // створення об'єкту 
a.GetMas(); // виклик функції, котра показує поле mas
system("pause");
}
f2 = fn;
if (fn < n)
{
mas[i + 2] = fn; // присвоєння елементів масиву
}
}
}
Fibonachi(const Fibonachi& ob) // конструктор копіювання
{
this->n = ob.n;
this->size = ob.size;
for (int i = 0; i < ob.size; i++)
{
this->mas[i] = ob.mas[i];
}
}
~Fibonachi() // деструктор
{
delete mas;
}
void GetMas() // функція, що показує mas
{
for (int i = 0; i < size; i++)
{
cout « mas[i] « " ";
}
cout « endl;
}
};


Fibonachi.h :

#include <iostream>
using namespace std;

class Fibonachi
{
private:
int n; //число (від 5 до 255)- заумовою 
int size; //розмір масиву
int* mas; //сам масив(множина)
public:
Fibonachi(int n = 5) //конструктори
{
int f1 = 0;
int f2 = 1;
int k = 0; // лічильник розміру масиву
int fn = 0;
this->n = n;
{
for (int i = 0; i < n; i++)
{
if (fn < n)
{
fn = f1 + f2;
f1 = f2;
f2 = fn;
if (fn<n)
k++; // підрахунок чисел Фібоначчі, менших за задане n
}
}
}
f1 = 0;
f2 = 1;
fn = 0;
size = k + 2; // присвоєння size розміру масиву (+2, бо перші 2 елементи (0 і 1) за формулою не обчислюються
mas = new int[size]; // створення масиву
mas[0] = 0;
mas[1] = 1;
for (int i = 0; i < size; i++)
{
fn = f1 + f2;
f1 = f2;
f2 = fn;
if (fn < n)
{
mas[i + 2] = fn; // присвоєння елементів масиву
}
}
}
Fibonachi(const Fibonachi& ob) // конструктор копіювання
{
this->n = ob.n;
this->size = ob.size;
for (int i = 0; i < ob.size; i++)
{
this->mas[i] = ob.mas[i];
}
}
~Fibonachi() // деструктор
{
delete mas;
}
void GetMas() // функція, що показує mas
{
for (int i = 0; i < size; i++)
{
cout « mas[i] « " ";
}
cout « endl;
}
};
