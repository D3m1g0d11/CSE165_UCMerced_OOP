#include <iostream>
#include <fstream>
#include <string>
#include "stash.h"

int main(){

    Stash s;
    s.initialize(1);
    int inc, num;
    char c;
    std::cin >> inc >> c >> num;
    s.increment = inc;
    while(c != '&' && num != 99){
        for(int i = 0; i < abs(num); i++){
            s.add(&c);
        }
        std::cin >> c >> num;
    }
    for(int i = 0; i < s.count(); i++){
        std::cout << *(char*)s.fetch(i);
    }
    std::cout << '\n' << s.inflateCount << ' ' << s.quantity << '\n';
    s.cleanup();

    return EXIT_SUCCESS;
}