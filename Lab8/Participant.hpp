#ifndef PARTICIPANT_HPP
#define PARTICIPANT_HPP

#include "Sortable.h"
#include <vector>
#include <string>

class Participant : public Sortable{
public:
    std::string name;
    int age;
    double score;
    Participant(){}
    Participant(std::string name, int age, double score){
        this->name = name;
        this->age = age;
        this->score = score;
    }
    bool compare (const Sortable * s){
        if(sizeof(this) < sizeof(s)){
            return true;
        }
        return false;
    }
    void print (){
        std::cout << this->name << '\t' << this->age << '\t' << this->score << '\n';
    }

private:
    std::vector<Sortable*> storage;
};


#endif
