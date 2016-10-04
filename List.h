#pragma once
#include <iostream>
#include <cmath>
using namespace std;

struct element
{
	double info;
	element * Next;

};

class List
{
	element *Head;
	int size;

public:

	List(){ Head = NULL; size = 0; }

	List(List &list1)
	{
		element *temp1 = new element;
		temp1 = list1.Head;

		this->size = list1.size;
		while (temp1 != NULL)
		{
			element *temp = new element;
			temp->info = temp1->info;
			temp->Next = Head;
			Head = temp;
			temp1 = temp1->Next;
		}

	}

	~List()
	{
		while (Head != NULL)
		{
			element *temp = Head->Next;
			delete Head;
			Head = temp;
		}
	}

	bool IsEmpty()
	{
		return Head == NULL;
	}

	void operator=(List &list)
	{
		element *temp1 = new element;
		temp1 = list.Head;
		this->size = list.size;

		while (temp1 != NULL)
		{
			element *temp = new element;
			temp->info = temp1->info;
			temp->Next = Head;
			Head = temp;
			temp1 = temp1->Next;
		}


	}
	int GetSize() { return size; }
	void operator+(double number)
	{
		element *temp = new element;
		temp->info = number;
		temp->Next = Head;
		Head = temp;
		size++;
	}
	void operator--()
	{
		if (IsEmpty())
		{
			cout << "List is empty";
		}
		else
		{
			element *temp = Head->Next;
			delete Head;
			Head = temp;
			size--;
		}
	}
	void operator-(double number)
	{
		element *temp = Head;
		if (temp->info == number)
		{
		    Head = Head->Next;
			delete(temp);
			temp = Head;
	

		}

		element* temp2 = temp->Next;
	while (temp2 != NULL)
	{
	if (temp2->info == number)
		{
	    	temp->Next = temp2->Next;
	    	delete temp2;
	    	temp2 = temp;
		}
	    	temp = temp2;
		   temp2 = temp2->Next;
	}
	size--;
}

	friend ostream& operator<<(ostream& s, List &list)
	{
		if (list.IsEmpty())
		{
			s << "List is empty";
		}
		else
		{
			element *temp = list.Head;


			while (temp != NULL)
			{
				s << temp->info << "  ";
				temp = temp->Next;
			}

		}
		s << endl;
		return s;
	}
	void operator+(List & list1)
	{
		element *temp1 = new element;
		temp1 = list1.Head;


		while (temp1 != NULL)
		{
			/*element *temp=new element;
			temp->info = temp1->info;
			temp->Next = Head;
			Head = temp;
			temp1 = temp1->Next;*/
			(*this) + temp1->info;
			temp1 = temp1->Next;

		}

	}
	void operator-(List & list1)
	{
		element *temp1 = new element;
		temp1 = list1.Head;


		while (temp1 != NULL)
		{
			(*this) - temp1->info;
			temp1 = temp1->Next;
		}

	}

	void Sort()
	{
		// PRIMARY
		double temp_number;
		bool exit = true;
		element *temp = Head;
		while (exit)
		{
			while (temp->Next != NULL)
			{
				if (temp->info > temp->Next->info)
				{
					temp_number = temp->info;
					temp->info = temp->Next->info;
					temp->Next->info = temp_number;
					exit = true;
					temp = temp->Next;
				}
				else { exit = false; temp = temp->Next; /*cout << "+";*/ }
			}
			temp = Head;
		}
	
      
	//SECONDARY
	//0 > element sorting
		
	temp = Head;
	exit = true;
	for (int i = 0; i < size;i++)
	{
		while (temp->Next != NULL)
		{
			if (temp->info < 0 && temp->Next->info < 0)
			{
				if (abs(temp->info) > abs(temp->Next->info))
				{  
					
					temp_number = temp->info;
					temp->info = temp->Next->info;
					temp->Next->info = temp_number;
					temp = temp->Next;
				}
				else { temp = temp->Next; }
			}
			else { temp = temp->Next; }
			
		}
		temp = Head;
	}
	


  }
	double operator[](int number)
	{
		if (number >= size)
		{
			cout << "out of range";
			//throw "Out of range";
		}
		else
		{
            element *temp = Head;
			for (int i = 0; i < number; i++)
			{
				temp = temp->Next;
			}
			return temp->info;
		}
	}
};

