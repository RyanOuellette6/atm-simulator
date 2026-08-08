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
	double deposit = 0.00;
	double withdraw = 0.00;
	int userInput = 0;



	while (userInput != 4) {
		
		printf("Welcome to the ATM! \nInput the number of the action you wish to perform!\n");
		printf("1. Check Balance \n2. Deposit Money \n3. Withdraw Money \n4. Exit program \n");
		scanf_s("%d", &userInput);


		if (userInput == 1) {
			printf("\nYour balance is $%.2lf!\n\n", balance);
		}



		if (userInput == 2) {
			printf("\nPlease enter the amount you wish to deposit\n");
			scanf_s("%lf", &deposit);

			if (deposit < 0.00) {
				printf("\nYou cannot deposit negative money!\n\n");
			}

			if (deposit >= 0.00) {
				printf("\nSuccessfully deposited $%.2lf!\n\n", deposit);
				balance = balance + deposit;

			}

		}


		if (userInput == 3) {
			printf("\nPlease enter the amount you wish to withdraw\n");
			scanf_s("%lf", &withdraw);

			if (withdraw < 0.00) {
				printf("\nYou cannot withdraw negative money!\n\n");
			}

			if (withdraw > balance) {
				printf("\nYou cannot withdraw more money than you have!\n\n");
			}

			if (withdraw >= 0.00 && withdraw <= balance) {
				printf("\nSuccessfully withdrew $%.2lf\n\n", withdraw);
				balance = balance - withdraw;
			}

		}


		if (userInput == 4) {
			printf("\nThank you for using the ATM! Goodbye!\n\n");
		}

		if (userInput != 1 && userInput != 2 && userInput != 3 && userInput != 4) {
			printf("\nError! Please only enter 1-4 at this screen!\n\n");
		}



		} 




	return 0;
}
