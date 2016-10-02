#include <iostream>
using namespace std;

class Queue 
{
private:
	static const int SIZE = 100;
	int *queue;
	int head, tail;
	int tsize;
public:
	Queue()
	{
		queue = new int[3];
		head = tail = 0;
		tsize = 3;
	}
	Queue(int n)
	{
		queue = new int[n];
		head = tail = 0;
		tsize = n;
	}
	int getsize(Queue a)
	{
		return a.tsize;
	}
	int empty()
	{
		if (head == tail)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	void out(Queue q) 
	{
		if (head == tail)
		{
			cout << "mass is empty:(\n";
			return;
		}
		for (int i = q.head + 1; i<q.tail + 1; i++)
		{
			cout << " " << q.queue[i];
		}
		cout << endl;
	}
	void push(int num)
	{
		if (tail + 1 == head) //if (tail + 1 == head || (tail + 1 == SIZE && !head)) 
		{
			cout << "mass is full...\n";
			return;
		}
		tail++;
		queue[tail] = num;
	}
	void pop()
	{
		if (head == tail) 
		{
			return;
		}
		head++;

	}
	void destruct()
	{
		delete[] queue;
	}
};

