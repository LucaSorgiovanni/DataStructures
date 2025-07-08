#include "LinkedList.h"
#include <iostream>
int main(int argc, char const *argv[]) {

    LinkedList lista = LinkedList();
    std::cout << "Size : " << lista.size() << "\n";
    lista.push_front(6);
    std::cout << "Added 6\n";
    std::cout << "Size : " << lista.size() << "\n";
    return 0;
}
