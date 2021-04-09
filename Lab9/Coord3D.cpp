#pragma once

#include <iostream>
#include "Object.hpp"


Coord3D::Coord3D(){ std::cout << "NEED PARAMS!\n"; }

Coord3D::Coord3D(int x1, int y1, int z1){
	this->x = x1;
	this->y = y1;
	this->z = z1;
}

Coord3D::~Coord3D(){}

void Coord3D::print(){ std::cout << "x = " << this->x << ", y = " << this->y << ", z = " << this->z << '\n'; }

Object* Coord3D::multiply(const Object* other) const{
	const type_info& type = typeid(*other);
	if(typeid(*this).name() == type.name()){
		const Coord3D* c = dynamic_cast<const Coord3D*>(other);
		Coord3D* coord = new Coord3D(c->x * this->x, c->y * this->y, c->z * this->z);
		return coord;
	}
	const Number* temp = dynamic_cast<const Number*>(other);
	Coord3D* coord = new Coord3D(temp->num * this->x, temp->num * this->y, temp->num * this->z);
	return coord;
}