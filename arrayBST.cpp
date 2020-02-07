#include <iostream>
#include "arrayBST.h"
int main()
{
    ArrayBST a;
    a.add(40);
    a.add(20);
    a.add(50);
    a.add(10);
    a.add(25);
    a.add(45);
    a.add(60);

    cout<<"-------------------"<<endl;

    cout << a.min() << endl;
    cout << a.max() << endl;

    return 0;
}
