#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "stack.h"

int main(){
    Stack s;
    s.initialize();
    std::string line;
    std::vector<double> list;
    std::ifstream f("input.txt");
    while(std::getline(f, line)){
        double x = std::stod(line);
        s.push(new double(x));
    }
    Stack temp = s;
    while(s.head != NULL){
        std::cout << *(double*)s.head->data << '\n';
        s.head = s.head->next;
    }
    s.head = temp.head;
    while(s.pop()){}
    s.cleanup();

    return EXIT_SUCCESS;
}