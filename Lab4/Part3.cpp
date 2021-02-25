#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "linkedlist.h"


int main(){
    LinkedList l;
    l.initialize();
    std::string line;
    std::ifstream f("input.txt");
    while(std::getline(f, line)){
        double x = std::stod(line);
        l.add(new double(x));
    }
    LinkedList temp = l;
    while(temp.head != NULL){
        std::cout << *(double*)temp.head->data << '\n';
        temp.head = temp.head->next;
    }
    temp.cleanup();
    l.cleanup();
    
    return EXIT_SUCCESS;
}