#include <iostream>
class Node {
    private:
    int value {};
    Node *next {};
    public:
    Node(int number) : value(number){
        
    }
    int getValue(){
        return this->value;
    }
    
    void setValue(int value){
        this->value = value;
    }

    Node getNext(){
        return *next;
    }

    void setNext(Node *next){
        this->next = next;
    }

};

class LinkedList {
    private:
    LinkedList *last;
    LinkedList *head;
    public:

    LinkedList() {
        last = nullptr;
        head = nullptr;
    }
    void printAll();
    void addLast(int number);
};

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
    Node *temp = new Node()
    LinkedList *temp = new LinkedList(number);
    if (head == nullptr) {
        head = temp;
    }
    
    last = temp;  
}


int main(int argc, char const *argv[])
{
    return 0;
}
