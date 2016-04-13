#include <iostream>
#include "Set.h"
using namespace std;


	SetElements::SetElements(int z)
	{
            size = z;
			array = new int[size];
			for (int j= 0; j < size; j++) 
				array[j] = 0;
			array[0] = z;
		
	}

	bool SetElements::IsExist(int n)
	{   
		bool exist = false;
		for (int i = 0; i < size; i++)
		{   
			if (n == array[i])
			{
				exist = true;
			}
		}
		return exist;
	}

	void SetElements::BubbleSorting()
	{
		int tmp;
		bool exit = false;
		while (!exit)
		{
			exit = true;
			for (int i = 0; i < size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					tmp = array[i + 1];
					array[i + 1] = array[i];
					array[i] = tmp;
					exit = false;
				}
			}
		}
	}

	void SetElements::Show()
	{   
		cout << "Set:{";
		for (int i = 0; i <size; i++ )
		{
			cout  << array[i] ;
			if (i != size - 1)
			{
				cout << ",";
			}
		}

		cout <<"}" << endl;
	}
  int  SetElements::Add(int n)
	{
		if (IsExist(n))
		{
			return -1;
		}
		else
		{   
			
			array[size] = n;
			size = size + 1;
			return 0;
			

		}
	}
	int  SetElements::Delete(int n)
	{
		int z;
		if(!IsExist(n))
		{
			return 1;
		}
		else
		{  
			for (int i = 0; i < size;i++)
			{
				if (array[i] == n)
				{
					z = i;
				}
			}
			size = size - 1;
			for (int i = z+1; i < size+1; i++)
			{
				array[i - 1] = array[i];
			}
			return 0;
		}
	}
	/* SetElements operator+ (SetElements Set2)
	{

		SetElements NewSet;
		NewSet = *array

		for (int i = 0; i < Set2.size; i++)
		{
			NewSet.Add(Set2.array[i]);
		}

		return NewSet;
		}*/
	

	void InputArrayElements(int n,int *arrayN)
	{
		int x;
		cout << "Set:";
		for (int i = 0; i < n; i++)
		{   
			cin >> x;
			arrayN[i]=x;
		
		}
		
	 }

	int Fib(int n)
	{
		if (n == 0 || n == 1)
			return 1;
		else
			return Fib(n-2)+Fib(n - 1);
	}

	void SetElements::Fibonate()
	{
		for (int i = 0; i < size; i++)
		{
			int n = 1;
			while (array[i] > Fib(n))
			{
				n = n + 1;
			}
			if (array[i] != Fib(n))
			{
				Delete(array[i]);
				i = 0;
			}
		}
	}
