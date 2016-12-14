#include<iostream>
using namespace std;

template<typename T>
struct element
{
	T info;
	element<T> *Next;
};

template<typename T>
class List
{
private:
	element<T> *Head;
	int size;
public:
	List()
	{
		Head = NULL; size = 0;
	}
	List(List<T> &list1)
	{
		element<T> *temp1 = new element<T>;
		temp1 = list1.Head;
		this -> size = list1.size;
		while (temp1 != NULL)
		{
			element<T> *temp = new element<T>;
			temp -> info = temp1 -> info;
			temp -> Next = Head;
			Head = temp;
			temp1 = temp1 -> Next;
		}
	}
	~List()
	{
		while (Head != NULL)
		{
			element<T> *temp = Head -> Next;
			delete Head;
			Head = temp;
		}
	}
	bool IsEmpty()
	{
		return Head == NULL;
	}
	void operator=(List<T> &list)
	{
		element<T> *temp1 = new element<T>;
		temp1 = list.Head;
		this -> size = list.size;
	
		while (temp1 != NULL)
		{
			element *temp = new element;
			temp -> info = temp1 -> info;
			temp -> Next = Head;
			Head = temp;
			temp1 = temp1 -> Next;
		}
	}
	int GetSize()
	{
		return size;
	}
	void Push(T number)
	{
		element<T> *temp = new element<T>;
		temp -> info = number;
		temp -> Next = Head;
		Head = temp;
		size++;
	}
	void Pop()
	{
		if (IsEmpty())
		{
			cout<< "\nList is empty..";
		}
		else
		{
			element<T> *temp = Head -> Next;
			delete Head;
			Head = temp;
			size--;
		}
	}
	void PopElement(T number)
	{
		element<T> *temp = Head;
		if (temp -> info == number)
		{
			Head = Head -> Next;
			delete(temp);
			temp = Head;
		}
		element<T> *temp2 = temp -> Next;
		while (temp2 != NULL)
		{
			if (temp2 -> info == number)
			{
				temp -> Next = temp2 -> Next;
				delete temp2;
				temp2 = temp;
			}
			temp = temp2;
			temp2 = temp2 -> Next;
		}
		size--;
	}
	void Print()
	{
		if ((*this).IsEmpty())
		{
			cout<<"\nList is empty..";
		}
		else
		{
			element<T> *temp = (*this).Head;
			while (temp != NULL)
			{
				cout << temp->info << " ";
				temp = temp -> Next;
			}
		}
		cout << endl;
	}
	void Union(List<T> & list1)
	{
		element<T> *temp1 = new element<T>;
		temp1 = list1.Head;
		while (temp1 != NULL)
		{
			(*this).Push(temp1 -> info);
			temp1 = temp1 -> Next;
		}
	}
	void Compare(List<T>& list)
	{
		int size1 = 0;
		int size2 = 0;
		element<T> *temp2 = list.Head;
		element<T> *temp1 = (*this).Head;
		while (temp1 != NULL)
		{
			size1++;
			temp1 = temp1 -> Next;
		}
		while (temp2 != NULL)
		{
			size2++;
			temp2 = temp2 -> Next;
		}
		if (size1 > size2)
		{
			cout << "\nFirst is bigger, then second" << endl;
		}
		else if (size1 < size2)
		{
			cout << "\nSecond is bigger, then first" << endl;
		}
		if(size1==size2)
		{
			cout << "\nFirst and second are equal" << endl;
		}
	}
};

void main()
{
	List<char> list;
	list.Push('a');
	list.Push('b');
	list.Push('c');
	list.PopElement('b');
	List<int> list_int;
	list_int.Push(1);
	list_int.Push(5);
	list_int.Push(7);
	List<int> list_int1;
	list_int1.Push(2);
	list_int1.Push(4);
	list_int1.Push(8);
	list.Print();
	list_int.Compare(list_int1);
	list_int.Union(list_int1);
	list_int.Print();
	system("pause");
}
