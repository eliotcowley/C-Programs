/*
 * functions.c
 *
 *  Created on: Jul 12, 2015
 *      Author: Eliot Cowley
 */

#include <stdio.h>
#include <stdlib.h>
#include "07_02.h"

//Global variables
float accountBalance, amount;

void initializeAccount(void){
	accountBalance = 0.0;
}

void addGift(float giftAmount){
	accountBalance += giftAmount;
	printf("Congratulations! A gift of $%.2f has been added to your account\n",giftAmount);
	fflush(stdout);
}

void askCustomer(void){
	printf("Next transaction please...\n");
	fflush(stdout);
	printf("Enter amount to credit (positive) or debit (negative):");
	fflush(stdout);
	scanf("%f",&amount);
	fflush(stdout);
}

void getBalance(void){
	printf("\nThe current balance in the account is $%.2f\n", accountBalance);
	fflush(stdout);
}

void updateAccount(float amount){
	accountBalance += amount;
	printf("The account was updated with $%.2f\n",amount);
	fflush(stdout);
}

void thankYou(void){
	printf("------  Thank you!  ------");
	fflush(stdout);
}
