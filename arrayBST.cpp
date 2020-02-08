#include <iostream>
#include "arrayBST.h"
int main()
{
    ArrayBST a;
    int length;
    a.add(30);
    a.add(20);
    a.add(40);
    a.add(10);
    a.add(25);
    a.add(45);
    a.add(60);
    a.add(3);
    a.add(31);
    length = a.getLength();
    cout<<"-------------------"<<endl;
    a.preOrder();
    a.inOrder(length);
    cout << "-------------------" << endl;
    cout << "Minimum Value of the tree = " << a.min() << endl;
    cout << "Maximum Value of the tree = " << a.max() << endl;
    cout << "-------------------" << endl;
    return 0;
}
