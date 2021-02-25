#include <iostream>
#include <fstream>
#include <string>
#include "stash.h"


int main(){
    Stash s;
    s.initialize(100);
    std::string line;
    std::ifstream f("input.txt");
    while(std::getline(f, line)){
        double x = double(std::stod(line));
        s.add(&x);
    }
    for(int i = 0; i < s.count(); i++){
       std::cout << *(double*)s.fetch(i) << ' ';
    }
    s.cleanup();

    return EXIT_SUCCESS;
}