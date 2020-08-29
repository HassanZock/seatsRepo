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
	cout << "3) See theater locations" << endl;
	cout << "4) Review your orders" << endl;
	cout << "5) Purchase another ticket" << endl;
	cout << "6) Exit Program" << endl;
	// possible 7 admin to set theater up?
}


void menu::optionDirector(int input) {



switch (input)
	{
	case 1:
		cout << "ticket options" << endl;
		// add a friend to old class
		break;
	case 2:
		displayMovieandTime();
		break;
	case 3: 
		displayTheaterLocation();
		break;
	case 4:
		cout << "order review" << endl;
		break;
	case 5:
		cout << "purchase another ticket" << endl;
		break;
	case 6:
		cout << "exit program" << endl;
		break;
	default:
		cout << "you suck try again" << endl;
		
	}

}

void menu::displayMovieandTime() {

	cout << "display ticket and prices "<< endl;


}

void menu::displayTheaterLocation() {

	cout << "display theater locations " << endl;


}