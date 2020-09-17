#pragma once
#ifndef customer_H
#define customer_H
#include <vector>
#include <cstring>
#include <fstream>
#include "user.h"

using namespace std;




class customer : public user
{

private:

	string customerEmail;
	string CustomerGenre;
	//string test = tuna;



public:

	void setEmail();
	void SetGenre();
	//void setEmail() override;
	//void greeting() override;





};

#endif
