#include <iostream>
#include "arrayBST.h"
int main()
{
    ArrayBST a;
    a.add(5);
    a.add(6);
    a.add(4);
    a.add(10);
    a.add(40);
    a.add(3);
    a.add(2);
    a.add(50);
    a.add(32);
    a.add(69);
    a.add(30);
    cout<<"-------------------"<<endl;
    a.preOrderTraversal();
    bool check=a.isIn(40);
    if (check==true)
    {
        cout<<"Data found."<<endl;
    }
    else
    {
        cout<<"Data not found."<<endl;
    }
    return 0;
}
