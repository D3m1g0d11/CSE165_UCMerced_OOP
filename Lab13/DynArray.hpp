#ifndef DYN_ARRAY_HPP
#define DYN_ARRAY_HPP

#include <iostream>
#include <vector>

template <typename T>
class DynArray{
private:
    std::vector<T> arr;
public:
    DynArray(){}
    void add(T num){
        this->arr.push_back(num);
    }
    T operator[](int index){
        return this->arr[index];
    }
    int size(){
        return this->arr.size();
    }
};

#endif
