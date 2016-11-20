#include <iostream>
using namespace std;

template <class t>
class Vector
{
public:
	t *v;
	Vector(int n=2)
	{
		v = new t[n];
	}
	void show()
	{
		for (int i = 0; i < 2; i++)
		{
			cout<<
		}
	}
	void scalar(Vector<t>& temp)
	{
		t st=0;
		for (int i = 0; i < 2; i++)
		{
			st = st + this->v[i] * temp.v[i];
		}
		cout << "\n Scalar =" << st;
	}
	void norma()
	{
		t max = v[0];
		for (int i = 0; i < 2; i++)
		{
			if(this->v[i]>max)max=v[i];
		}
		cout << "\n Norma vectora =" << max;
	}
	~Vector()
	{
		delete[] v;
	}
}; 

int main()
{
	cout << "\n Vector int\n";
	Vector <int> vector0(2);
	vector0.v[0] = 4;
	vector0.v[1] = 3;
	Vector <int> vector1(2);
	vector1.v[0] = 2;
	vector1.v[1] = 8;
	vector0.scalar(vector1);
	vector0.norma();

	cout << "\n Vector double\n";
	Vector <double> vector2(2);
	vector2.v[0] = 0.3;
	vector2.v[1] = 3.1;
	Vector <double> vector3(2);
	vector3.v[0] = 2.1;
	vector3.v[1] = 8.9;
	vector2.scalar(vector3);
	vector3.norma();
	cout << endl;
	system("pause");
	return 0;
}	