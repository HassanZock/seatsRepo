#pragma once
#ifndef Menu_H
#define Menu_H
#include <vector>
#include <cstring>
#include "Admin.h"
using namespace std;

//Menu class decloration

class Admin;

class Menu {

private:






public:
	void displayMenu(int* userInput);
	void optionDirector(int input, Admin &);
	void displayMovieandTime();
	void displayTheaterLocation();
	


};

#endif