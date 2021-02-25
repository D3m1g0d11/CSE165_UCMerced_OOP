#ifndef ENTRY_H
#define ENTRY_H

#include <string>

struct Entry{
    std::string fName, lName, email;

    void setName(std::string name){
        fName = name;
    }

    void setLastname(std::string name){
        lName = name;
    }

    void setEmail(std::string em){
        email = em;
    }

    std::string getName(){
        return fName;
    }

    std::string getLastName(){
        return lName;
    }

    std::string getEmail(){
        return email;
    }

    void print(){
        std::cout << "First Name: " << getName() << '\n';
        std::cout << "Last Name: " << getLastName() <<  '\n';
        std::cout << "Email: " << getEmail() << '\n';
    }
};

#endif
