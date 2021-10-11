#pragma once
#include "Tshirt.h"
#include "User.h"
#include "Shoe.h"
#include<vector>
using namespace std;
class Shop {
private:
	vector<Shoe> shoes;
	vector<Tshirt> tshirts;
	vector<User> users;
	template <typename T>
	void printVector(vector<T> v);
public:

	void addShoe(Shoe s);

	void addUser(User u);

	void addTshirt(Tshirt t);

	void removeShoeByPosition(int pos);

	void removeUserByPosition(int pos);

	void removeTshirtByPosition(int pos);

	void insertShoeByPosition(int pos, Shoe s);

	void insertUserByPosition(int pos, User u);

	void insertTshirtByPosition(int pos, Tshirt t);

	void printUsers();

	void printTshirts();

	void printShoes();
	
};
