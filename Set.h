#ifndef SET_H   
#define SET_H

class SetElements
{
public:
	int *array;
	int size;
public:
	SetElements(int z);
	bool IsExist(int n) ;
	void BubbleSorting();
	int Add(int n);
	int Delete(int n);
	void Show();
	void Fibonate();
	
	/*SetElements operator+ (SetElements Set2);
	SetElements operator- (SetElements Set2)*/
};
void InputArrayElements(int n,int *arrayN);
#endif