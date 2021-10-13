#include<iostream>
#include<cstring>
#include "User.h"
using namespace std;
User::User() {
	username[0] = '\0';
	password[0] = '\0';
}

User::User(string _username, string _password) {
	setUsername(_username);
	setPassword(_password);
}

User::User(const User& other) {
	setUsername(other.getUsername());
	setPassword(other.getPassword());
}

User& User::operator=(const User& other) {
	if (this == &other) return *this;

	setUsername(other.getUsername());
	setPassword(other.getPassword());

	return *this;
}

string User::getUsername() const {
	return this->username;
}

string User::getPassword() const {
	return this->password;
}

void User::setUsername(string _username) {
	this->username = _username;
}

void User::setPassword(string _password) {
	this->password = _password;
}

void User::printInfo() {
	cout << username << endl;
}
