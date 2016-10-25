#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;


class Bird 
{
protected:
	int age;
	char* name;
public:
	Bird(char* name, int age) 
	{
	this->age = age;
	int n = 0;
	n = strlen(name);
	
	this->name = new char[n + 1];
	strcpy(this->name, name);
	this->name[n] = '\0';
	}
	virtual	void show()
	{
		cout << "\n Name: " << name<<" Age=" << age;
	}

};

class Crown :public Bird {
private:
	double weight;
public:
	Crown(char* name, int age, double weight) :
		Bird(name, age)
	{
		this->weight = weight;
	}
	virtual	void show()
	{
		cout << endl;
		Bird::show();
		
			cout << "\n Weirght=" << weight;
	}	
};

class Dove :public Bird 
{
private:
	bool tame;
public:
	Dove(char* name, int age, bool tame):
		Bird(name,age)
	{
		this->tame = tame;
	}
	virtual	void show()
	{
		cout << endl;
		Bird::show();
		if (tame)
		{
			cout <<"\n Tamed"<< endl;
		}
		else
		{
			cout << "\n Wild" << endl;
		}
		
	}
};

class Sparrow :public Bird 
{
private:
	char* color;
	bool flock;
public:
	Sparrow(char* name, int age, char* color,  bool flock) :
		Bird(name, age)
	{
		int n = 0;
		n = strlen(color);
		this->color = new char[n + 1];
		strcpy(this->color, color);
		this->name[n] = '\0';
		this->flock = flock;
	}
	virtual	void show()
	{
		cout << endl;
		Bird::show();
		cout << "\n Color is " << color;
		if (flock)
		{
			cout << "\n Flock" ;
		}
		else
		{
			cout << "\n Not flock" ;
		}
	}
};
void main() 
{
	Bird* crown=new Crown("Manya", 2, 0.1);
	Sparrow* sparrow = new Sparrow("Gosha", 6, "Brown", false);
	Dove* dove=new Dove("Zefir", 5, true);
	crown->show();
	sparrow->show();
	dove->show();
	system("pause");
}