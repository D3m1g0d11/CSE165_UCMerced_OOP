#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal{
public:
    int ageD;
    std::string nameD;
    Dog(std::string name, int age) : Animal() {
        std::cout << "Creating Dog\n";
        this->nameD = name;
        this->ageD = age;
    }
    ~Dog(){
        std::cout << "Deleting Dog\n";
    }
    std::string getName(){
        return this->nameD;
    }
    int getAge(){
        return this->ageD;
    }
    void feed(){
        std::cout << "A small bone, please!!\n";
    }
};

#endif
