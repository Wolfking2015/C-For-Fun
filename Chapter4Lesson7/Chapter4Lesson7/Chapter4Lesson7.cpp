// Chapter4Lesson7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>;
using namespace std;
struct Pizza {
	string Name;
	float Diameter;
	float Weight;
};

int main()
{
	Pizza *pPizza = new Pizza;
	
	cout << "Please input the pizza name:";
	getline(cin, pPizza->Name);
	cout << "\nPlease input the pizza diameter:";
	cin >> pPizza ->Diameter;
	cout << "\nPlease input the pizza weight:";
	cin >> pPizza->Weight;
	cout << "Pizza name: " << pPizza->Name <<endl;
	cout << "Pizza diameter: " << pPizza->Diameter<<endl;
	cout << "Pizza weight: " << pPizza->Weight <<endl;


   
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
