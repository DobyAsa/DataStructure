//
// Created by DobyAsa on 2023/8/17.
//

#include <iostream>
#include "SequentialStack.h"

using std::cout;
using std::endl;

SequentialStack::SequentialStack() {
    base = new int[MAXSIZE];
    top = base;
}

SequentialStack::~SequentialStack() = default;

bool SequentialStack::IsEmpty() {
    if (top == base)
        return true;
    return false;
}

bool SequentialStack::Push(int data) {
    *top = data;
    top++;
}

bool SequentialStack::Pop(int *data) {
    top--;
    *data = *top;
}

bool SequentialStack::GetTop(int *data) {
    if (IsEmpty())
        return false;
    *data = *(top - 1);
}

void SequentialStack::Print() {
    if (IsEmpty())
        return;
    cout << "[ ";
    int* cur = base;
    while(cur != top) {
        cout << *cur << " ";
        cur++;
    }
    cout << ">" << endl;
}