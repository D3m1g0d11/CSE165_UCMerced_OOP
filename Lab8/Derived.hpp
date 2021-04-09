#ifndef DERIVED_HPP
#define DERIVED_HPP

#include "ADT.h"
#include <iostream>

class Derived : public ADT{
public:
    Derived(){}
    void doSomething(){ std::cout << "I DID SOMETHING\n"; }
    void doSomethingElse(){ std::cout << "I DID SOMETHING ELSE\n"; }
    void dontDoThis(){}
};

#endif
