#ifndef LA10_X_h
#define LA10_X_h

#include "Obj.hpp"

class X {
public:
	Obj* o;
	
	X(Obj*pt) {
		o=pt; o->ref();
	}
	
	~X() {
		o->unref();
	}
};

#endif