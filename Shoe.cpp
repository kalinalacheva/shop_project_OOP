#include<iostream>
#include<cstring>
#include "Shoe.h"
#include "Product.h"
using namespace std;

Shoe::Shoe() :Product() {
	size = EU_36;
	brand[0] = '\0';
}
Shoe::Shoe(string _name, double _price, int _id, string _brand, Size _size) : Product(_name, _price, _id) {
	setBrand(_brand);
	setSize(_size);
}
Shoe::Shoe(const Shoe& other) :Product(other){
	setBrand(other.getBrand());
	setSize(other.getSize());
}

Shoe& Shoe::operator=(const Shoe& other) {
	if (this == &other) return *this;

	setBrand(other.getBrand());
	setSize(other.getSize());
	Product::operator=(other);

	return *this;
}

void Shoe::setSize(Size _size) {
	this->size = _size;
}

Size Shoe::getSize() const {
	return this->size;
}


void Shoe::setBrand(string _brand) {
	this->brand = _brand;
}

string Shoe::getBrand() const {
	return this->brand;
}

void Shoe::printInfo() {
	cout << this->name << " " << this->price << " " << this->id << " " << this->size << " " << this->brand << endl;
}
