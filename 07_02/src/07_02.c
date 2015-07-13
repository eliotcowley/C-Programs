/*
 ============================================================================
 Name        : 07_02.c
 Author      : Eliot Cowley
 Version     : 1
 Copyright   : Your copyright notice
 Description : Revision of 07_02 C program from Lynda.com tutorial "C
 	 	 	   Essential Training" to use includes of separate header files.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "07_02.h"

//Global variables
float accountBalance, amount;

int main(void) {
	initializeAccount();
	getBalance();
	//Perform first transaction
	askCustomer();
	updateAccount(amount);
	getBalance();
	//Perform second transaction
	askCustomer();
	updateAccount(amount);
	addGift(5.0);
	getBalance();
	//Perform third transaction
	askCustomer();
	updateAccount(amount);
	addGift(2.0);
	getBalance();
	thankYou();
	return EXIT_SUCCESS;
}
