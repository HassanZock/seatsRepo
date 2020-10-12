/*
#pragma once
#ifndef employee_H
#define employee_H
#include <vector>
#include <cstring>
#include <fstream>
#include "user.h"

using namespace std;




class employee : public user 
{

private:

	string schedual, position, email;
	


public:

	void setworkHours();
	void setPosition();
	virtual void setEmail() override;
	virtual void greeting() override;



};

#endif
*/