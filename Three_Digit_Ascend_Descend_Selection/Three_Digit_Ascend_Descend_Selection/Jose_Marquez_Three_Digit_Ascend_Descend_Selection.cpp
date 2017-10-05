/*
Jose Marquez and Priya Ramanathan - 10/5/17 Period 2
Three Digit Ascend and Descend Selection : *
store a three digit value and seperate the three digits to decide if it is ascending, descending, or neither 
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Thank you! \n";
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {


	int x, A, B, C; // three digit number & the individual digits

	cout << "Give me a positive, whole 3 digit number : " << "\n";
	cout << "Number: ";
	cin >> x;
	
	A = x / 100;
	B = (x % 100) / 10;
	C = (x % 10);
	if (A > B && B > C) {
		cout << "The digits of " <<x<< " are descending!" << "\n"; //descending
	}
	else if (A < B && B < C) {
		cout << "The digits of " <<x<< " are ascending!" << "\n" ; //ascending
	}
	else {
		cout << "The digits of " << x << " are neither ascending or descending!" << "\n";
	}
	
	
	pause(); // pauses to see the displayed text
}
