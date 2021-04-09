#include <iostream>
#include "DataObjects.hpp"
#include "Circle.hpp"

int main(int argc, const char * argv[])
{

    Data myData;
    
    myData.add(new Circle());
    myData.add(new Circle(3));
    myData.add(new Circle(2));
    myData.add(new Circle(4));
    myData.add(new Circle(1));
    
    myData.print();
    
    myData.sortCircles();
    
    myData.print();
    
    
    
    return 0;
}