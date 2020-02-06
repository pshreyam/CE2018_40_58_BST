#include "BST.h"

class Node{
    public:
    int data;
    Node *left;
    Node *right;
};


class LinkedBST:public BST{
    public:
    Node* root;
    LinkedBST();
    void preorderTraversal();
    void add(int data);
    void add(Node* &root,int data);
    bool isIn(int data);

    private:
    bool find(Node* &root,int targetKey);
    void insert(Node* &subtree, Node* newNode);
    void traverse(Node* root);

};


