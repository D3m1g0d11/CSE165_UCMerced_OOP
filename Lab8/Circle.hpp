#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Sortable.h"
#include <iostream>

class Circle : public Sortable{
public:
    int r;
    Circle(){ this->r = 0;}
    Circle(int r){
        this->r = r;
    }
    bool compare (const Sortable * s){
        if(sizeof(this) < sizeof(s)){
            return true;
        }
        return false;
    }
    void print (){
        std::cout << this->r;
    }
};

#endif
