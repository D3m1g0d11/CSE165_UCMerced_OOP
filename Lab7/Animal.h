#pragma once
#include <iostream>

using namespace std;

class Animal {
	string name;
	int age;

public:

	Animal() {
		name = "Generic Name";
		age = 0;
	}

	Animal(string n, int a) {
		name = n;
		age = a;
	}

	virtual void talk() = 0; //declaring this function as virual allows Animal object to be cast as child class, and then called

};
