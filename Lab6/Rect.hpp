#ifndef RECT_HPP
#define RECT_HPP

#include "vectors.hpp"
#include <iostream>
#include <cassert>
#include <stdexcept>

class Rect{
public:
    float width, height;
    Vec upper_left_corner;
    Rect(){}
    Rect(float x, float y, float width, float height){
        if(width < 0 || height < 0){
            throw std::invalid_argument("ILLEGAL PARAMS! WIDTH / HEIGHT MUST BE > 0\n");
        }
        this->upper_left_corner = Vec(x, y);
        this->width = width;
        this->height = height;
    }

    bool contains(Vec v){
        if(v.x > this->upper_left_corner.x 
            && v.x < this->upper_left_corner.x + this->width
            && v.y < this->upper_left_corner.y 
            && v.y > this->upper_left_corner.y - this->height){
                return true;
        }
        return false;
    }
};

#endif
