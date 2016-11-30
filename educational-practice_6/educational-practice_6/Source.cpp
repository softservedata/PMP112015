#include<iostream>
#include<fstream>
#include<string>
#include"list"

using namespace std;

class NewStack
{
private:
	list<string> str;
public:
	NewStack()
	{
	}
	void push(string temp)
	{
		this->str.push_back(temp);
	}
	string pop()
	{
		string t= str.back();;
		this->str.pop_back();
		return t;
	}
	bool isEmpty()
	{
		return str.empty();
	}
	~NewStack()
	{}
};

int main()
{
	NewStack stack;
	string str;
 	ifstream read("read.txt");
	ofstream write("write.txt");

 	if (read.is_open())
 	{
		while (!read.eof())
		{
			read >> str;
			stack.push(str);
		}
		read.close();
 	}
	while (!stack.isEmpty())
	{
		write <<stack.pop()<<" ";
	}
	system("pause");
	return 0;
}