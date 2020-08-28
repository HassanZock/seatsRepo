#include<iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
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

	
	// code to resize vector with "row" length for row and "colomn" length for colomn with initial value of 'a'
	seats.resize(row, vector<char>(colomn, 'a'));

	//seats.resize(row, vector<char>(colomn));

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

	
	//seats[2][3] = '-';
	cout << "Row    abcdefghijklmnopqrstuvwxyz" << endl;
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
	int NestedAnswer = 1;
	int inputLength = 1;

	/*
	cout << "Please select your seat. Answer must be in the form of a number and a letter ";
	cin >> chosenSeat;
	rsize_t inputLength = chosenSeat.length();

	cout << "the seat length is " << inputLength << endl;
	*/



	while (NestedAnswer == 1) {

		while (inputLength != 2) {
			cout << "Please select your seat: ";
			cin >> chosenSeat;

			//cout << "the seat length is " << inputLength << endl;

			inputLength = chosenSeat.length();
		}

		strcpy_s(seatPosition, chosenSeat.c_str());


		cout << "The first character is: " << seatPosition[0] << endl;
		cout << "The second character is: " << seatPosition[1] << endl;

		if (isdigit(seatPosition[0]) == false || isalpha(seatPosition[1]) == false) {

			cout << "The first digit must be a number and the second a letter" << endl;
			inputLength = 1;
		}
		else {

			cout << "Thank you for your selection" << endl;
			NestedAnswer = 0 ;
		}

	}

}
//*******************************************************************************************
//     Fill seat
//*******************************************************************************************

void theater::fillSeat() {

	//converts all inputs which are lettters to uppercase
	char newseat = toupper(seatPosition[1]);

	//convert string to array numbers
	//the extra -1 is to adjust for displaying at row 1 instead of 0
	int position1 = ((int(seatPosition[0]) - 48)-1);
	int position2 = ((int(newseat) - 64)-1);

	//test the positions are displayed correctly
	////cout << "position 1 is " << (position1 ) << endl;
	////cout << "position 2 is " << (position2 ) << endl;


	// check if seat is already taken, if not assign seat if it is then ask them to select another seat
	if (seats[position1][position2] == '#') {
		
		seats[position1][position2] = '-';
	}
	else {
		cout << "im sorry this seat is already taken please select another." << endl;
	}

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