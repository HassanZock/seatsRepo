#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include "Menu.h"
#include "Admin.h"
#include "Theater.h"
#include "employee.h"
#include "user.h"
#include <stdlib.h> // for exit function
using namespace std;


void employee:: setworkHours() {
	cout << "what is your work schedual?" << endl;
	cout << "work schedual: ";
	getline(cin, schedual);
}

void employee::setPosition() {
	cout << "what is your position?" << endl;
	cout << "work position: ";
	getline(cin, position);

}

void employee::setEmail()  {
	cout << "what is your email?" << endl;
	cout << "work email: ";
	getline(cin, email);
}

//void user::greeting() {
	//cout << "Hello welcome to your work portal" << endl;
//}