#include <iostream>
using namespace std;
#define MIN(a, b) ((a) < (b) ? (a) : (b))


class Graf 
{
private:
	int **m;
	int size;
	bool *used;
	int timer;
	int *tin;
	int *fup;
	void dfs(int v, int p = -1) 
	{
		used[v] = true;
		tin[v] = fup[v] = timer++;
		for (int i = 0; i < size; ++i)
		{
			if (m[v][i] == 1)
			{
				int to = i;
				if (to == p) continue;
				if (used[to]) fup[v] = MIN(fup[v], tin[to]);
				else
				{
					dfs(to, v);
					fup[v] = MIN(fup[v], fup[to]);
					if (fup[to] > tin[v]) cout << "bridge: (" << v+1 << " , " << to+1 << ")\n";
				}
			}
		}
	}
public:
	Graf(int a) 
	{
		size = a;
		m = new int*[size];
		for (int i = 0; i < size; i++)
		{
			m[i] = new int[size];
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << "Matrix [" << i + 1 << "][" << j + 1 << "] =  " ;
				cin >> m[i][j];
			}
		}
		 used = new bool[size];
		 tin = new int[size];
		 fup = new int[size];
	}
	void showgraf()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << m[i][j] << "   ";
			}
			cout << endl;
		}
		cout << endl;
	}

	void find_bridges() 
	{
		timer = 0;
		for (int i = 0; i < size; ++i)
		{
			used[i] = false;
		}
		for (int i = 0; i < size; ++i)
		{
			if (!used[i]) dfs(i);
		}
	}

	~Graf()
	{
		for (int i = 0; i < size; i++)
		{
			delete[] m[i];
		}
		delete[] m;
	}
};

void main() 
{
	Graf graf(7);
	cout << endl;
	graf.showgraf();
	cout << endl;
	graf.find_bridges();
	cout << "\nall done\n";
	system("pause");
}