#pragma once
#ifndef Theater_H
#define Theater_H
#include <vector>
using namespace std;

//Theater class decloration


class theater {

private:
	int row;
	int colomn;
	char abseats[15][30];
	vector < vector<char> > seats ;
	

	

public:
	void getRows();
	void getColomns();
	void EmptySeats();
	void DisplaySeats();
	int showRows();
	int showColomns();
};

#endif 

