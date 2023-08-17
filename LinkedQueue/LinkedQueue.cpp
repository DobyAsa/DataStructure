//
// Created by DobyAsa on 2023/8/17.
//

#include <iostream>
#include "LinkedQueue.h"

using std::cout;
using std::endl;

LinkedQueue::LinkedQueue() {
    front = new LinkedQueueNode;
    front->next = nullptr;
    rear = front;
}

LinkedQueue::~LinkedQueue() {
    LinkedQueueNode *cur = nullptr;
    while(front) {
        cur = front;
        front = front->next;
        delete cur;
    }
}

bool LinkedQueue::IsEmpty() {
    if (front == rear)
        return true;
    return false;
}

bool LinkedQueue::EnQueue(int d) {
    auto* n = new LinkedQueueNode;
    n->data = d;

    rear->next = n;
    rear = n;
    return true;
}

bool LinkedQueue::DeQueue(int *d) {
    if (IsEmpty())
        return false;
    auto* first = front->next;
    *d = first->data;
    front->next = first->next;
    if (rear == first)
        rear = front;
    delete first;

    return true;
}

void LinkedQueue::Print() {
    auto* cur = front->next;
    while(cur) {
        cout << cur->data << " <-";
        cur = cur->next;
    }
    cout << endl;
}







