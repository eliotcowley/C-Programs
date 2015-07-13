/*
 ============================================================================
 Name        : RecursiveNumberCount.c
 Author      : Eliot Cowley
 Version     : 1
 Description : Asks the user to input two numbers as lower and higher bounds,
 	 	 	   and uses recursion to print the numbers in between.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printNumbers(int, int);

int low, high;

int main(void) {
	puts("Please enter an integer to be the lower bound:");
	fflush(stdout);
	scanf("%d", &low);
	fflush(stdout);
	puts("Please enter an integer to be the higher bound:");
	fflush(stdout);
	scanf("%d", &high);
	fflush(stdout);
	printNumbers(low, 1);

	return EXIT_SUCCESS;
}

void printNumbers(int n, int k) {
	printf("Step %d: %d\n", k, n);
	fflush(stdout);
	if (n < high) {
		printNumbers(n + 1, k + 1);
	}
}
