// Chapter5Lesson5And6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string Month[12] = { "Jan","Feb","Mar","Apr","May","Jun","July","Aug",
		"Sep","Oct","Nov","Dec" };
	string Year[3] = {"First","Second","Third"};
	//int BookAmount[12];
	int BookAmount[3][12];
	int AmountPerYear[3] = { 0, 0 ,0 };
	int sum = 0;
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 12; i++) {
			cout << "Type in " << Year[j]<<" year "<<" "<<Month[i] << "'s" << " book selling number: ";
			cin >> BookAmount[j][i];
			AmountPerYear[j] += BookAmount[j][i];
			sum+= BookAmount[j][i];
		}

	}
	

	for (int i = 0; i < 3; i++) {
		cout << "The total sells amount for the " << Year[i] <<" year "<< " is " << AmountPerYear[i] << endl;

	}

	cout << "The total number of book sold this year is " << sum << endl;

}

