#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include <stdio.h>
#include "user.h"
using namespace std;


void user::setPassword() {

	cout << "Please select a password" << endl;
	cout << "Password: ";
	//getline(cin, userPassword);
	cout << "Your password has been set" << endl;
	
}

void user::setUsername() {

	cout << "Please select a username" << endl;
	cout << "Username: ";
	//getline(cin, userName);
	cout << "Your username has been set" << endl;

}

void user::setEmail()  {

}

void user::greeting() {
	cout << "Hello user" << endl;
}