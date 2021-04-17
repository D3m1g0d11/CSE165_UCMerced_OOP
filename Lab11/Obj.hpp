#ifndef OBJ_HPP
#define OBJ_HPP

#include "Shared.h"
#include <iostream>

class Obj : public Shared {
public:
    std::string n;
    Obj(std::string name){
        this->n = name;
        std::cout << "New " << this->n << '\n';
    }
    ~Obj(){
        std::cout << "Delete " << this->n << '\n';
    }
};

#endif
