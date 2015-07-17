/*
 ============================================================================
 Name        : BarChartRandom.c
 Author      : Eliot Cowley
 Version     :
 Copyright   : Your copyright notice
 Description : Displays a horizontal bar chart for randomly generated data.
 	 	 	   Demonstrates usage of arrays and loops.
 ============================================================================
 */

/* include standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* define macros */
#define NUM_DATA 10
#define MAX 50

/* global variables */
int counter = 0;
int data[NUM_DATA];

/* functions */
void printBar(int);
void fillArray(int[], int, int);

/* main function */
int main(void) {
	fillArray(data, NUM_DATA, MAX);
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

/* fills array with random ints */
void fillArray(int array[], int length, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		array[i] = rand() % max;
	}
}
