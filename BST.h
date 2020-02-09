#ifndef BST_H
#define BST_H

class BST
{
public:
     virtual bool search(int val) = 0;
     virtual void add(int val) = 0;
     virtual void preOrder() = 0;
     virtual void inOrder() = 0;
     virtual int min() = 0;
     virtual int max() = 0;
     // virtual void deleteNode(int val) = 0;
};

#endif // BST_H

