#ifndef NODE
#define NODE
class Node {
    private:

    int value {};
    Node *next {};

    public:

    Node(int number);

    int getValue();
    void setValue(int value);

    Node getNext();
    void setNext(Node *next);

};

#endif