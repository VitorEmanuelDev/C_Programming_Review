/*
 ============================================================================
 Name        : odd_or_even.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Find whether an integer input is odd or even
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;

	printf("Type an integer number:");
	scanf("%d", &number);

	if(number % 2 == 0){

		printf("%d is an even number.", number);

	} else {

		printf("%d is an odd number.", number);

	}

}
