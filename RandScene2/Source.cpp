#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

//void GetNumFromUser();


void main() {
	string PlayerChoice;
	bool PlayAgain = true;

	do {

		DisplayIntro();
		RandomScenarioGen();

		cout << "\nWould you like to play again?(yes, no)";
		cin >> PlayerChoice;
		if (PlayerChoice == "yes" || PlayerChoice == "Yes" || PlayerChoice == "Y" || PlayerChoice == "y" || PlayerChoice == "sure" || PlayerChoice == "ok") {
			PlayAgain = true;
		}
		else {
			PlayAgain = false;
		}
	} while (PlayAgain);
}
