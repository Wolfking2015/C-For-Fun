// Chapter6Lesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <array>

using namespace std;
int main()
{
	array<double, 10> donation;
	cout << "Please type in the donation amount, and end with a non numeric number\n";
	double average;
	double sum=0;
	int counter = 0;
	int i = 0;
	while (i <10) {
		if (cin >> donation[counter]) {
			sum += donation[counter];
			counter++;

		}
			

		else
			break;
		i++;
	}
	average = sum / counter;
	int above = 0, below = 0;
	for (int j = 0; j < counter;j++) {
		if (donation[j] > average) above++;
		else below++;
	}
	cout << "The average number is " << average << endl;
	cout << above << " above the average" << endl;
	cout << below << " below the average" << endl;



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
