// Chapter6Lesson8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{



	struct Donation {
		string name;
		double amount;
	};
	int Number;
	ofstream outFile; //OutFile an ofstream object
	

	outFile.open("Donation.txt");

	cout << "Please input the number of donators:\n";
	cin >> Number;
	outFile <<"Information of "<< Number << " donators"<<endl;
	
	
	Donation *pDonate = new Donation[Number];
	int Above10000[10] = { 0 };
	int counter = 0;

	for (int i = 0; i < Number; i++) {
		cout << "Please type in the name: \n";
		cin >> (pDonate + i)->name;
		cin.get();
		outFile << i+1<<"#"<<" Name" << (pDonate + i)->name<<endl;

		cout << "Please type in the donation amount: \n";
		cin >> (pDonate + i)->amount;
		outFile << i + 1 << "#" << " Amount " << (pDonate + i)->amount << endl;

		if ((pDonate + i)->amount > 10000) {
			Above10000[counter] = i;
			counter++;
		}
	}
	

	if (counter == 0) {
		cout << "None" << endl;
		outFile << "Grand Patrons: \nNone" << endl;
	}
	else {
		for (int j = 0; j < counter; j++) {
			cout << "Belows are the Grand Patrons:\n";
			cout << "Patrons " << (pDonate + Above10000[j])->name << endl;
			cout << "Donation= " << (pDonate + Above10000[j])->amount << endl;

			outFile << "Grand Patrons: "<<endl;
			outFile<< "Patrons " << (pDonate + Above10000[j])->name << endl;
			outFile << "Donation= " << (pDonate + Above10000[j])->amount << endl;

		}
	}
	outFile.close()

}

