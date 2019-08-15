// Chapter2Lesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	double latitude;
	const int DEGREETOMINIUTE=60;
	const int MINUTETOSECOND = 60;
	double degree;
	double minutes;
	double seconds;

	cout << "Enter a latitude in degrees, miniutes, and seconds"<<endl;
	cout << "First, enter the degrees:";
	cin >> degree;
	cout << "\nNext, enter the minutes of arc:";
	cin >> minutes;
	cout << "\nFinally, enter the seconds of arc:";
	cin >> seconds;
	latitude = degree + minutes / DEGREETOMINIUTE + seconds / (MINUTETOSECOND*DEGREETOMINIUTE);
		cout << degree << " degrees," << minutes << " minutes, " << seconds << " seconds =" << latitude << " degrees";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
