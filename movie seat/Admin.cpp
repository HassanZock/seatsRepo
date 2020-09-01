#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include "Admin.h"
#include "Menu.h"
using namespace std;

void Admin :: passwordCheck() {

	string UserPassword;
	string password = "Tunaface";
	//string password = "$usysPussyisGr8";
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

void Admin::AddMovieData() {

	const int movieNamesize = 31, locationNamesize = 51; // movie and location sizes
	char again ; // add another movie

	// movie structure of data
	struct MovieData {
		char name[movieNamesize];
		int price;
		char location[locationNamesize];
	};

	MovieData Data;

	//open the file
	fstream info("C:/Users/Zockh/Desktop/c++/arrays/seat repo/seatsRepo/MovieInfo.txt", ios::out | ios::binary);

	cin.ignore();

	do
	{
		
		cin.ignore();
		cout << "Enter the movie name: ";
		cin.getline(Data.name, movieNamesize);
		cout << "Enter the price: $";
		cin >> Data.price;
		cin.ignore();
		cout << "Enter the Location: ";
		cin.getline(Data.location, locationNamesize);

		//write to file
		info.write(reinterpret_cast<char*>(&Data),sizeof(Data));

		cout << "Would like to add another Movie? Type Y to add another, N for no: ";
		cin >> again;
		cin.ignore();

	} while (again == 'Y' || again == 'y');

	//close the file
	info.close();
}

