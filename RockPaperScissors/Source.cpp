#include <iostream>
#include "ai.cpp"


#ifdef __linux__
#include <stdio.h>
#define pause getch();


#endif

#ifdef _WIN32
#include <stdio.h>
#define pause system("pause");


#endif



using namespace std;

int main(int argc, char* argv[])
{
	cout << "Rock Paper Scissors" << endl;
	cout << "1 - Rock " << endl;
	cout << "2 - Paper " << endl;
	cout << "3 - Scissors " << endl;
	string choice;
	cout << "What your choice? ";
	cin >> choice;
	string n = ai(true);
	if (choice == "1") {
		choice = "Rock";
	}
	else if (choice == "2") {
		choice = "Paper";
	}
	else if (choice == "3") {
		choice = "Scissors";
	}
	else {
		cout << "Wrong choice!" << endl;
		pause
		return 1;
	}
	cout << n << endl;
	if (n == choice) {
		cout << "Draw" << endl;
		pause
		return 0;
	}
	if (choice == "Rock") {
		if (n == "Paper") {
			cout << "You loosed!" << endl;
		}
		if (n == "Scissors") {
			cout << "You win!" << endl;
		}
	}
	if (choice == "Paper") {
		if (n == "Scissors") {
			cout << "You loosed!" << endl;
		}
		if (n == "Rock") {
			cout << "You win!" << endl;
		}
	}
	if (choice == "Scissors") {
		if (n == "Rock") {
			cout << "You loosed!" << endl;
		}
		if (n == "Paper") {
			cout << "You win!" << endl;
		}
	}
	pause
}