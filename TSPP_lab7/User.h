#pragma once
#include <string>
using namespace std;

class User
{
	string login;
	string password;

	User();
	~User();

	void Authorization(string login, string password);

};

