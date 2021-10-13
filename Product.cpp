#include<iostream>
#include<cstring>
#include<string>
#include "Product.h"
using namespace std;

Product::Product() {
	name[0] = '\0';
	price = 0;
	id = 0;
}

Product::Product(string _name, double _price, int _id)
{
	setName(_name);
	this->price = _price;
	this->id = _id;
}


Product::Product(const Product& other) {
	setName(other.getName());
	setId(other.getId());
	setPrice(other.getPrice());
}

Product& Product::operator=(const Product& other) {
	if (this == &other) return *this;


	setName(other.getName());
	setId(other.getId());
	setPrice(other.getPrice());


	return *this;
}


double Product::getPrice() const {
	return this->price;
}

void Product::setPrice(double _price) {
	this->price = _price;
}

string Product::getName() const {
	return this->name;
}

void Product::setName(string _name) {
	this->name = _name;
}

int Product::getId() const {
	return this->id;
}

void Product::setId(int _id) {
	this->id = _id;
}

void Product::printInfo() {
	cout << this->name << " " << this->price << " " << this->id << endl;
}
