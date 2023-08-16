//
// Created by DobyAsa on 2023/8/16.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

struct LinkedListNode {
    int data;
    LinkedListNode* next;
};

class LinkedList {
    int length;
    LinkedListNode* head;
    LinkedListNode* last;


public:
    LinkedList();
    ~LinkedList();

    LinkedListNode* HeadInsert(int data);
    LinkedListNode* TailInsert(int data);
    LinkedListNode* GetElem(int index);
    LinkedListNode* LocateElem(int data);
    LinkedListNode* Insert(int index, int data);
    LinkedListNode* Delete(int index);

    void Print();
};


#endif //LINKEDLIST_LINKEDLIST_H
