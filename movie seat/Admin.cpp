#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include "Admin.h"
#include "Menu.h"
using namespace std;

void Admin :: passwordCheck() {

	

	string UserPassword;
	string password = "TunaFish";
	int timeOut = 0;

	

	cout << "Please input the password. "<< endl;
	cout << "You have 3 chances" << endl;
	cout << "Password: ";
	getline(cin, UserPassword);
	

	while (UserPassword != password) {
		cout << "Incorrect Password try again" << endl;
		cin >> UserPassword;
		timeOut++;
		
		if (timeOut == 3) {
			exit(0);
		}

	}

	cout << "you may enter" << endl;

}

