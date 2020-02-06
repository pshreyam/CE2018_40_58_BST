#ifndef ARRAYBST_H
#define ARRAYBST_H
#include "BST.h"
#define MAX_SIZE 1000
using namespace std;
class ArrayBST:public BST
{
private:
    int data[MAX_SIZE];

public:
    ArrayBST();
    ~ArrayBST();
    void add(int val);
    void preOrderTraversal();
    bool isIn(int val);
};

ArrayBST::ArrayBST()
{
    for (int i=0;i<MAX_SIZE;i++)
    {
        this->data[i]=-1;
    }
}

ArrayBST::~ArrayBST(){}

void ArrayBST::add(int val)
{
    if (this->data[1]==-1)
    {
        this->data[1]=val;
    }
    else
    {
        for(int i=1; i<=MAX_SIZE;)
        {
            //this is for changing value of i
            if(val < this->data[i])
            {
                i = 2*i;
            }
            else
            {
                i = 2*i + 1;
            }
            //this is for inserting the value in the correct position
            if(this->data[i]==-1)
            {
                this->data[i] = val;
                cout<<val<<" inserted successfully."<<endl;
                break;
            }
        }
    }
}

void ArrayBST::preOrderTraversal()
{
    int i=1;
	int j=0;
	int k=0;
	int l=0;
	while(i>0 && i<MAX_SIZE)
    {
		if(j!=1)
		{
			cout<<"["<<i<<"] "<<this->data[i]<<endl;
			k=0;
			l=0;
		}
		if(2*i<MAX_SIZE && this->data[2*i]!=-1 && k!=1)
		{
			i=2*i;
			j=0;
			l=0;
		}
		else if (2*i+1<MAX_SIZE && this->data[2*i+1]!=-1 && l!=1)
		{
			i=2*i+1;
			j=0;
			k=0;
		}
		else
		{
			if(i%2!=0)
			{
				l=1;
			}
			else
			{
				l=0;
			}
			i=int(i/2);
			j=1;
			k=1;
		}
    }
}

bool ArrayBST::isIn(int val)
{
    for(int i=1;i<MAX_SIZE;)
    {
		if(this->data[i]==val)
        {
			return true;
		}
		else if (val<this->data[i])
        {
            i=2*i;
        }
		else
        {
            i=2*i+1;
        }
	}
	return false;
}
#endif // ARRAYBST_H

