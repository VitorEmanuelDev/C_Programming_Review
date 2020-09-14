/*
 ============================================================================
 Name        : find_average.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : find the average of n numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float number;
	int divisor;
	float dividend = 0;
	float average;

	printf("How many numbers are there on your list?");

	scanf("%d", &divisor);

	if(divisor < 0){

		divisor *= -1;

	}

	if(divisor > 10){

		printf("The maximum number is 10.");
		divisor = 10;

	}

	printf("Type the numbers:");

	for(int current = 0; current < divisor; current++){

		scanf("%f", &number);

		if(number < 0 || number > 10){

			printf("Not a valid number. Try again.");
			current--;

		}else{

			dividend += number;

		}

	}

	average = dividend/divisor;

	printf("The average is: %.2f\n", average);

	if(average > 5 && average < 10){

		printf("You passed.");

	}

	if(average > 0 && average < 5){

		printf("You have to take that subject again.");

	}

}
