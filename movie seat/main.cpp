
#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include "Theater.h"
//#include <array>
using namespace std;


int main() {

	// title things
	theater imax;


	/*
*/	
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





	//cout << "the rows value is: " << imax.showRows() << endl;
	//cout << "the colomns value is: " << imax.showColomns() << endl;

	return 0;
}