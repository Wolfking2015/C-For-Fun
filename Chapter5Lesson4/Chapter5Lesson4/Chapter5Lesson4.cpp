// Chapter5Lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;





int main()
{
	const double RATE_D = 0.1;
	const double RATE_C = 0.05;
	
	double Daphbne_initial = 100.0;
	double Cleo_initial = 100.0;

	double value_D = Daphbne_initial;
	double value_C = Cleo_initial;
	int year = 1;
	while (year > 0) {
		value_D = Daphbne_initial+Daphbne_initial*RATE_D*year ;
		value_C = value_C+ value_C * RATE_C;
		if (value_C > value_D) {
			cout << "C wins after "<< year<<" years.";
			break;

		}
		year += 1;
			



		
	}
}
