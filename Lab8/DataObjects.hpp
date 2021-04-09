#ifndef DATAOBJECTS_HPP
#define DATAOBJECTS_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include "Sortable.h"
#include "Participant.hpp"
#include "Circle.hpp"
#include <limits.h>

class Data{
public:
    Data(){}
    void add(Sortable* s){ this->storage.emplace_back(std::move(s)); }
    void print(){
        for(const auto& obj: this->storage){
            obj->print();
            //std::cout << ' ';
        }
        std::cout << '\n';
    }
    void sortCircles(){
        std::vector<Circle*> temp;
        std::vector<int> temp2;
        for(auto& s : storage){
            temp.push_back(dynamic_cast<Circle*>(s));
        }
        for(auto& num : temp){
            temp2.push_back(num->r);
        }
        std::sort(temp2.begin(), temp2.end());
        for(auto& circ : this->storage){
            delete circ;
        }
        this->storage.clear();
        for(auto& num : temp2){
            this->storage.emplace_back(new Circle(num));
        }
    }
    // double findMaxNum(std::vector<Participant*> temp, int it){
    //     double max = -1000000;
    //     for(int i = it; i < temp.size(); ++i){
    //         Participant* p = *(temp.begin() + i);
    //         double check = p->score;
    //         if(max < check){
    //             max = check;
    //         }
    //     }
    //     return max;
    // }

    void sortParticipant(){
        // std::vector<Participant*> temp;
        // std::vector<double> scores;
        // std::vector<std::string> names;
        // std::vector<int> ages;
        // for(auto& p: this->storage){
        //     temp.push_back(dynamic_cast<Participant*>(p));
        // }
        // for(auto& p : this->storage){
        //     delete p;
        // }
        // this->storage.clear();
        // for(int i = 0; i < (int)temp.size(); i++){
        //     double num = findMaxNum(temp,i);
        //     scores.push_back(num);
        //     names.push_back(temp[i]->getName());
        //     ages.push_back(temp[i]->age);
        //     std::cout << "NAME " << names[i] << '\n';
        // }
        // for(int i = 0u; i < temp.size(); i++){
        //     this->storage.emplace_back(new Participant(names[i], ages[i], scores[i]));
        // }        
    }
private:
    std::vector<Sortable*> storage;
};

#endif
