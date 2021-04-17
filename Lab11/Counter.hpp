#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <iostream>

class Counter{
public:
    static int count;
    int ID;
    Counter()
    :ID(count++)
    {
        std::cout << this->ID << " created\n";
    }
    ~Counter()
    {
        std::cout << this->ID << " destroyed\n";
    }
    void* operator new(std::size_t sz)
    {
        std::cout << "new\n";
        void* mem = std::malloc(sz);
        return mem;
    }
    void operator delete(void* mem)
    {
        std::cout << "delete\n";
        std::free(mem);
    }
    void* operator new[](std::size_t sz)
    {   
        std::cout << "new " << (sz / sizeof(Counter)) - 2  << " starting at " << count << '\n';
        void* mem = std::malloc(sz);
        return mem;
    }
    void operator delete[](void* mem){
        std::cout << "delete counters\n";
        std::free(mem);
    }
};


#endif
