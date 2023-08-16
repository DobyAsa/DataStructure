#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::endl;

int main() {

    LinkedList l;
    l.HeadInsert(1);
    l.HeadInsert(2);
    l.HeadInsert(3);
    l.HeadInsert(4);
    l.HeadInsert(5);
//    l.Print();

    l.TailInsert(1);
    l.TailInsert(2);
    l.TailInsert(3);
    l.TailInsert(4);
    l.TailInsert(5);
    l.Print();

//    cout << l.GetElem(9)->data << endl;
//    cout << l.LocateElem(4) << endl;
    l.Insert(11, 999);
    l.Print();
    l.Delete(11);
    l.Print();

    return 0;
}
