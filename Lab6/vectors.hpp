#ifndef VEC_HPP
#define VEC_HPP

#include <iostream>
#include <vector>

class Vec{
public:
    static Vec null;
    float x, y;
    Vec(){this->x = 0; this->y = 0;}
    Vec(float x, float y){
        this->x = x;
        this->y = y;
    }
    void add(Vec v){
        this->x += v.x;
        this->y += v.y;
    }
    void print(){
        std::cout << this->x << ' ' << this->y << '\n';
    }
};

Vec Vec::null = Vec();

#endif
