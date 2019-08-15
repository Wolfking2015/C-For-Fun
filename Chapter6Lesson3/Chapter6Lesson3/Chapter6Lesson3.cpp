// Chapter6Lesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please enter one f the following choices:\n";
	cout << "c) carnivore        p)pianist" << endl;
	cout << "t) tree               g)game" << endl;
	char enter;
	cin.get(enter);
	while (!(enter == 'c' || enter == 'p' || enter == 't' || enter == 'g')) {
		cout << "Please enter c) or p) or t) or g)" << endl;
		cin.clear();
		cin.get(enter);
	}
	switch (enter)
	{
	    case 'c':
			cout << "A wolf is a carnivore" << endl;
				break;
		case 'p':
			cout << "Lang Lang is a pianist" << endl;
			break;
		case 't':
			cout << "A maple is a tree" << endl;
			break;
		case 'g':
			cout << "Pokemon is a game" << endl;
			break;

	}
		

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
