#include <iostream>
#include "SequentialStack.h"



int main() {
    SequentialStack ss;
    int d;
    ss.Print();
    ss.Push(10);
    ss.Push(20);
    ss.Push(30);
    ss.Push(40);
    ss.Push(50);
    ss.Print();
//    while(!ss.IsEmpty()) {
//        ss.Pop(&d);
//        std::cout << d << " ";
//    }
    ss.GetTop(&d);
    std::cout << d << std::endl;
    ss.Print();

    return 0;
}
