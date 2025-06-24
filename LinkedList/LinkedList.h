#ifndef LINKEDLIST
#define LINKEDLIST 
#include "Node.h"
class LinkedList {
    private:
    Node *last;
    Node *head;
    public:

    LinkedList();
    void printAll();
    void addLast(int number);
};
#endif