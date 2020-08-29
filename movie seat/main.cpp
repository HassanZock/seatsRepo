
#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include "Theater.h"
#include "Menu.h"
//#include <array>
using namespace std;


int main() {

	// title things
	theater imax;
	menu UserMenu;


	//variables
	int userInput;

	
	

	cout << "Hello welcome to theater selection menu" << endl;
	cout << "What would you like to do?" << endl;
	UserMenu.displayMenu();

	// may be better to put this in the display and pass by reference 
	//the user input back to main
	// that way the while loop sugested below can be in optiondirector
	// think (to sleepy now)
	cout << "Please select a option : ";
	cin >> userInput;
	cout << endl;
	
	// while loop goes here to evaluate what to do for puchase
	//another ticket or getting a default

	UserMenu.optionDirector(userInput);
	
	
	
	


	/*
	imax.getRows();
	imax.getColomns();
	imax.EmptySeats();
	imax.DisplaySeats();
	imax.SeatSelect();
	imax.fillSeat();
	imax.DisplaySeats();
	//second time
	imax.SeatSelect();
	imax.fillSeat();
	imax.DisplaySeats();

*/



	//cout << "the rows value is: " << imax.showRows() << endl;
	//cout << "the colomns value is: " << imax.showColomns() << endl;

	return 0;
}