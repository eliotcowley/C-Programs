/*
 * main.c
 *
 *  Created on: Jul 10, 2015
 *      Author: Eliot Cowley
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float centimeters, inches, delta;
	int feet;

	puts("Please enter an amount in centimeters:");
	fflush(stdout);
	scanf("%f", &centimeters);
	fflush(stdout);
	inches = centimeters * 0.393701;
	feet = inches / 12;
	delta = inches - (feet * 12);
	printf("That is equivalent to %d feet %.1f inches", feet, delta);
	fflush(stdout);

	return EXIT_SUCCESS;
}
