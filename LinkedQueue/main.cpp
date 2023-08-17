#include <iostream>
#include "LinkedQueue.h"

using std::cout;
using std::endl;

int main() {
    LinkedQueue lq;
    lq.Print();

    lq.EnQueue(1);
    lq.EnQueue(2);
    lq.EnQueue(3);
    lq.EnQueue(4);
    lq.EnQueue(5);
    lq.Print();

    int cur;
    while(lq.DeQueue(&cur)) {
        cout << cur << " ";
    }
    cout << endl;

    return 0;
}
