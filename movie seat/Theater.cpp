#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include "Theater.h"
using namespace std;


//*******************************************************************************************
//     Set Row
//*******************************************************************************************
void theater::getRows() {
	cout << "How many rows does the theater have? ";
	cin >> row;
}


//*******************************************************************************************
//     Set Colomn
//*******************************************************************************************

void theater::getColomns() {
	cout << "How many colomns does the theater have? ";
	cin >> colomn;
}


//*******************************************************************************************
//     Empty the Seats
//*******************************************************************************************

void theater::EmptySeats() {

	//char seats[row][colomn];
	
	seats.resize(row, vector<char>(colomn, 'a'));

	for (int i = 0; i < row  ; i++) {
		for (int j = 0; j < colomn ; j++) {

			seats[i][j] = '#';
		}
	}
}

//*******************************************************************************************
//     Displays the Seats
//*******************************************************************************************
void theater::DisplaySeats() {

	cout << "Row    123456789012345678901234567890" << endl;
	for (int i = 0; i < row ; i++) {

		cout << "Row " << setw(2) << i + 1 << " ";
		for (int j = 0; j < colomn ; j++) {

			cout << seats[i][j];
		}
		cout << endl;
	}
}

//*******************************************************************************************
//     Take a Seat
//*******************************************************************************************
void theater::SeatSelect() {

	string chosenSeat;
	//int inputLength = 1;

	cout << "Please select your seat: ";
	cin >> chosenSeat;
	rsize_t inputLength = chosenSeat.length();

cout << "the seat length is " << inputLength << endl;
	


while (inputLength != 2) {
	cout << "Please select your seat: ";
	cin >> chosenSeat;

	//cout << "the seat length is " << inputLength << endl;

	inputLength = chosenSeat.length();
	}

	char seatPosition[3];

	strcpy_s(seatPosition, chosenSeat.c_str());
	
	
	
	cout << "The first character is: " << seatPosition[0] << endl;
	cout << "The second character is: " << seatPosition[1] << endl;

	//int ascii = chosenSeat;
	//cout << "the seat is "<< ascii << endl;
	


}

//*******************************************************************************************
//     Show Row
//*******************************************************************************************
int theater::showRows() {
	//cout << "the rows entered is: "<< row;
	return row;
}


//*******************************************************************************************
//     Show Colomn
//*******************************************************************************************
int theater::showColomns() {
	//cout << "the colomns entered is: " << colomn;
	return colomn;
}