//
// Created by DobyAsa on 2023/8/17.
//

#ifndef SEQUENTIALSTACK_SEQUENTIALSTACK_H
#define SEQUENTIALSTACK_SEQUENTIALSTACK_H

#define MAXSIZE 50

class SequentialStack {
    int* base;
    int* top;

public:
    SequentialStack();
    ~SequentialStack();

    bool IsEmpty();
    bool Push(int data);
    bool Pop(int* data);
    bool GetTop(int* data);

    void Print();
};


#endif //SEQUENTIALSTACK_SEQUENTIALSTACK_H
