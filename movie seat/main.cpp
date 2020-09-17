#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <fstream>
#include "Menu.h"
#include "Theater.h"
#include "Admin.h"
#include "customer.h"
#include <stdlib.h>
//#include <array>
using namespace std;


int main() {

	// objects
	//theater imax;
	//Menu UserMenu;
	//Admin Susy;


	//variables
	//int Input;
	//int looper = 1;



	customer tunaface;

	tunaface.SetGenre();




	// Program begins
	/* GOOD
	cout << "Hello welcome to theater selection menu" << endl;
	cout << "What would you like to do?" << endl;
	UserMenu.displayMenu(&Input);

	while (Input < 1 || Input > 7) {
		cout << "That is not an option" << endl;
	UserMenu.displayMenu( &Input);
}
	
	UserMenu.optionDirector(Input);
	
	while (looper == 1) {

	UserMenu.displayMenu(&Input);
	UserMenu.optionDirector(Input);

	}
	*/ //GOOD
	//UserMenu.displayMovieInfo();
	

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