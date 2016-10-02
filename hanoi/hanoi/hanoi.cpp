#include <iostream>
#include "class.h"
using namespace std;
void hanoi_towers(Queue a, int from, int to, int mid)
{
	while (a.empty())
	{
		a.pop();
		hanoi_towers(a, from, mid, to);

		cout << from << " -> " << to << endl;
		a.pop();
		hanoi_towers(a, mid, to, from);
	}
}
