#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){
    last = nullptr;
    head = nullptr;
}

void LinkedList::printAll(){
    int nodeNumber {0};
    std::cout<< "Node #" << nodeNumber << "value : " << data << "\n";
    std::cout<< " |\nV\n";
    while ()
    {
        /* code */
    }
    
}

void LinkedList::addLast(int number){
    Node *temp = new Node(number);
    LinkedList *temp = new LinkedList();
    if (head == nullptr) {
        head = temp;
    }
    
    last = temp;  
}
