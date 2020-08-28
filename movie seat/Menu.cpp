#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include "Menu.h"
using namespace std;

//*******************************************************************************************
//     Display Menu
//*******************************************************************************************

void menu :: displayMenu() {
	cout << "1) Purchase a ticket" << endl;
	cout << "2) See movie options and times" << endl;
	cout << "3) See thater locations" << endl;
	cout << "4) Review your orders" << endl;
	cout << "5) Exit Program" << endl;
}