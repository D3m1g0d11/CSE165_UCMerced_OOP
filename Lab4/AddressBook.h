#ifndef ADDRESS_BOOK_H
#define ADDRESS_BOOK_H

#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include "Entry.h"

struct AddressBook{
    std::vector<std::unique_ptr<Entry>> addresses;

    void add(Entry* entry){
        addresses.emplace_back(entry);
    }

    void print(){
        for(int i = 0; i < addresses.size(); i++){
            std::cout << "First Name: " << addresses[i]->getName() << '\n';
            std::cout << "Last Name: " << addresses[i]->getLastName() <<  '\n';
            std::cout << "Email: " << addresses[i]->getEmail() << '\n';
        }
    }

    void free(){
        addresses.clear();
    }

};

#endif