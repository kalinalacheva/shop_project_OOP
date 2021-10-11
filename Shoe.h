#pragma once
#include "Product.h"
enum Size {
	EU_36 = 36,
	EU_37 = 37,
	EU_38 = 38,
	EU_39 = 39,
	EU_40 = 40,
	EU_41 = 41,
	EU_42 = 42,
	EU_43 = 43,
	EU_44 = 44
};
class Shoe :public Product {
public:
	Shoe();
	Shoe(string _name, double _price, int _id,string _brand,Size size);
	Shoe(const Shoe& other);
	Shoe& operator=(const Shoe& other);

	void setSize(Size _size);
	Size getSize() const;
	void setBrand(string _brand);
	string getBrand() const;
	void printInfo();
	
private:
	string brand;
	Size size;
};