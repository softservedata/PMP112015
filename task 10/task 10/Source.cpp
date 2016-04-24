#include <iostream>
#define MAX  5

using namespace std;

struct Top
{
	int top;
	int edge[MAX];
	Top()
	{
		for (int i = 0; i < MAX; i++)
		{
			edge[i] = 0;
		}
	}
	void set(int _edge)
	{
		edge[_edge] = 1;
	}
};

class Earl
{
public:
	Top count[MAX];
	Earl()
	{
		for (int i = 0; i < MAX; i++)
		{
			count[i].top = i;
		}
	}
	void set(int _top, int _edge)
	{
		count[_top].set(_edge);
	}
	void view()
	{
		for (int i = 0; i < MAX; i++)
		{
			cout << "Earl " << i << ": \n";
			for (int j = 0; j < MAX; j++)
			{
				if (count[i].edge[j] == 1)
				{
					cout << "( " << i << " , " << j << " )\n";
				}
			}
		}
	}
	void  way()
	{
		for (int i = 0; i < MAX; i++)
		{
			int sum = 0;
			int k = i;
			cout << k << endl;
			for (int j = 0; j < MAX; j++)
			{
				if(i!=j)
				{
					if (count[k].edge[j] == 1)
					{
						sum++;
						k = j;
						cout << k << endl;
					}
				}
			}
			cout << "way (" << i << "," << k << ")" << sum << endl;
		}

	}

};

void main()
{
	Earl test;
	test.set(0, 1);
	test.set(0, 3);
	test.set(1, 4);
	test.set(1, 2);
	test.set(3, 1);
	test.set(2, 3);
	test.set(2, 4);
	test.view();
	test.way();
	cout << "\n\n";
	system("pause");
}