#include <iostream>
#include "linkedBST.h"

LinkedBST::LinkedBST(){
    root=NULL;
}

void LinkedBST::add(int data){
    add(root,data);
}


void LinkedBST::add(Node* &root,int data){
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



void LinkedBST::insert(Node* &subtree, Node* newNode){
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


bool LinkedBST::isIn(int data){
    return find(root,data);
}

bool LinkedBST::find(Node* &root,int targetKey){
    if(root==NULL){
        std::cout<<"It is a Null tree"<<std::endl;
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


void LinkedBST::preorderTraversal(){
    traverse(root);
}

void LinkedBST::traverse(Node* root) { 
    if (root == NULL) 
    return; 
    std::cout << root->data << " "; 
    traverse(root->left);  
    traverse(root->right); 
}   
