#include <iostream>
#include "SequentialQueue.h"

using std::cout;
using std::endl;

int main() {
    SequentialQueue sq;

    sq.EnQueue(1);
    sq.EnQueue(2);
    sq.EnQueue(3);
    sq.EnQueue(4);
    sq.EnQueue(5);
    sq.Print();

    int d;
    while(!sq.IsEmpty()) {
        sq.DeQueue(&d);
        cout << d << " ";
    }
    cout << endl;


    return 0;
}
