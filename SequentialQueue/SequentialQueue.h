//
// Created by DobyAsa on 2023/8/17.
//

#ifndef SEQUENTIALQUEUE_SEQUENTIALQUEUE_H
#define SEQUENTIALQUEUE_SEQUENTIALQUEUE_H

#define MAXSIZE 50

class SequentialQueue {
    int data[MAXSIZE];
    int front, rear;

public:
    SequentialQueue() : front(0), rear(0){}
    ~SequentialQueue()= default;

    bool IsEmpty();
    bool EnQueue(int d);
    bool DeQueue(int* d);

    void Print();
};


#endif //SEQUENTIALQUEUE_SEQUENTIALQUEUE_H
