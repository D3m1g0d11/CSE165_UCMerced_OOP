#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object{
public:
    static int count;
    Object(){ this->count++; }
    Object(const Object &obj){ this->count++; }
};

#endif

