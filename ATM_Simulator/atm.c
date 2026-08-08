/*Create a dynamic command-line ATM simulator that handles basic banking transactions.

Core Requirements

Initial Balance: Start the user with a hardcoded balance of $1,000.00.

Interactive Menu: Display a repetitive text menu with four distinct choices:

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit Program

Input Validation: Prevent users from withdrawing more money than they have. Block negative deposit or withdrawal entries.

Loop Execution: The program should continue to display the menu and process user input until the user chooses to exit. */

#include <stdio.h>
#include <stdlib.h>


int main() {
	
	double balance = 1000.00;
	int userInput = 0;

	//while (userInput != 4) {
		
		printf("Welcome to the ATM! \nInput the number of the action you wish to perform!\n");
		printf("1. Check Balance \n2. Deposit Money \n3. Withdraw Money \n4. Exit program \n");


		//} 




	return 0;
}