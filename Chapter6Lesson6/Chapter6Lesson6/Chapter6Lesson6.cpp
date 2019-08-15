// Chapter6Lesson6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	
	struct Donation {
		string name;
		double amount;
	};
	int Number;
	

	cout << "Please input the number of donators:\n";
	cin >> Number;
	Donation *pDonate = new Donation[Number];
	int Above10000[10] = { 0 };
	int counter = 0;

	for (int i = 0; i < Number; i++) {
		cout << "Please type in the name: \n";
		cin>> (pDonate+i)->name;
		cin.get();
		cout << "Please type in the donation amount: \n";
		cin >> (pDonate + i)->amount;
		if ((pDonate + i)->amount > 10000) {
			Above10000[counter] = i;
			counter++;
		}
	}
	if (counter == 0) {
		cout << "None" << endl;
	}
	else {
		for (int j = 0; j < counter; j++) {
			cout << "Belows are the Grand Patrons:\n";
			cout << "Patrons " << (pDonate + Above10000[j])->name<<endl;
			cout << "Donation= " << (pDonate + Above10000[j])->amount << endl;
		}
	}
	


	

  
}
