/*
 * main.c
 *
 *  Created on: Jul 10, 2015
 *      Author: Eliot Cowley
 */

#include <stdio.h>
#include <stdlib.h>

float celsiusToFahrenheit(float);
float celsiusToKelvin(float);

int main(void) {
	const float freezingCelsius = 0;
	const float boilingCelsius = 100;

	puts("Freezing Point");
	printf("Celsius: %f\n", freezingCelsius);
	printf("Fahrenheit: %f\n", celsiusToFahrenheit(freezingCelsius));
	printf("Kelvin: %f\n\n", celsiusToKelvin(freezingCelsius));

	puts("Boiling Point");
	printf("Celsius: %f\n", boilingCelsius);
	printf("Fahrenheit: %f\n", celsiusToFahrenheit(boilingCelsius));
	printf("Kelvin: %f\n", celsiusToKelvin(boilingCelsius));

	return EXIT_SUCCESS;
}

float celsiusToFahrenheit(float celsius) {
	return celsius * (9/5) + 32;
}

float celsiusToKelvin(float celsius) {
	return celsius + 273;
}
