// Chapter4Lesson1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string FirstName;
	string LastName;
	char grade[100];
	int age;
	cout << "What's your first name? ";
	getline(cin,FirstName);
	cout << "\nWhat's your last name? ";
	getline(cin, LastName);
	cout << "\nWhat letter do you preserve? ";
	cin>>grade;
	cout << "\nWhat is your age? ";
	cin >> age;
	cout << "Name: "<< LastName<<", "<<FirstName<<endl;
	cout << "Grade: " << char(grade[0]+1) << endl;
	cout << "Age: " << age;



	



     
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
