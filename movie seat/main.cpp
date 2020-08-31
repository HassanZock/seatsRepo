#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include "Menu.h"
#include "Theater.h"
#include "Admin.h"
//#include <array>
using namespace std;


int main() {

	// objects
	theater imax;
	Menu UserMenu;
	Admin Roly;


	//variables
	int Input;

	
	//Roly.passwordCheck();

	// Program begins

	cout << "Hello welcome to theater selection menu" << endl;
	cout << "What would you like to do?" << endl;
	UserMenu.displayMenu(&Input);

	while (Input < 1 || Input > 7) {
		cout << "That is not an option" << endl;
	UserMenu.displayMenu( &Input);
}
	
	UserMenu.optionDirector(Input);
	

	/*
	imax.getRows();
	imax.getColomns();
	imax.EmptySeats();
	imax.DisplaySeats();
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