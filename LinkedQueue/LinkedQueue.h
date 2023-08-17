//
// Created by DobyAsa on 2023/8/17.
//

#ifndef LINKEDQUEUE_LINKEDQUEUE_H
#define LINKEDQUEUE_LINKEDQUEUE_H

struct LinkedQueueNode {
    int data;
    LinkedQueueNode *next;
};

class LinkedQueue {
    LinkedQueueNode *front, *rear;

public:
    LinkedQueue();
    ~LinkedQueue();

    bool IsEmpty();
    bool EnQueue(int d);
    bool DeQueue(int *d);
    void Print();
};


#endif //LINKEDQUEUE_LINKEDQUEUE_H
