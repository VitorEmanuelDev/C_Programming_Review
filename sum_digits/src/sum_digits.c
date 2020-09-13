/*
 ============================================================================
 Name        : sum_digits.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : sum of digits
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;
	int sum = 0;
	int remainder;

	printf("Type a number:\n");
	scanf("%d", &number);

	while(number != 0){

		remainder = number % 10;
		sum += remainder;
		number = number / 10;

	}

	printf("The sum is %d\n", sum);

}
