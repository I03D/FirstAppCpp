#include <iostream>
#include "A.h"

using namespace std;

void A::f() {
	cout << "x = " << x << endl << "y = " << y << endl;
}

A::A() {
	x = 30;
	y = 40;
}

A::A(int x, int y)
{
	this->x = x;
	this->y = y;
}