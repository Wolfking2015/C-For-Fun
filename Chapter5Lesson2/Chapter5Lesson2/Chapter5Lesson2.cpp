// Chapter5Lesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <array>
using namespace std;
const int Matsize = 101;
int main()
{
	array<long double, Matsize> fact;
	//long long fact[Matsize];
	
	fact[1]=fact[0] = 1L;
	for (int i = 2; i< Matsize; i++) {
		fact[i] = i * fact[i - 1];
	}
	for (int i = 0; i < Matsize; i++) {
		cout << i << "!=" << fact[i] << endl;
	}
}

