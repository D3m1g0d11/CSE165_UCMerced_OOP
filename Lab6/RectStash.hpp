#ifndef STASH_HPP
#define STASH_HPP

#include <iostream>
#include <memory>
#include <cassert>
#include <vector>
#include "Rect.hpp"

class RectStash{
public:
    int size, quantity, next;
    std::shared_ptr<Rect[]> arr; //If using array stash, call addArr
    std::vector<std::shared_ptr<Rect>> vec; //If using vector stash, call addVec


    RectStash(int sz)
    : arr(new Rect[sz])
    , size {sz}
    , next {0}
    , quantity {0} {}

    ~RectStash(){
        this->vec.clear();
    }

    void addVec(std::shared_ptr<Rect> r){
        this->vec.emplace_back(std::move(r));
    }

    void addArr(std::shared_ptr<Rect> r){
        if(this->next >= this->quantity){
            this->inflate(1);
        }

        int startBytes = this->next * this->size;
        Rect* r1 = r.get();
        Rect* e = (Rect*)r1;
	  
		for(int i = 0; i < size; i++){
            this->arr[startBytes + i] = r1[i];
        }
		this->next = this->next + 1;
    }

    void inflate(int increase){
        assert(increase > 0);
		int newQuantity = this->quantity + increase;
		int newBytes = newQuantity * this->size;
		int oldBytes = quantity * this->size;
		std::shared_ptr<Rect[]> tempArr(new Rect[newBytes], std::default_delete<Rect[]>());
		for(int i = 0; i < oldBytes; i++){
            tempArr[i] = this->arr[i];
        }
		this->arr = tempArr;
		this->quantity = newQuantity;
    }

    int count(){
        return this->next ? this->next : this->vec.size();
    }

    void contains(int p1, int p2){
        Vec v = Vec(p1, p2);
        for(int i = 0; i < this->count(); i++){
            if(this->arr[i].contains(v)){
                std::cout << "in ";
            }
            else{
                std::cout << "out ";
            }
        }
        std::cout << '\n';
    }
};

#endif
