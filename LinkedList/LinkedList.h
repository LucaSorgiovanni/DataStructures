#ifndef LINKEDLIST
#define LINKEDLIST

#include "Node.h"

class LinkedList {
    private:

    Node *last;
    Node *head;
    int _size {};

    public:

    LinkedList();
    int size();
    bool isEmpty();
    void push_front(int number);
    void printAll();
    void addLast(int number);
    
};

#endif