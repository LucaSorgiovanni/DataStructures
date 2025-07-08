#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){
    last = nullptr;
    head = nullptr;
    _size = 0;
}

int LinkedList::size(){
    return _size;
}

bool LinkedList::isEmpty() {
    return (head == nullptr && last == nullptr);
}

void LinkedList::push_front(int number){

    Node *temp = new Node(number);

    if (isEmpty()) {
        head = temp;
        last = temp;
    }

    temp->setNext(head);
    head = temp;
    
}

/* void LinkedList::printAll(){
    int nodeNumber {0};
    std::cout<< "Node #" << nodeNumber << "value : " << data << "\n";
    std::cout<< " |\nV\n";
    while ()
    {
    }
    
}

void LinkedList::addLast(int number){
    Node *temp = new Node(number);

    if (head == nullptr) {
        head = temp;
    }
    
    last = temp;  
} */

