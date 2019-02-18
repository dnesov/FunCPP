#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int answer;

void Greeter()
{
	cout << "Greeter\n";
	cout << "Hey, what is your name?\n";
	string myName;

	cin >> myName;

	cout << "Hello, " << myName;
}

void graduateProgram()
{
	cout << "Graduate Program\n";

	int score;

	cin >> score;

	if (score <= 59)
	{
		cout << "GOT AN F";
	} 
	else if (score <= 69)
	{
		cout << "GOT AN D";
	}
	else if (score <= 79)
	{
		cout << "GOT AN C";
	}
	else if (score <= 89)
	{
		cout << "GOT AN B";
	}
	else if (score <= 100)
	{
		cout << "GOT AN A";
	}
	else if (score > 100)
	{
		cout << "EPIC!";
	}
}





int main()
{
	cout << "Hello! Please select the program you want to execute!\n";
	cout << "Greeter (1), Graduate program (2)\n";

	cin >> answer;

	switch (answer)
	{

	case 1:
		Greeter();
		break;

	case 2:
		graduateProgram();
		break;
	}

	return 0;
}