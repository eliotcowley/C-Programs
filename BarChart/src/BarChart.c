/*
 ============================================================================
 Name        : BarChart.c
 Author      : Eliot Cowley
 Version     :
 Copyright   : Your copyright notice
 Description : Displays a horizontal bar chart for given data
 ============================================================================
 */

/* include standard libraries */
#include <stdio.h>
#include <stdlib.h>

/* define macros */
#define NUM_DATA 10

/* global variables */
int counter = 0;
int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

/* functions */
void printBar(int);

/* main function */
int main(void) {
	while (counter < NUM_DATA) {
		printBar(data[counter]);
		counter++;
	}
	return EXIT_SUCCESS;
}

/* prints a single horizontal bar */
void printBar(int i) {
	int n = 0;
	while (n < i) {
		printf("•");
		n++;
	}
	printf("\n");
}
