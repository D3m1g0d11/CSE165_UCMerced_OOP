#pragma once
#include "Animal.h"

class Cat : public Animal {
public:
	Cat() : Animal() {

	}
	Cat(string n, int a) : Animal(n, a) {

	}

	void talk() {
		cout << "Meow, meow!" << endl;
	}
};
