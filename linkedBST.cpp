#include "linkedBST.h"

int main()
{
    cout<<"***Binary Tree Linked List Implementation***"<<endl<<endl;
    LinkedBST tree;

    //adding data
    tree.add(17);
    tree.add(11);
    tree.add(41);
    tree.add(122);
    tree.add(5);
    tree.add(125);

    cout<<"Pre-order traversal: "<<endl;
    tree.preOrder();
    cout<<endl<<"--------------------------"<<endl;

    cout<<"In-order traversal: "<<endl;
    tree.inOrder();
    cout<<endl<<"--------------------------"<<endl;

    cout<<"Adding 101: ";
    tree.add(101);
    cout<<endl<<endl;

    cout<<"Pre-order traversal: "<<endl;
    tree.preOrder();
    cout<<endl<<"--------------------------"<<endl;

    cout<<"In-order traversal: "<<endl;
    tree.inOrder();
    cout<<endl<<"--------------------------"<<endl;

    cout<<"Is 11 in data: "<<tree.search(11)<<endl;
    cout<<"Is 13 in data: "<<tree.search(13)<<endl;
    cout<<"--------------------------"<<endl;

    cout<<"Min. value is: "<<tree.min()<<endl;
    cout<<"Max. value is: "<<tree.max()<<endl;

    cout<<"---------------------------"<<endl;

    //deleting 11 and 101
    tree.deleteNode(11);
    tree.deleteNode(101);

    cout<<"Deleting node 11 and 101:"<<endl;
    cout<<"Is 11 in data: "<<tree.search(11)<<endl;
    cout<<"---------------------------"<<endl;

    cout<<"In-order traversal: "<<endl;
    tree.inOrder();
    cout<<endl<<"--------------------------"<<endl;

    return 0;
}

