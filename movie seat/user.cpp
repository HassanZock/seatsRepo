#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include <stdio.h>
#include "user.h"
#include "customer.h"
#include <stdlib.h>
using namespace std;


void user::setPassword() {

	cout << "Please select a password" << endl;
	cout << "Password: ";
	//getline(cin, userPassword);
	cout << "Your password has been set" << endl;
	
}

void user::setUsername() {

	//string userName;

	cout << "Please select a username" << endl;
	cout << "Username: ";
	getline(cin, userName);
	//cin >> username;
	cout << "Your username has been set" << endl;

}

void user::setEmail()  {
	cout << "base user email" << endl;
}

void user::greeting() {
	cout << "Hello user" << endl;
}