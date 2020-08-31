#pragma once
#ifndef Admin_H
#define Admin_H
#include <vector>
#include <cstring>
#include "Menu.h"

using namespace std;

//class Menu;

class Admin {

private:



public:

	
	void passwordCheck();
	friend void Menu::optionDirector(int input, Admin &);


};

#endif