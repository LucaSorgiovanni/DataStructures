#include "Node.h"
Node::Node(int number) : value(number){
        
}

int Node::getValue(){
    return this->value;
}

void Node::setValue(int value) {
    this->value = value;
}

Node Node::getNext(){
    return *next;
}

void Node::setNext(Node *next){
    this->next = next;
}
