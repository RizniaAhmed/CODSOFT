#include <iostream>
using namespace std;
// RANDOM NUMBER GENERATOR GAME
void main()
{
	int a;
	int b;
	int count = 1; // Start a counter for counting number of guesses
		srand(time(NULL)); // Using time as seed value to generate different random value for each execution of program
	a = rand() % 50 + 1; // Range of random numbers is 1-50

	 cout << "Welcome! Please guess a number between 1 & 50" << endl;
	 cin >> b; 

		 while (b != a){
			 if (b > 50) {
				 cout << "Out of range. Try again " << endl;
				 cin >> b;
			 }
			 else  if (b <= a + 5 && b >= a - 5) {
				 cout << endl << "You are close. Guess again" << endl;
				 cin >> b;
			 }
			 
			 else if (b < a - 5) {
				 cout << endl << "Too low. Guess again" << endl;
				 cin >> b;
			 }
			 else if (b > a + 5) {
				 cout << endl << "Too high. Guess again" << endl;
				 cin >> b;
			 }
		
			 count++;

		
		 }
		 
		 if (b == a) {
			 cout << endl << "Congratulations! Correct Guess." << endl << endl << "It took you " << count << " tries";

		 }

		 system("pause>0");
		 }

		