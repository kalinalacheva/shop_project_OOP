#include "Shoe.h"
#include "User.h"
#include "Shop.h" 
#include "Tshirt.h" 
#include<iostream>

void Shop::addShoe(Shoe s) {
	shoes.push_back(s);
}

void Shop::addUser(User u) {
	users.push_back(u);
}
void Shop::addTshirt(Tshirt t) {
	tshirts.push_back(t);
}
void Shop::removeShoeByPosition(int pos) {
	shoes.erase(shoes.begin()+(pos));
}

void Shop::removeUserByPosition(int pos) {
	users.erase(users.begin() + (pos));
}
void Shop::removeTshirtByPosition(int pos) {
	tshirts.erase(tshirts.begin() + (pos));
}

void Shop::insertShoeByPosition(int pos, Shoe s) {
	shoes.insert(shoes.begin()+pos,s);
}

void Shop::insertUserByPosition(int pos, User u) {
	users.insert(users.begin() + pos, u);

}
void Shop::insertTshirtByPosition(int pos, Tshirt t) {
	tshirts.insert(tshirts.begin() + pos, t);

}

void Shop::printUsers() {

	printVector(users);
}
void Shop::printTshirts() {

	printVector(tshirts);
}
void Shop::printShoes() {

	printVector(shoes);
}
template <typename T>
void Shop::printVector(vector<T> v) {
	for (int i = 0;i < v.size();i++) {
		v[i].printInfo();
	}
}
