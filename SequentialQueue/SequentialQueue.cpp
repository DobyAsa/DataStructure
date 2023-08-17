//
// Created by DobyAsa on 2023/8/17.
//
#include <iostream>
#include "SequentialQueue.h"

using std::cout;
using std::endl;

bool SequentialQueue::IsEmpty() {
    if (rear == front)
        return true;
    return false;
}

bool SequentialQueue::EnQueue(int d) {
    if ((rear+1) % MAXSIZE == front)
        return false;
    data[rear++] = d;
    return true;
}

bool SequentialQueue::DeQueue(int *d) {
    if (IsEmpty())
        return false;
    *d = data[front++];
    return true;
}

void SequentialQueue::Print() {
    if (IsEmpty())
        return;
    int cur = rear-1;
    while (cur + 1 != front) {
        cout << " ->" <<data[cur--];
    }
    cout << endl;
}




