//
// Created by DobyAsa on 2023/8/16.
//
#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::endl;


LinkedList::LinkedList() {
    head = new LinkedListNode;
    head->next = nullptr;

    last = nullptr;

    length = 0;
}

LinkedList::~LinkedList() {
    delete head;
}


LinkedListNode* LinkedList::HeadInsert(int data) {
    auto* n = new LinkedListNode;
    n->data = data;
    n->next = head->next;
    head->next = n;

    if(!last)
        last = n;

    length++;
    return n;
}

LinkedListNode* LinkedList::TailInsert(int data) {
    auto* n = new LinkedListNode;
    n->data = data;
    n->next = nullptr;

    if (!last) {
        head->next = n;
    } else {
        last->next = n;
    }
    last = n;

    length++;
    return n;
}

LinkedListNode *LinkedList::GetElem(int index) {
    if (index < 1 || index > length)
        return nullptr;
    LinkedListNode* cur = head;
    while(index--) {
        cur = cur->next;
    }

    return cur;
}

LinkedListNode *LinkedList::LocateElem(int target) {
    LinkedListNode* cur = head->next;

    while(cur) {
        if (cur->data == target)
            return cur;
        cur = cur->next;
    }

    return nullptr;
}

LinkedListNode* LinkedList::Insert(int index, int data) {
    if (index < 1 || index > length+1)
        return nullptr;
    LinkedListNode* cur = head;
    while(--index) {
        cur = cur->next;
    }
    auto* n = new LinkedListNode;
    n->data = data;
    n->next = cur->next;
    cur->next = n;

    length++;
    return n;
}

LinkedListNode* LinkedList::Delete(int index) {
    if (index < 1 || index > length)
        return nullptr;
    auto* cur = head;
    while(--index)
        cur = cur->next;
    auto* deleted = cur->next;
    cur->next = deleted->next;
    delete deleted;

    length--;
    return cur->next;
}

void LinkedList::Print() {
    LinkedListNode* cur = head->next;
    while (cur) {
        cout << cur->data;
        if (cur->next) {
            cout << " -> ";
        }
        cur = cur->next;
    }
    cout << endl;
}

