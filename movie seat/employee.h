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

	void setworkHours();
	void setPosition();



public:
	void setEmail() override;




};

#endif
