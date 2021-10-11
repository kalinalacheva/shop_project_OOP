#pragma once
#include<string>
#include<iostream>
using namespace std;
class Product {
public:
	Product();

	Product(string _name, double _price, int _id);

	Product(const Product& other);

	Product& operator=(const Product& other);

	double getPrice() const;

	void setPrice(double _price);

	string getName() const;

	void setName(string _name);

	int getId() const;

	void setId(int _id);

	void printInfo();

	string getColor() const;

	void setColor(string _color);

	void setBrand(string _brand);

	string getBrand() const;

protected:
	string name;
	double price;
	int id;
};
