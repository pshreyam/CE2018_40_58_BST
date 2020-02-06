#ifndef BST_H
#define BST_H
class BST
{
public:
     virtual void add (int val)=0;
     virtual void preorderTraversal()=0;
     virtual bool isIn (int val)=0;
     virtual int max()=0;
     virtual int min() = 0;

};
#endif // BST_H

