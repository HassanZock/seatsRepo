#pragma once
#ifndef user_H
#define user_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>



class user {

private:

std::string userName;

protected:
	//string userPassword;
	
	//string userEmail;

public:

	//string userName;
	
	void setPassword();
	void setUsername();
	

	//pure virtual function
	virtual void setEmail();
	virtual void greeting();
};

#endif