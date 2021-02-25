#include <iostream>

#define PI 3.14159;

int main(){
    double r = 0.0;
    std::cout << "Enter the radius of a circle and I will return the area: " << std::endl;
    std::cin >> r;
    std::cout << "The area is: " << r * r * PI;
    std::cout << '\n';

    return EXIT_SUCCESS;
}