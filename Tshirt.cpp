#include<iostream>
#include<cstring>
#include "Tshirt.h"
#include "Product.h"
using namespace std;

Tshirt::Tshirt():Product() {
	
	color[0] = '\0';
}

Tshirt::Tshirt(string _name, double _price, int _id,string _color):Product(_name, _price, _id) {

	setColor(_color);	
}


Tshirt::Tshirt(const Tshirt& other) : Product(other){
	setColor(other.getColor());
}

Tshirt& Tshirt::operator=(const Tshirt& other) {
	if (this == &other) return *this;
	setColor(other.getColor());

	Product::operator=(other);
	return *this;
}
void Tshirt::setColor(string _color) {
	this->color = _color;
}

string Tshirt::getColor() const {
	return this->color;
}

void Tshirt::printInfo() {
	cout << this->name << " " << this->price << " " << this->id << " " << this->color << endl;
}



