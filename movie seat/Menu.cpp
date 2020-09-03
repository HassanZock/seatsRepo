#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include "Menu.h"
#include "Admin.h"
#include "Theater.h"
#include <stdlib.h> // for exit function
using namespace std;

//*******************************************************************************************
//     Display Menu
//*******************************************************************************************

void Menu :: displayMenu(int* userInput) {
	cout << "1) Purchase a ticket" << endl;
	cout << "2) See movie options and times" << endl;
	cout << "3) See food options" << endl;
	cout << "4) Review your orders" << endl;
	cout << "5) Purchase another ticket" << endl;
	cout << "6) Exit Program" << endl;
	cout << "7) Admin to set theater up" << endl;

	cout << "Please select a option : ";
	cin >> *userInput;
	cout << endl;


}

//*******************************************************************************************
//     Direct from menu to functions
//*******************************************************************************************
void Menu::optionDirector(int input) {
theater bringIN;
switch (input)
	{
	case 1:
		cout << "ticket options" << endl;
		bringIN.DisplaySeats();
		bringIN.SeatSelect();
		//optionDirector(input);
		break;
	
	case 2://
		displayMovieInfo();
		break;
	
	case 3: // kinda
		cout << "Food Choices" << endl;
		cout << "Popcorn" << endl;
		cout << "Soda" << endl;
		cout << "Slushi" << endl;
		cout << "Candy" << endl;
		cout << "Nachos" << endl;
		break;
	
	case 4:
		cout << "order review" << endl;
		break;
	
	case 5://
		cout << "purchase another ticket" << endl;
		bringIN.DisplaySeats();
		bringIN.SeatSelect();
		break;
	
	case 6://
		cout << "exit program" << endl;
		exit(EXIT_FAILURE);
		break;
	
	case 7://
		cout << "Admin rights:" << endl;
		Admin::passwordCheck();
		Admin::AddMovieData();
		cout << "you can now set up theater data" << endl;
		bringIN.getColomns();
		bringIN.getRows();
		bringIN.EmptySeats();
		//displayMenu(&userInput);
		//optionDirector(input);
		break;
	
	default:
		cout << "you suck try again" << endl;
	}
}

void Menu::displayMovieInfo() {

	const int movieNamesize = 31, locationNamesize = 51; // movie and location sizes
	char again; // add another movie

	// movie structure of data
	struct MovieData {
		char name[movieNamesize];
		int price;
		char location[locationNamesize];
	};

	MovieData Data;

	//open the file
	fstream info;
	info.open("C:/Users/Zockh/Desktop/c++/arrays/seat repo/seatsRepo/MovieInfo.dat", ios::in | ios::binary);

	if (!info) {
		cout << "database cant be accessed" << endl;
		//return 0;
	}

	cout << "stuff from file" << endl;

	info.read(reinterpret_cast<char*>(&Data), sizeof(Data));

	//cin.ignore();


	//while(getline(info,Data))
	while (!info.eof())
	{
		cout << "Movie name: ";
		cout << Data.name << endl;
		cout << "Price: $";
		cout << Data.price << endl;
		cout << "Theater Location: ";
		cout << Data.location << endl;

		cout << "stop it" << endl;

		info.read(reinterpret_cast<char*>(&Data), sizeof(Data));

	 } 


	cout << "end stuff from file" << endl;
	//close the file
	info.close();
}

