/*
 ============================================================================
 Name        : factors.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : find the factors of a number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;

	printf("Type a number:");
	scanf("%d", &number);

	int divisor = 1;

	while(divisor <= number / 2){

		if(number % divisor == 0){

			printf("%d ", divisor);

		}

		divisor++;

	}

}
