#ifndef ARRAYBST_H
#define ARRAYBST_H

#include "BST.h"
#define MAX_SIZE 1000

using namespace std;
class ArrayBST : public BST
{
private:
	int data[MAX_SIZE];
	int length{0};

public:
	ArrayBST();
	~ArrayBST();
	virtual bool search(int val);
	virtual void add(int val);
	virtual void preOrder();
	virtual void inOrder(int l);
	virtual int min();
	virtual int max();
	int getLength(){ return length; }
	// virtual void deleteNode(int val);
};

ArrayBST::ArrayBST()
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		this->data[i] = 0;
	}
}

ArrayBST::~ArrayBST() {}

void ArrayBST::add(int val)
{
	if (this->data[1] == 0)
	{
		this->data[1] = val;
		length++;
	}
	else
	{
		for (int i = 1; i <= MAX_SIZE;)
		{
			//this is for changing value of i
			if (val < this->data[i])
			{
				i = 2 * i;
			}
			else
			{
				i = 2 * i + 1;
			}
			//this is for inserting the value in the correct position
			if (this->data[i] == 0)
			{
				this->data[i] = val;
				cout << val << " inserted successfully." << endl;
				length++;
				break;
			}
		}
	}
}

void ArrayBST::preOrder()
{
	int i = 1;
	int j = 0;
	int k = 0;
	int l = 0;
	while (i > 0 && i < MAX_SIZE)
	{
		if (j != 1)
		{
			cout << "[" << i << "] " << this->data[i] << endl;
			k = 0;
			l = 0;
		}
		if (2 * i < MAX_SIZE && this->data[2 * i] != 0 && k != 1)
		{
			i = 2 * i;
			j = 0;
			l = 0;
		}
		else if (2 * i + 1 < MAX_SIZE && this->data[2 * i + 1] != 0 && l != 1)
		{
			i = 2 * i + 1;
			j = 0;
			k = 0;
		}
		else
		{
			if (i % 2 != 0)
			{
				l = 1;
			}
			else
			{
				l = 0;
			}
			i = int(i / 2);
			j = 1;
			k = 1;
		}
	}
}

bool ArrayBST::search(int val)
{
	int i;
	for (i = 1; i < MAX_SIZE;)
	{
		if (this->data[i] == val)
		{
			return true;
		}
		else if (val < this->data[i])
		{
			i = 2 * i;
		}
		else
		{
			i = 2 * i + 1;
		}
	}
	return false;
}

int ArrayBST::min()
{
	int i = 1;
	while (i < MAX_SIZE)
	{
		if (this->data[2 * i] != 0 && 2 * i < MAX_SIZE)
		{
			i = 2 * i;
		}
		else
		{
			break;
		}
	}
	return this->data[i];
}

int ArrayBST::max()
{
	int i = 1;
	while (i < MAX_SIZE)
	{
		if (this->data[2 * i + 1] != 0 && 2 * i + 1 < MAX_SIZE)
		{
			i = 2 * i + 1;
		}
		else
		{
			break;
		}
	}
	return this->data[i];
}


void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void ArrayBST::inOrder(int l)
{
	int a[l], i, j;
	for(i=1; i < 10; i++)
	{
		a[i] = this->data[i];
	}

	for (i = 1; i < 10; i++)
	{
		for(j = 0; j < 10 - i; j++)
		{
			if(a[j] > a[j+1])
			{
				swap(a[j], a[j+1]);
			}
		}
	}

	cout << "Inorder: ";
	for(i = 1; i < 10;  i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


void ArrayBST::deleteNode(int val)
{


}

#endif // ARRAYBST_H
