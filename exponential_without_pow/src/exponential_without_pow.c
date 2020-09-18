/*
 ============================================================================
 Name        : exponential_without_pow.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : exponential without pow()
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;
	int exponent;

	printf("Type a number:");
	scanf("%d", &number);

	printf("Type an exponent:");
	scanf("%d", &exponent);

	int current = 0;
	int product = 1;

	while(current < exponent){

		product *= number;

		current++;

	}

	printf("%d", product);

}
