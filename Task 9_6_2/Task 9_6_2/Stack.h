#ifndef STACK_H
#define STACK_H
using namespace std;
const int N = 100;

struct STACK {

	int arr[N];
	int count;

};
void Initial(STACK *ps)
{

	ps->count = 0;

}
#endif

