// Chapter5Lesson7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct car {
		string Brand;
		int year;

	};
	int carnum;
	cout << "How many cars do you wish to catalog?: ";
	(cin >> carnum).get();
	
	car *pCar = new car[carnum];
	int counter = 1;
	while (counter <= carnum) {
		cout << "Car #" << counter << endl;
		cout << "Please enter the make: ";
		//cin.getline((pCar + counter - 1)->Brand,20);
		getline(cin, (pCar+counter-1)->Brand);
		cout << "\nPlease enter the year made: ";
		(cin >> (pCar + counter - 1)->year).get();
		counter += 1;

	}
	cout << "Here is your collection:" << endl;
	counter = 1;
	while (counter <= carnum) {
		cout << pCar[counter - 1].year << "  " << pCar[counter - 1].Brand<<endl;
		counter += 1;
	}


}

