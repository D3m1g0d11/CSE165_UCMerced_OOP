#pragma once

#include <iostream>
#include "Object.hpp"

Number::Number(){ this->num = 0; }

Number::Number(int num){ this->num = num; }

Number::~Number(){}

void Number::print(){ std::cout << "num = " << this->num << '\n'; }

Object* Number::multiply(const Object* other) const {
	const type_info& type = typeid(*other);
	if(type.name() == typeid(*this).name()){
		Number* num = new Number(this->num * dynamic_cast<const Number*>(other)->num);
		return num;
	}
	const Coord3D* o = dynamic_cast<const Coord3D*>(other);
	Coord3D* coord = new Coord3D(o->x * num, o->y * num,  o->z * num);
	return coord;
}