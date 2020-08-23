#pragma once
#ifndef Theater_H
#define Theater_H

//Theater class decloration


class theater {

private:
	int row;
	int colomn;
	char seats[15][30];

public:
	void getRows();
	void getColomns();
	void EmptySeats();
	void DisplaySeats();
	int showRows();
	int showColomns();
};

#endif 

