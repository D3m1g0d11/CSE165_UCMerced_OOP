#ifndef RECT_HPP
#define RECT_HPP

#include "vectors.hpp"
#include <iostream>
#include <cassert>
#include <stdexcept>

class AppRect{
public:
    float w, h;
    int x, y;
    Vec upper_left_corner;
    AppRect(){}
    AppRect(float x, float y, float width, float height){
        if(width < 0 || height < 0){
            throw std::invalid_argument("ILLEGAL PARAMS! WIDTH / HEIGHT MUST BE > 0\n");
        }
        this->upper_left_corner = Vec(x, y);
        this->x = x;
        this->y = y;
        this->w = width;
        this->h = height;
    }

    bool contains(Vec v){
        if(v.x > this->upper_left_corner.x 
            && v.x < this->upper_left_corner.x + this->w
            && v.y < this->upper_left_corner.y 
            && v.y > this->upper_left_corner.y - this->h){
                return true;
        }
        return false;
    }
};

#endif
