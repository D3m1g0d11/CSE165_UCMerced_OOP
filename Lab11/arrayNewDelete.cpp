#include <iostream>
#include "Counter.hpp"

int Counter::count = 0;

int main(int argc, const char * argv[])
{
    Counter * myCounter = new Counter [13];
    
    Counter * anotherCounter = new Counter [7];
    
    delete [] myCounter;
    
    delete [] anotherCounter;
    
    return 0;
}