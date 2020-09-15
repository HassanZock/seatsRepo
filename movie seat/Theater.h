#pragma once
#ifndef Theater_H
#define Theater_H
#include <vector>
#include <cstring>
using namespace std;

//Theater class decloration


class theater {

private:
	
	
	//char abseats[15][30];
	
	static char seatPosition[3];
	static int row;
	static int colomn ;
	static vector<vector<char>> seats ;
	


public:

	void getRows();
	void getColomns(); 
	void EmptySeats();
	void DisplaySeats();
	void SeatSelect();
	void fillSeat();
	int showRows();
	int showColomns();
};

#endif 

