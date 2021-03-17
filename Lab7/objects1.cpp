#include "Object.hpp"
#include <iostream>

int Object::count = 0;

Object f(Object& someObject) {
	return someObject;
}

int main(){
	Object myObject;

	Object another = f(myObject);

	std::cout << another.count << '\n';

    return EXIT_SUCCESS;
}