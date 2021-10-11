#pragma once
using namespace std;
class User {
public:
	User();
	User(string _username, string _password);
	User(const User& other);
	User& operator=(const User& other);

	string getUsername() const;
	void setUsername(string _username);
	void setPassword(string _password);
	void printInfo();

private:
	string username;
	string password;
	string getPassword() const;
};
