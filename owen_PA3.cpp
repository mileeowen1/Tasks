/*
Name: Milee Owen
Class: CPSC 121, Spring 2019
Date: February 16, 2019
Programming Assignment: PA3
Description: Solve five programming tasks using loops.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
// prompt user for first task 
cout << "Task 1" << endl;
cout << "********************************************************" << endl;
	// assign variables
	int userInteger = 0;
	int whileSolution = 0;
	int forSolution = 0;
	int i = 1;
	string temp;
    // prompt user to enter an integer than is greater than or equal to 0
    cout << "Please enter an integer >= 0: ";
	cin >> userInteger;
	// assign the integer to another variable so first number remains unchanged
	whileSolution = userInteger;
	forSolution = userInteger;
	// create a while loop to solve for n factorial
	if (userInteger == 0) {
		cout << "While loop solution: " << userInteger << "! = 1" << endl;
		cout << "For loop solution: " << userInteger << "! = 1" << endl << endl;
	}
	else {
		while (i < userInteger) {
			whileSolution = whileSolution * (userInteger - i);
		    i++;
		}
		// output results
		cout << "While loop solution: " << userInteger << "! = " << whileSolution << endl;
		// create a for loop to solve for n factorial
		for(i = 1; i < userInteger; i++) {
			forSolution = forSolution * (userInteger - i);
		}
		// output results
		cout << "For loop solution: " << userInteger << "! = " << forSolution << endl << endl;
	}
	// prompts user to enter to continue tasks
	getline(cin, temp);
	cout << "Press enter to continue..." << endl;
	getline(cin, temp);
// prompt user for second task
cout << "Task 2" << endl;
cout << "********************************************************" << endl;
	// assign variables
	int numPayStubs = 0;
	int payStubValues = 0;
	double sumPayStubValue = 0.00;
	int j = 0;
	string taxBracket;
	// prompt user to under number of pay stubs
	cout << "Please enter the number of pay stubs: ";
	cin >> numPayStubs;
	// create a loop to add up the values of all pay stubs
	for (j = 0; j < numPayStubs; j++) {
	cout << "Please enter the amount for pay stub #" << j + 1 << ": ";
	cin >> payStubValues;
	sumPayStubValue = sumPayStubValue + payStubValues;
	}
	// create a boolean condition that will tell what tax bracket the total salary is
	if (sumPayStubValue < 15000)
	taxBracket = "low income";
	else if (sumPayStubValue > 200000)
	taxBracket = "high income";
	else
	taxBracket = "medium income";
	// output the results
	cout << "Total salary for the year: $" << sumPayStubValue << " Tax bracket: " << taxBracket << endl << endl;
	// prompts user to enter to continue tasks
	getline(cin, temp);
	cout << "Press enter to continue..." << endl;
	getline(cin, temp);
// prompt user for third task
cout << "Task 3" << endl;
cout << "********************************************************" << endl;
	// assign variables
	int userInt = 0;
	int numOfDigits = 0;
	int sumDigits = 0;
 	// prompt user to input an integer
    cout << "Enter an integer to sum the digits of: ";
    cin >> userInt;
    // converts negative numbers to positive
    numOfDigits = abs(userInt);
    // create a loop to calculate the sum of the integer based on how many numbers in the integer
    while (numOfDigits > 0) {
        sumDigits = sumDigits + numOfDigits % 10;
        numOfDigits = numOfDigits / 10;
    }
    // output results
	cout << "Sum of " << userInt << " is: " << sumDigits << endl << endl;
	// prompts user to enter to continue tasks
	getline(cin, temp);
	cout << "Press enter to continue..." << endl;
	getline(cin, temp);
// prompt user for fourth task
cout << "Task 4" << endl;
cout << "********************************************************" << endl;
	// assign variables
	int piNumTerms = 0;
	double oddNum = 0.0;
	double evenNum = 0.0;
	double piNumerator = 4.0;
	double piDenominator = 1.0;
	double piIncrement = 0.0;
	double piApprox = 0.0;
	double l = 1.0;
	// prompt user to enter a number
	cout << "Please enter the number of terms to approximate pi: ";
	cin >> piNumTerms;
	// create a loop that will calculate the approximation of pi based on the number inputed
	while (l <= piNumTerms) {
		l += 2;
		oddNum = piNumerator/piDenominator;
		piDenominator += 2.0;
		evenNum = piNumerator/piDenominator;
		piDenominator += 2.0;
		piIncrement = oddNum - evenNum;
		piApprox = piApprox + piIncrement;
	}
	// output results
	cout << "Pi approximation: " << piApprox << endl << endl;
	// prompts user to enter to continue tasks
	getline(cin, temp);
	cout << "Press enter to continue..." << endl;
	getline(cin, temp);
// prompt user for fifth task
cout << "Task 5" << endl;
cout << "********************************************************" << endl;
	// assign variables
	int userNum = 0;
	int nextNum = 0;
	int m = 1;
	int n = 0;
	int totalSum = 0;
	// prompt user to enter a number
	cout << "Please enter number: ";
	cin >> userNum;
	// create a loop to print the number the same amount of times as the number
	while (m <= userNum) {
		nextNum = userNum - (userNum - m);
		// create a loop that will print out the numbers and the sum of the numbers next to it
		while (n < m) {
			cout << nextNum;
			totalSum = totalSum + nextNum;
			n++;
		}
		m++;
		// output results
		cout << " " << totalSum << endl;
		// resets the variables so no errors occur for future loops
		n = 0;
		totalSum = 0;
	}

	return 0;	
}
