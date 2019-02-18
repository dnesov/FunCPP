// FunCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string helloWorld()
{
	cout << "Hey, what is your name?\n";
	string myName;
	getline(cin, myName);

	cout << "Hello, " << myName;
	return "";
}


int main()
{
	helloWorld();
	return 0; 
}
