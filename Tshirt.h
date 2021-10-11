#pragma once
#include "Product.h"
class Tshirt:public Product {
public:
	Tshirt();
	Tshirt(string _name, double _price, int _id,string _color);
	Tshirt(const Tshirt& other);
	Tshirt& operator=(const Tshirt& other);

	void printInfo();
	string getColor() const;
	void setColor(string _color);

private:
	string color;
};