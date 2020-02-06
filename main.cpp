#include<iostream>
#include"linkedBST.h"
int main(){
    std::cout<<"***Binary Tree Linked List Implementation***"<<std::endl;
    LinkedBST tree;
    
    //adding datas
    tree.add(17);
    tree.add(11);
    tree.add(41);
    tree.add(122);
    tree.add(5);
    
    std::cout<<"Pre order traveral: "<<std::endl;
    tree.preorderTraversal();

    std::cout<<"\nAdding 101: "<<std::endl;
    tree.add(101);

    std::cout<<"Pre order traveral: "<<std::endl;
    tree.preorderTraversal();
    std::cout<<std::endl;

    std::cout<<"\nIs 11 in data: "<<tree.isIn(11)<<"\n";
    std::cout<<"\nIs 13 in data: "<<tree.isIn(13)<<"\n";
}