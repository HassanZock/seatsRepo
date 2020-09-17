#pragma once
#ifndef user_H
#define user_H
#include <vector>
#include <cstring>
#include <fstream>
#include <cstring>
#include <string>
#include <stdio.h>


class user {

private:

protected:
	//string userPassword;
	//string userName;
	//string userEmail;

public:
	void setPassword();
	void setUsername();
	virtual void greeting();
	//pure virtual function
	virtual void setEmail() = 0;
};

#endif