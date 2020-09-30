// Anita Martin
// amartin98@cnm.edu
// First Class: SimpleCalc

// Driver.cpp

#include "SimpleCalc.h"

int main()
{
	// Header
	cout << "\n\t\tWelcome to the Simple Calculator App\n";
	cout << "\tAnita Martin Project 2 CIS 2275\n";
	cout << "\n";
	
	// Declare variables to use
	char chosenOper;
	char goAgain{ 'y' };
	double num1, num2;

	// Create a simpleCalc objects
	SimpleCalc calc;

	// Open Loop
	do
	{
		// Get inputs from user
		cout << "Please enter the operation you would like to use:\n";
		cout << "\t + = add \n\t - = subtract \n\t * = multiply \n\t / = divide \n-->> ";
		cin >> chosenOper;
		cout << "\n";
		cout << "Enter the first number:\n-->> ";
		cin >> num1;
		cout << "\n";
		cout << "Enter the second number:\n-->> ";
		cin >> num2;
		cout << "\n";

		// Use calc to call SetOperation
		calc.SetOperation(chosenOper, num1, num2);

		// Display the results
		cout << calc.GetResults();

		// Ask the user if they way to calculate some more
		cout << "\n";
		cout << "\nWould you like to try again? (y / n)\n-->>";
		cin >> goAgain;
		cout << "\n";

	} while (goAgain == 'y');

	// Say Good-bye
	cout << "\n";
	cout << "\nThank you for using our Calculator App, good-bye.\n";

	cout << endl;

return 0;
}