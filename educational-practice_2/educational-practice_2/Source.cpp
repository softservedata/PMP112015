#include <iostream>
using namespace std;

class g {
private:
	int **m;
	int n;
	bool *visited;
public:
	g()
	{
		this->n = 0;
		this->m = NULL;
	}
	void create()
	{
		cout << "Kilkist vershin =";
		cin >> this->n;

		this->m = new int*[n];
		for (int i = 0; i < n; i++)
			this->m[i] = new int[n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << "\ngraf[" << i + 1 << "]" << "[" << j + 1 << "]" << "=";
				cin >> this->m[i][j];
			}
		}
	}
	void create(int n)
	{
		this->n = n;
		m = NULL;
		this->m = new int*[n];
		for (int i = 0; i < n; i++)
			this->m[i] = new int[n];
		for (int i = 0; i < n - 1; i++) {
			cout << "\ngraf[" << i + 1 << "]" << "[" << n << "]" << "=";
			cin >> this->m[i][n - 1];
		}
		for (int i = 0; i < n; i++) {
			cout << "\ngraf[" << n << "]" << "[" << i + 1 << "]" << "=";
			cin >> this->m[n - 1][i];
		}

	}
	g operator+(int  a)
	{
		g temp;
		temp.create(n + 1);
		for (int i = 0; i < this->n; i++)
			for (int j = 0; j < this->n; j++)
			{
				temp.m[i][j] = this->m[i][j];
			}
		return temp;
	}
	void print()
	{
		for (int i = 0; i < this->n; i++) {
			for (int j = 0; j < this->n; j++) {
				cout << this->m[i][j] << " ";
			}
			cout << "\n";
		}

	}
private:
	char kolv2(int kolv, int mbuf[])
	{
		for (int i = 0; i<kolv; i++)
			if (mbuf[i] == 2)
				return 't';
		return 'f';
	}
public:
	bool svaz()
	{
		int *mbuf = new int[n];
		for (int i = 0; i<n; i++)
			mbuf[i] = 1;
		mbuf[1] = 2;
		while (kolv2(n, mbuf) == 't')
			for (int i = 0; i<n; i++)
				if (mbuf[i] == 2)
				{
					mbuf[i] = 3;
					for (int j = 0; j < n; j++) {
						int t;
						if (m[i][j] >= 1) {
							t = m[i][j];
							m[i][j] = 1;
						}
						if ((m[i][j] == 1) && (mbuf[j] == 1)) {
							mbuf[j] = 2;
						}
						if (m[i][j] == 1)m[i][j] = t;
					}
				};
		for (int i = 0; i<n; i++)
			if (mbuf[i] == 1)
				return false;
		return true;
	}
	void operator-(int  a)
	{
		if (svaz()) {
			int **temp;
			temp = new int*[n];
			for (int i = 0; i < n; i++)
				temp[i] = new int[n];
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {

					temp[i][j] = m[i][j];
				}
			}
			int max = m[0][0];
			for (int i = 0; i < this->n; i++)
				for (int j = 0; j < this->n; j++)
				{
					if (m[i][j]>max)max = m[i][j];
				}
			int t;
			for (int i = 0; i < this->n; i++)
				for (int j = 0; j < this->n; j++)
				{
					if (m[i][j] == max)m[i][j] = 0;
				}
			if (!svaz()) {
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {

						m[i][j] = temp[i][j];
					}
				}
				cout << "Nemozluvo, graf ne svayzn\n";
			}

		}
		else
			cout << "Nemozluvo, graf ne svayzn\n";
	}
};

void main() {
	g f;
	f.create();
	f.print();
	cout << "\n -1\n";
	f - 1;
	f.print();
	cout << "\n -2\n";
	f - 1;
	f.print();
	cout << "\n -3\n";
	f - 1;
	f.print();
	cout << "\n -4\n";
	f - 1;
	f.print();
	cout << "\n -5\n";
	f - 1;
	f.print();
	system("pause");
}