#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include "Menu.h"
#include "Admin.h"
#include "Theater.h"
#include "user.h"
#include "customer.h"

#include <stdlib.h> // for exit function
using namespace std;
	

int selection;


void customer::SetGenre() {

	do {

		cout << "what is your favorite Genre?" << endl;
		cout << "Select Genre: ";

		cout << "1) Comedy\n 2) Horror\n 3) Drama\n 4) Action\n 5) SciFi\n ";
		cin >> selection;


		switch (selection)
		{
		case 1:
			CustomerGenre = "Comedy";
			break;

		case 2:
			CustomerGenre = "Horror";
			break;

		case 3:
			CustomerGenre = "Drama";
			break;

		case 4:
			CustomerGenre = "Action";
			break;

		case 5:
			CustomerGenre = "SciFi";
			break;

		default:
			cout << "Please select one of the choices" << endl;
		}
	} while (selection < 1 || selection > 5);

}


void customer::setEmail() {
	cout << "what is your customer email?" << endl;
	cout << "customer email: ";
	getline(cin, customerEmail);
}

//void user::greeting() {
	//cout << "Hello welcome to your work portal" << endl;
//}