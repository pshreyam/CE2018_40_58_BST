#ifndef LINKEDBST_H
#define LINKEDBST_H

#include "BST.h"
#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};


class LinkedBST:public BST{
    public:
    Node* root;
    LinkedBST();
    ~LinkedBST();
    void preOrder();
    void add(int data);
    void add(Node* &root,int data);
    bool search(int data);
    int min();
    int max();
    void inOrder();
    void deleteNode(int val);

    private:
    bool find(Node* &root,int targetKey);
    void insert(Node* &subtree, Node* newNode);
    void traverse(Node* root);

};

LinkedBST::LinkedBST()
{
    root=NULL;
}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(int data)
{
    add(root,data);
}


void LinkedBST::add(Node* &root,int data)
{
    Node* newNode=new Node();
    newNode->data=data;
    if(root==NULL){
        root=new Node();
        this->root=newNode;
    }
    else{
        insert(root,newNode);
    }
}



void LinkedBST::insert(Node* &subtree, Node* newNode)
{
    if(subtree->data>newNode->data){
        if(subtree->left!=NULL){
            insert(subtree->left,newNode);
        }
        else{
            subtree->left=newNode;
        }
    }
    else{
        if(subtree->right!=NULL){
            insert(subtree->right,newNode);
        }
        else{
            subtree->right=newNode;
        }
    }
}


bool LinkedBST::search(int data)
{
    return find(root,data);
}

bool LinkedBST::find(Node* &root,int targetKey)
{
    if(root==NULL){
        cout<<"It is a Null tree"<<endl;
    }
    else{
        Node* p=new Node();
        p=root;
        while(p!=NULL){
            if(targetKey>p->data){
                p=p->right;
            }
            else if(targetKey<p->data){
                p=p->left;
            }
            else if(targetKey==p->data){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;
}


void LinkedBST::preOrder()
{
    traverse(root);
}

void LinkedBST::traverse(Node* root)
{
    if (root == NULL)
    return;
    cout << root->data << " ";
    traverse(root->left);
    traverse(root->right);
}

int LinkedBST::min()
{
    if (root==NULL)
    {
        cout<<"No value"<<endl;
        return -1;
    }
    else
    {
        Node* temp=root;
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        return temp->data;
    }
}

int LinkedBST::max()
{
    if (root==NULL)
    {
        cout<<"No value"<<endl;
        return -1;
    }
    else
    {
        Node* temp=root;
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        return temp->data;
    }
}

void LinkedBST::inOrder()
{

}

void LinkedBST::deleteNode(int val)
{

}
#endif // LINKEDBST_H



