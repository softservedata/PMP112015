#include <iostream>
using namespace std;
class Node {
private:
	int value;
	Node * left;
	Node* right;
public:
	Node(int value) {
		this->value = value;
		this->left = NULL;
		this->right = NULL;
	}

	Node(int value, Node* left, Node* right) {

		this->value = value;
		this->left = left;
		this->right = right;
	}

	Node* getLeft() {
		return this->left;
	}

	void setLeft(Node* left) {
		this->left = left;
	}

	Node* getRight() {
		return this->right;
	}

	void setRight(Node* right) {
		this->right = right;
	}

	int getValue() {
		return this->value;
	}

	void setValue(int value) {
		this->value = value;
	}

};

class Stack
{
private:
	Node *sp = NULL;
public:
	Stack() {

	}

	void push(int value) {
		Node* temp = new Node(value);
		temp->setValue(value);
		if (sp == NULL) {
			sp = temp;;
		}
		else {
			sp->setRight(temp);
			temp->setLeft(sp);
			sp = temp;
		}
	}

	int pop() {
		if (sp != NULL) {
			int result = sp->getValue();
			Node* temp = sp->getLeft();
			if (temp != NULL) {
				temp->setRight(NULL);
			}

			sp = temp;
			return result;
		}

	}

	int seek() {
		return sp == NULL ? 0 : sp->getValue();
	}

	bool empty() {
		return sp == NULL ? true : false;
	}
}

int sizearr()
{
	cout << "Enter size of array" << endl;
	int size;
	cin >> size;
	return size;
}

int* getarr(int size)
{
	cout << "Enter values" << endl;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	return arr;
}
void sortarr(int* k, int size)
{
	Stack* stack1 = new Stack();
	Stack* stack2 = new Stack();
	for (int i = 0; i < size; i++) {
		if ((i % 3 == 0) && (i != 0))
			stack1->push(k[i]);
		else
			stack2->push(k[i]);
	}
	while (!stack1->empty())
	{
		cout << stack1->pop() << " ";
	}
	while (!stack2->empty())
	{
		cout << stack2->pop() << " ";
	}
}

void main() {
	Stack* stack1 = new Stack();
	Stack* stack2 = new Stack();
	int z = sizearr();
	int* k = getarr(z);
	sortarr(k, z);

}